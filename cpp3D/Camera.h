#pragma once

#include <glm/glm.hpp>
#include <GLFW/glfw3.h>
#include "Window.h"

class Camera
{
    public:
        glm::vec3 position;
        glm::vec3 up;
        glm::vec3 front;
        float speed;

        Camera(glm::vec3 position, glm::vec3 up, glm::vec3 front, float speed);
        void ProcessInput(Window* window);
};

