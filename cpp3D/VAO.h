#pragma once
class VAO
{
	public:
		unsigned int VAOid;
		unsigned int VBOid;
		int vertexCount;
		int drawType;

		VAO();
		~VAO();
		void AssignData(float* vertices,int verticeSize);
		void SetAttribute(int location, int componentCount, int stride, int offset);
		void DrawVAO(int size);
};

