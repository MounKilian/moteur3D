#pragma once

#include <vector>
#include "Submesh.h"
#include "VAO.h"

class Mesh
{
	public:
		std::vector<Submesh> submeshes;
		void DrawMesh(std::vector<VAO*> vaos, int vertexCount);
};

