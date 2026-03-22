#version 330 core

struct PointLight {
   vec3 position;

   float constant;
   float linear;
   float quadratic;
   
   vec3 ambient;
   vec3 diffuse;
   vec3 specular;
};

struct DirLight {
   vec3 direction;

   vec3 ambient;
   vec3 diffuse;
   vec3 specular;
};

struct SpotLight {
   vec3 position;
   vec3 direction;
   float cutOff;
   float outerCutOff;

   vec3 ambient;
   vec3 diffuse;
   vec3 specular;
};

struct Material {
   vec3 ambient;
   vec3 diffuse;
   vec3 specular;
   float shininess;

   sampler2D diffuseTexture;
   sampler2D specularTexture;
};

#define NR_POINT_LIGHTS 1
#define NR_DIR_LIGHTS 1
#define NR_SPOT_LIGHTS 2

uniform PointLight pointLights[NR_POINT_LIGHTS];
uniform DirLight dirLights[NR_DIR_LIGHTS];
uniform SpotLight spotLights[NR_SPOT_LIGHTS];
uniform Material material;

out vec4 FragColor;

in VS_OUT {
    vec3 FragPos;
    vec3 Normal;
    vec2 TexCoord;
    vec4 FragPosLightSpace;
} fs_in;

uniform vec3 viewPos;
uniform sampler2D shadowMap;

vec3 CalcPointLight(PointLight light, vec3 normal, vec3 fragPos, vec3 viewDir, vec2 texCoord, float shadow)
{
   vec3 ambiant = light.ambient * material.ambient * vec3(texture(material.diffuseTexture, texCoord));

   vec3 lightDir = normalize(light.position - fragPos);

   float diff = max(dot(normal, lightDir), 0.0);
   vec3 diffuse = light.diffuse * (diff * material.diffuse) * vec3(texture(material.diffuseTexture, texCoord));

   vec3 reflectDir = reflect(-lightDir, normal);
   float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);

   vec3 specular = light.specular * (spec * material.specular) * vec3(texture(material.specularTexture, texCoord));

   float distance = length(light.position - fragPos);
   float attenuation = 1.0 / (light.constant + light.linear * distance + light.quadratic * (distance * distance));

   diffuse *= attenuation;
   specular *= attenuation;

   return ambiant * attenuation + (1.0 - shadow) * (diffuse + specular) ;
}

vec3 CalcDirLight(DirLight light, vec3 normal, vec3 viewDir, vec2 texCoord)
{
   vec3 ambiant = light.ambient * material.ambient * vec3(texture(material.diffuseTexture, texCoord));

   vec3 lightDir = normalize(-light.direction);

   float diff = max(dot(normal, lightDir), 0.0);
   vec3 diffuse = light.diffuse * (diff * material.diffuse) * vec3(texture(material.diffuseTexture, texCoord));

   vec3 reflectDir = reflect(-lightDir, normal);
   float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);

   vec3 specular = light.specular * (spec * material.specular) * vec3(texture(material.specularTexture, texCoord));

   return ambiant + diffuse + specular;
}

vec3 CalcSpotLight(SpotLight light, vec3 normal, vec3 fragPos, vec3 viewDir, vec2 texCoord, float shadow)
{
   vec3 lightDir = normalize(light.position - fragPos);
   vec3 ambient = light.ambient * material.ambient * vec3(texture(material.diffuseTexture, texCoord));
   
   float theta = dot(lightDir, normalize(-light.direction));
   float epsilon = light.cutOff - light.outerCutOff;
   float intensity = clamp((theta - light.outerCutOff) / epsilon, 0.0, 1.0);

   float diff = max(dot(normal, lightDir), 0.0);
   vec3 diffuse = light.diffuse * (diff * material.diffuse) * vec3(texture(material.diffuseTexture, texCoord));

   vec3 reflectDir = reflect(-lightDir, normal);
   float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);
   vec3 specular = light.specular * (spec * material.specular) * vec3(texture(material.specularTexture, texCoord));

   return ambient + (diffuse + specular) * intensity * (1.0 - shadow);
}

float ShadowCalculation(vec4 fragPosLightSpace, vec3 normal, vec3 lightDir)
{
   float bias = max(0.05 * (1.0 - dot(normal, lightDir)), 0.005);  
   vec3 projCoords = fragPosLightSpace.xyz / fragPosLightSpace.w;
   projCoords = projCoords * 0.5 + 0.5;

   if(projCoords.z > 1.0)
        return 0.0;

   float currentDepth = projCoords.z;
   float shadow = 0.0;
   vec2 texelSize = 1.0 / textureSize(shadowMap, 0);

   for(int x = -1; x <= 1; ++x)
   {
      for(int y = -1; y <= 1; ++y)
      {
         float pcfDepth = texture(shadowMap, projCoords.xy + vec2(x, y) * texelSize).r;
         shadow += currentDepth - bias > pcfDepth ? 1.0 : 0.0;
      }    
   }

   shadow /= 9.0;
   return shadow;
}

void main()
{
   vec3 norm = normalize(fs_in.Normal);
   vec3 viewDir = normalize(viewPos - fs_in.FragPos);

   vec3 result = vec3(0.0);

   for(int i = 0; i < NR_DIR_LIGHTS; i++)
   {
      result += CalcDirLight(dirLights[i], norm, viewDir, fs_in.TexCoord);
   }

   for(int i = 0; i < NR_POINT_LIGHTS; i++)
   {
      vec3 lightDir = normalize(pointLights[i].position - fs_in.FragPos);
      float shadow = ShadowCalculation(fs_in.FragPosLightSpace, norm, lightDir);

      result += CalcPointLight(pointLights[i], norm, fs_in.FragPos, viewDir, fs_in.TexCoord, shadow);
   }

   for(int i = 0; i < NR_SPOT_LIGHTS; i++)
   {
      vec3 lightDir = normalize(spotLights[i].position - fs_in.FragPos);
      float shadow = ShadowCalculation(fs_in.FragPosLightSpace, norm, lightDir);

      result += CalcSpotLight(spotLights[i], norm, fs_in.FragPos, viewDir, fs_in.TexCoord, shadow);
   }

   FragColor = vec4(result, 1.0f);
}