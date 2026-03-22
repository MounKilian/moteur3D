#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "PointLight.h"
#include "SpotLight.h"

class Shadow
{
    public : 
        unsigned int depthMapFBO;
        unsigned int depthMap;
        const unsigned int SHADOW_WIDTH = 4096, SHADOW_HEIGHT = 4096;
        glm::mat4 lightSpaceMatrix;

        Shadow(PointLight* light);
        Shadow(SpotLight* light);
		void BeginShadow();
		void EndShadow(int width, int height);
		void BindTexture(int id);
};

