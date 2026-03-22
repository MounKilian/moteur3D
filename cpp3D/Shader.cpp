#include "Shader.h"
#include <string>

#include <fstream>
#include <sstream>
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

Shader::Shader(const char* vertexPath, const char* fragmentPath)
{
	std::string vertexCode = GetFileContent(vertexPath);
	std::string fragmentCode = GetFileContent(fragmentPath);

	Process(vertexCode, fragmentCode);
}

Shader::~Shader()
{
	glDeleteProgram(ID);
}

void Shader::Process(std::string vertexCode, std::string fragmentCode)
{
	vertexShader = glCreateShader(GL_VERTEX_SHADER);
	const char* vertexCodeChar = vertexCode.c_str();
	glShaderSource(vertexShader, 1, &vertexCodeChar, NULL);
	glCompileShader(vertexShader);

	int success;
	char infoLog[512];
	glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
		std::cout << "VERTEX SHADER : COMPILATION_FAILED: \n" << infoLog << std::endl;
	}

	fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	const char* fragmentCodeChar = fragmentCode.c_str();
	glShaderSource(fragmentShader, 1, &fragmentCodeChar, NULL);
	glCompileShader(fragmentShader);

	glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
		std::cout << "FRAGMENT SHADER : COMPILATION_FAILED: \n" << infoLog << std::endl;
	}

	ID = glCreateProgram();
	glAttachShader(ID, vertexShader);
	glAttachShader(ID, fragmentShader);
	glLinkProgram(ID);

	glGetProgramiv(ID, GL_LINK_STATUS, &success);
	if (!success)
	{
		glGetProgramInfoLog(ID, 512, NULL, infoLog);
		std::cout << "SHADER PROGRAM : LINKING_FAILED: \n" << infoLog << std::endl;
	}

	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);
}

void Shader::Use() const
{
	glUseProgram(ID);
}

void Shader::Shutdown() const
{
	glUseProgram(0);
}

void Shader::SetMatrix4(const std::string& name, const glm::mat4 value) const
{
	Use();
	glUniformMatrix4fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &value[0][0]);
	Shutdown();
}

void Shader::SetVector3(const std::string& name, const glm::vec3& value) const
{
	Use();
	glUniform3f(glGetUniformLocation(ID, name.c_str()), value.x, value.y, value.z);
	Shutdown();
}

void Shader::SetInt(const std::string& name, int value) const
{
	Use();
	glUniform1i(glGetUniformLocation(ID, name.c_str()), value);
	Shutdown();
}

void Shader::SetFloat(const std::string& name, float value) const
{
	Use();
	glUniform1f(glGetUniformLocation(ID, name.c_str()), value);
	Shutdown();
}

void Shader::SetMaterial(const std::string& name, const Material& material) const
{
	SetInt(name + ".diffuseTexture", 0);
	SetInt(name + ".specularTexture", 1);
	SetVector3(name + ".ambient", material.ambient);
	SetVector3(name + ".diffuse", material.diffuse);
	SetVector3(name + ".specular", material.specular);
	SetFloat(name + ".shininess", material.shininess);
}

void Shader::SetLight(const std::string& name, const PointLight& light) const
{
	SetVector3(name + ".ambient", light.ambient);
	SetVector3(name + ".diffuse", light.diffuse);
	SetVector3(name + ".specular", light.specular);
	SetVector3(name + ".position", light.position);
	SetFloat(name + ".constant", light.constant);
	SetFloat(name + ".linear", light.linear);
	SetFloat(name + ".quadratic", light.quadratic);
}

void Shader::SetLight(const std::string& name, const DirLight& light) const
{
	SetVector3(name + ".ambient", light.ambient);
	SetVector3(name + ".diffuse", light.diffuse);
	SetVector3(name + ".specular", light.specular);
	SetVector3(name + ".direction", light.direction);
}

void Shader::SetLight(const std::string& name, const SpotLight& light) const
{
	SetFloat(name + ".cutOff", glm::cos(glm::radians(light.cutOff)));
	SetFloat(name + ".outerCutOff", glm::cos(glm::radians(light.outerCutOff)));
	SetVector3(name + ".ambient", light.ambient);
	SetVector3(name + ".diffuse", light.diffuse);
	SetVector3(name + ".specular", light.specular);
	SetVector3(name + ".position", light.position);
	SetVector3(name + ".direction", light.direction);
}

std::string Shader::GetFileContent(const char* filePath) const
{
	try 
	{
		std::ifstream shaderFile;
		shaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

		shaderFile.open(filePath);
		std::stringstream shaderStream;
		shaderStream << shaderFile.rdbuf();
		shaderFile.close();

		return shaderStream.str();
	}
	catch (std::ifstream::failure& e)
	{
		std::cout << "ERROR : File can't be read" << e.what() << std::endl;
	}
}
