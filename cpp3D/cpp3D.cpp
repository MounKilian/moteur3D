// cpp3D.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit. //

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Window.h"
#include "VAO.h"
#include "Shader.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "Parser.h"
#include "Texture.h"
#include "Material.h"
#include "Light.h"
#include "PointLight.h"
#include "DirLight.h"
#include "SpotLight.h"
#include "Shadow.h"
#include "Camera.h"

int main()
{ 
	Window* window = new Window(800, 600);
	Parser parser;

	Shader* shader = new Shader("vertexShaderSource.glsl", "fragmentShaderSource.glsl");
	Shader* shaderLight = new Shader("debugVertexShaderSource.glsl", "debugFragmentShaderSource.glsl");
	Shader* shaderShadow = new Shader("shadowVertex.glsl", "shadowFragment.glsl");

	Material* material = parser.loadMtl("cube.mtl");
	Material* characterMaterial = parser.loadMtl("character-a.mtl");

	std::vector<PointLight> pointLights;
	std::vector<DirLight> dirLights;
	std::vector<SpotLight> spotLights;

	pointLights.push_back(PointLight(glm::vec3(-2, 2, 2), 1.0f, 0.014f, 0.0007f, glm::vec3(0.2f), glm::vec3(0.5f), glm::vec3(1.0f)));

	//dirLights.push_back(DirLight(glm::vec3(-0.2f, -1.0f, -0.3f), glm::vec3(0.2f), glm::vec3(0.5f), glm::vec3(1.0f)));

	//spotLights.push_back(SpotLight(glm::vec3(0, 5, 0), glm::vec3(0, 1, 0), glm::cos(glm::radians(25.0f)), glm::cos(glm::radians(35.0f)), glm::vec3(0.0f), glm::vec3(3.0f), glm::vec3(1.0f)));
	//spotLights.push_back(SpotLight(glm::vec3(2, 2, 2), glm::vec3(-1, -1, 0), glm::cos(glm::radians(12.5f)), glm::cos(glm::radians(15.0f)), glm::vec3(0.2f), glm::vec3(0.5f), glm::vec3(1.0f)));

	for (int i = 0; i < pointLights.size(); i++)
	{
		std::string name = "pointLights[" + std::to_string(i) + "]";
		shader->SetLight(name, pointLights[i]);
	}

	for (int i = 0; i < dirLights.size(); i++)
	{
		std::string name = "dirLights[" + std::to_string(i) + "]";
		shader->SetLight(name, dirLights[i]);
	}

	for (int i = 0; i < spotLights.size(); i++)
	{
		std::string name = "spotLights[" + std::to_string(i) + "]";
		shader->SetLight(name, spotLights[i]);
	}

	Mesh* mesh = parser.loadObj("cube.obj");
	std::vector<VAO*> vaos = parser.CreateVAOsFromMesh(mesh, parser);

	Mesh* characterMesh = parser.loadObj("character-a.obj");
	std::vector<VAO*> characterVaos = parser.CreateVAOsFromMesh(characterMesh, parser);

	glm::vec3 camPos = glm::vec3(0.0f, 2.0f, -8.0f);
	Camera* camera = new Camera(camPos, glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.0f, 0.0f, 1.0f), 0.1f);
	
	glm::mat4 view = glm::translate(glm::mat4(1.0f), camPos);
	glm::mat4 projection = glm::perspective(glm::radians(45.0f), 800.0f / 600.0f, 0.1f, 100.0f);

	shader->SetMatrix4("view", view);
	shader->SetMatrix4("projection", projection);

	shaderLight->SetMatrix4("view", view);
	shaderLight->SetMatrix4("projection", projection);

	std::vector<glm::vec3> cubePositions =
	{
		glm::vec3(0.0f,0.5f,0.0f),
		glm::vec3(2.0f,0.5f,0.0f),
		glm::vec3(-2.0f,0.5f,0.0f),
		glm::vec3(0.0f,0.5f,2.0f),
		glm::vec3(0.0f,0.5f,-2.0f)
	};

	Shadow* shadow = new Shadow(&pointLights[0]);

	glm::mat4 floorModel = glm::mat4(1.0f);
	floorModel = glm::translate(floorModel, glm::vec3(0.0f, -0.5f, 0.0f));
	floorModel = glm::scale(floorModel, glm::vec3(20.0f, 0.1f, 20.0f));

	while (!window->IsOpen())
	{
		window->ClearWindow();

		if (window->GetKey(GLFW_KEY_ESCAPE) == GLFW_PRESS) {
			window->Close();
		}

		camera->ProcessInput(window);

		shaderShadow->SetMatrix4("lightSpaceMatrix", shadow->lightSpaceMatrix);
		shadow->BeginShadow();

		for (glm::vec3 pos : cubePositions)
		{
			glm::mat4 model = glm::mat4(1.0f);
			model = glm::translate(model, pos);

			shaderShadow->SetMatrix4("model", model);
			shaderShadow->Use();
			
			characterMesh->DrawMesh(characterVaos, 8);
		}

		shaderShadow->SetMatrix4("model", floorModel);
		shaderShadow->Use();
		
		mesh->DrawMesh(vaos, 8);

		shadow->EndShadow(window->GetWidth(), window->GetHeight());

		shader->SetMatrix4("lightSpaceMatrix", shadow->lightSpaceMatrix);
		shader->SetInt("shadowMap", 2);

		view = glm::mat4(1.0f);
		view = glm::translate(view, camera->position);

		shader->SetMatrix4("view", view);
		shaderLight->SetMatrix4("view", view);
		shader->SetVector3("viewPos", camera->position);

		material->UseTexture();

		shadow->BindTexture(2);

		for (glm::vec3 pos : cubePositions)
		{
			glm::mat4 model = glm::mat4(1.0f);
			model = glm::translate(model, pos);

			shader->SetMatrix4("model", model);
			shader->SetMaterial("material", *characterMaterial);
			characterMaterial->UseTexture();

			shader->Use();
			
			characterMesh->DrawMesh(characterVaos, 8);
		}

		shader->SetMatrix4("model", floorModel);
		shader->SetMaterial("material", *material);
		material->UseTexture();

		shader->Use();
		
		mesh->DrawMesh(vaos, 8);
	
		for (int i = 0; i < pointLights.size(); i++)
		{
			glm::mat4 modelLight = glm::mat4(1.0f);
			modelLight = glm::translate(modelLight, pointLights[i].position);
			modelLight = glm::scale(modelLight, glm::vec3(0.2f));

			shaderLight->SetMatrix4("model", modelLight);
			shaderLight->Use();

			mesh->DrawMesh(vaos, 8);
		}

		for (int i = 0; i < spotLights.size(); i++)
		{
			glm::mat4 modelLight = glm::mat4(1.0f);
			modelLight = glm::translate(modelLight, spotLights[i].position);
			modelLight = glm::scale(modelLight, glm::vec3(0.2f));

			shaderLight->SetMatrix4("model", modelLight);
			shaderLight->Use();

			mesh->DrawMesh(vaos, 8);
		}

		window->DisplayWindow();
	}

	glfwTerminate();

	for (int i = 0; i < mesh->submeshes.size(); i++)
	{
		delete vaos[i];
	}

	delete shader;
	delete shaderLight;

	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
