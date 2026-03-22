#pragma once

#include "Light.h"

class PointLight : public Light
{
	public : 
		glm::vec3 position;

		float constant;
		float linear;
		float quadratic;
		
		PointLight(glm::vec3 position, float constant, float linear, float quadratic, glm::vec3 ambient, glm::vec3 diffuse, glm::vec3 specular);
};

