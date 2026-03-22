#pragma once

#include <string>
#include <vector>
#include "VAO.h"
#include "Mesh.h"
#include "Material.h"

class Parser
{
	public :
		Parser();
		Mesh* loadObj(std::string path);
		Material* loadMtl(std::string path);
		VAO* createVAO(std::vector<float>& vertices);
		std::vector<VAO*> CreateVAOsFromMesh(Mesh* mesh, Parser& parser);
};

