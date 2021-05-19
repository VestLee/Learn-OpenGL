#include <Windows.h>
#include <stdio.h>
#include <GL/glut.h>

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(300, 300);
	glutCreateWindow("OpenGL");
	printf("OpenGL version: %s\n", glGetString(GL_VERSION));
	return 0;
}