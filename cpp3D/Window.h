#pragma once

struct GLFWwindow;
class Window
{
	GLFWwindow* window;
	int width;
	int height;

	public:
		Window(int width, int height);
		void ClearWindow();
		void DisplayWindow();
		void DrawWindow();
		void CreateWindow();
		bool IsOpen();
		int GetKey(int keycode);
		void Close();
		static void framebufferSizeCallback(GLFWwindow* window, int width, int height);
		int GetWidth();
		int GetHeight();
};

