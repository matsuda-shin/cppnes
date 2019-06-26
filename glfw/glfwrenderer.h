#ifndef GLFWRENDERER_H
#define GLFWRENDERER_H

#include <cstdint>
#include "renderer.h"
#include "glfw.h"

class GLFWRenderer: public Renderer {
public:
	GLFWRenderer();
	virtual ~GLFWRenderer();

public:
	virtual void render(const uint8_t* p);

protected:
	void createWindow();
	void createObj();
	void createTexture();

protected:
	GLFW* mGLFW;
	GLFWwindow* mWindow;
	GLuint mProg;
	GLuint mVBO;
	GLuint mVAO;
	GLuint mTex;

	uint8_t* mPix;
};

#endif
