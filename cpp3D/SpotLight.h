#pragma once

#include "Light.h"

class SpotLight : public Light
{
	public : 
		glm::vec3 position;
		glm::vec3 direction;
		float cutOff;
		float outerCutOff;
		
		SpotLight(glm::vec3 position, glm::vec3 direction, float cutOff, float outerCutOff, glm::vec3 ambient, glm::vec3 diffuse, glm::vec3 specular);
};

