#pragma once
#include <string>

class Texture
{
	unsigned int textureId;

	public:
		Texture(std::string path);
		void CreateTexture(std::string path);
		void Use(int id);
};

