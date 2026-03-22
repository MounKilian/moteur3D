#include "Material.h"

Material::Material(Texture* diffuseTexture, Texture* specularTexture, glm::vec3 ambient, glm::vec3 diffuse, glm::vec3 specular, float shininess) : diffuseTexture(diffuseTexture), specularTexture(specularTexture), ambient(ambient), diffuse(diffuse), specular(specular), shininess(shininess)
{
    
}

void Material::UseTexture()
{
    diffuseTexture->Use(0);
    if (specularTexture != nullptr)
    {
        specularTexture->Use(1);
    }
}
