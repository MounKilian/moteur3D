#include "Parser.h"

#include <fstream>
#include <sstream>
#include <iostream>
#include <glm/glm.hpp>

Parser::Parser()
{

}

Mesh* Parser::loadObj(std::string path)
{
    std::ifstream file(path);
    std::string line;

    std::vector<glm::vec3> vertice;
	std::vector<glm::vec2> uv;
	std::vector<glm::vec3> normal;

    Mesh* mesh = new Mesh();
    Submesh currentMesh;
    currentMesh.name = "default";

    std::vector<float> vertices;

    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string prefix;
        ss >> prefix;

        if (prefix == "v")
        {
            float x, y, z;
            ss >> x >> y >> z;
            vertice.push_back(glm::vec3(x, y, z));
        }
        else if (prefix == "vt")
        {
            float u, v;
            ss >> u >> v;
            uv.push_back(glm::vec2(u, v));
        }
        else if (prefix == "vn")
        {
            float x, y, z;
            ss >> x >> y >> z;
            normal.push_back(glm::vec3(x, y, z));
        }
        else if (prefix == "f")
        {
            std::string x, y, z;
            ss >> x >> y >> z;

            std::string verticesStr[3] = { x, y, z };

            for (int i = 0; i < 3; i++)
            {
                std::stringstream vertexSs(verticesStr[i]);
                std::string vIndexStr, uvIndexStr, vnIndexStr;

                std::getline(vertexSs, vIndexStr, '/');
                std::getline(vertexSs, uvIndexStr, '/');
                std::getline(vertexSs, vnIndexStr, '/');

                int verticeIndex = std::stoi(vIndexStr);
                int uvIndex = std::stoi(uvIndexStr);
				int normalIndex = std::stoi(vnIndexStr);

                glm::vec3 pos = vertice[verticeIndex - 1];

                currentMesh.vertices.push_back(pos.x);
                currentMesh.vertices.push_back(pos.y);
                currentMesh.vertices.push_back(pos.z);

                if (uvIndex > 0) {
                    currentMesh.vertices.push_back(uv[uvIndex - 1].x);
                    currentMesh.vertices.push_back(uv[uvIndex - 1].y);
                }
                else {
                    currentMesh.vertices.push_back(0.0f);
                    currentMesh.vertices.push_back(0.0f);
                }

                if (normalIndex > 0) {
                    currentMesh.vertices.push_back(normal[normalIndex - 1].x);
                    currentMesh.vertices.push_back(normal[normalIndex - 1].y);
                    currentMesh.vertices.push_back(normal[normalIndex - 1].z);
                }
                else {
                    currentMesh.vertices.push_back(0.0f);
                    currentMesh.vertices.push_back(0.0f);
                    currentMesh.vertices.push_back(0.0f);
                }
				
            }
        }
        else if (prefix == "o" || prefix == "g")
        {
            if (!currentMesh.vertices.empty())
            {
                mesh->submeshes.push_back(currentMesh);
                currentMesh.vertices.clear();
            }

            ss >> currentMesh.name;
        }
    }

    if (!currentMesh.vertices.empty())
    {
        mesh->submeshes.push_back(currentMesh);
    }

	return mesh;
}

Material* Parser::loadMtl(std::string path)
{
    std::ifstream file(path);
    std::string line;

    std::string name;

    glm::vec3 Ka(0.0f);
    glm::vec3 Kd(0.0f);
    glm::vec3 Ks(0.0f);
    float Ns = 32.0f;

    Texture* diffuseTex = nullptr;
    Texture* specularTex = nullptr;

    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string prefix;
        ss >> prefix;

        if (prefix == "Ka")
        {
            ss >> Ka.r >> Ka.g >> Ka.b;
        }
        else if (prefix == "Kd")
        {
            ss >> Kd.r >> Kd.g >> Kd.b;
        }
        else if (prefix == "Ks")
        {
            ss >> Ks.r >> Ks.g >> Ks.b;
        }
        else if (prefix == "Ns")
        {
            ss >> Ns;
        }
        else if (prefix == "map_Kd")
        {
            std::string tex;
            ss >> tex;
            diffuseTex = new Texture(tex);
        }
        else if (prefix == "map_Ks")
        {
            std::string tex;
            ss >> tex;
            specularTex = new Texture(tex);
        }
    }

    Material* material = new Material(diffuseTex, specularTex, Ka, Kd, Ks, Ns);
	return material;
}

VAO* Parser::createVAO(std::vector<float>& vertices)
{
    VAO* vao = new VAO();
    vao->AssignData(vertices.data(), vertices.size() * sizeof(float));
    vao->SetAttribute(0, 3, 8, 0);
    vao->SetAttribute(1, 2, 8, 3 * sizeof(float));
    vao->SetAttribute(2, 3, 8, 5 * sizeof(float));
    return vao;
}

std::vector<VAO*> Parser::CreateVAOsFromMesh(Mesh* mesh, Parser& parser)
{
    std::vector<VAO*> vaos;

    for (Submesh& sub : mesh->submeshes)
    {
        vaos.push_back(parser.createVAO(sub.vertices));
    }

    return vaos;
}
