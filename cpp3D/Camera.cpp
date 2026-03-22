#include "Camera.h"

Camera::Camera(glm::vec3 position, glm::vec3 up, glm::vec3 front, float speed) : position(position), up(up), front(front), speed(speed)
{
}

void Camera::ProcessInput(Window* window)
{
	if (window->GetKey(GLFW_KEY_UP) == GLFW_PRESS)
		position.z += speed;

	if (window->GetKey(GLFW_KEY_DOWN) == GLFW_PRESS)
		position.z -= speed;

	if (window->GetKey(GLFW_KEY_LEFT) == GLFW_PRESS)
		position.x += speed;

	if (window->GetKey(GLFW_KEY_RIGHT) == GLFW_PRESS)
		position.x -= speed;

	if (window->GetKey(GLFW_KEY_S) == GLFW_PRESS)
		position.y += speed;

	if (window->GetKey(GLFW_KEY_W) == GLFW_PRESS)
		position.y -= speed;
}
