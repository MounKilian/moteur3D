#pragma once

#include <glm/glm.hpp>
#include <string>
#include "Material.h"
#include "Light.h"
#include "PointLight.h"
#include "DirLight.h"
#include "SpotLight.h"

class Shader
{
	public:
		unsigned int ID;
		unsigned int vertexShader;
		unsigned int fragmentShader;

		Shader(const char* vertexPath, const char* fragmentPath);
		~Shader();
			
		void Process(std::string vertexCode, std::string fragmentCode);

		void Use() const;
		void Shutdown() const;

		void SetMatrix4(const std::string &name, const glm::mat4 value) const;
		void SetVector3(const std::string& name, const glm::vec3& value) const;
		void SetInt(const std::string& name, int value) const;
		void SetFloat(const std::string& name, float value) const;
		void SetMaterial(const std::string& name, const Material& material) const;
		void SetLight(const std::string& name, const PointLight& light) const;
		void SetLight(const std::string& name, const DirLight& light) const;
		void SetLight(const std::string& name, const SpotLight& light) const;

	private:
		std::string GetFileContent(const char* filePath) const;
};

