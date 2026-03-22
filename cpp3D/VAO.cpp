#include "VAO.h"
#include <glad/glad.h>

VAO::VAO()
{
	glGenVertexArrays(1, &VAOid);
	glGenBuffers(1, &VBOid);
}

VAO::~VAO()
{
	glDeleteVertexArrays(1, &VAOid);
	glDeleteBuffers(1, &VBOid);
}

void VAO::AssignData(float* vertices, int verticeSize)
{
	glBindVertexArray(VAOid);
	glBindBuffer(GL_ARRAY_BUFFER, VBOid);

	glBufferData(GL_ARRAY_BUFFER, verticeSize, vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ARRAY_BUFFER, 0);

	glBindVertexArray(0);
}

void VAO::SetAttribute(int location, int componentCount, int stride, int offset)
{
	glBindVertexArray(VAOid);
	glBindBuffer(GL_ARRAY_BUFFER, VBOid);

	glVertexAttribPointer(location, componentCount, GL_FLOAT, GL_FALSE, stride * sizeof(float), (void*)offset);
	glEnableVertexAttribArray(location);

	glBindBuffer(GL_ARRAY_BUFFER, 0);

	glBindVertexArray(0);
}

void VAO::DrawVAO(int size)
{
	//glUseProgram(shaderProgram);
	glBindVertexArray(VAOid);
	glDrawArrays(GL_TRIANGLES, 0, size);
	glBindVertexArray(0);
}

