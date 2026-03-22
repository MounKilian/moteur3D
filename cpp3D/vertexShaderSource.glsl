#version 330 core

layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aTexCoord;
layout (location = 2) in vec3 aNormal;


uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;
uniform mat4 lightSpaceMatrix;

out VS_OUT {
    vec3 FragPos;
    vec3 Normal;
    vec2 TexCoord;
    vec4 FragPosLightSpace;
} vs_out;

void main()
{
   gl_Position = projection * view * model * vec4(aPos, 1.0);
   vs_out.TexCoord = vec2(aTexCoord.x, 1.0 - aTexCoord.y);
   
   vs_out.FragPos = vec3(model * vec4(aPos, 1.0));
   vs_out.Normal = mat3(transpose(inverse(model))) * aNormal;
   vs_out.FragPosLightSpace = lightSpaceMatrix * vec4(vs_out.FragPos, 1.0);
}