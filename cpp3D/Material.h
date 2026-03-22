#pragma once
#include "Texture.h"
#include <glm/glm.hpp>
#include <string>

class Material
{
    public :
        Texture* diffuseTexture;
        Texture* specularTexture;

        glm::vec3 ambient;
        glm::vec3 diffuse;
        glm::vec3 specular;

        float shininess;

        Material(Texture* diffuseTexture, Texture* specularTexture, glm::vec3 ambient, glm::vec3 diffuse, glm::vec3 specular, float shininess);
        void UseTexture();
};

