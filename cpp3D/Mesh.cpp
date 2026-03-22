#include "Mesh.h"

void Mesh::DrawMesh(std::vector<VAO*> vaos, int vertexCount)
{
	for (int i = 0; i < submeshes.size(); i++)
	{
		vaos[i]->DrawVAO(submeshes[i].vertices.size() / vertexCount);
	}
}

