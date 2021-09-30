#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<ft2build.h>

#include"mccpph/includes.h"

int main()
{	//Debuging
	exitCode exitClass;
	windowFuncs windowfuncs;

	//*********************************************************************************************************************************************************************************//
	//Window
	GLFWwindow* window = windowfuncs.ProscessWindow();
	//*********************************************************************************************************************************************************************************//
	exitClass.getReturns(0);
	return 0;
}