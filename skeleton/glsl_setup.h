#ifndef _GLSL_SETUP_H_
#define _GLSL_SETUP_H_

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

char *textFileRead(char *fn);
GLuint generateFragShader(char *frag_source);
int load_shader(GLuint shader, GLchar *source);
GLuint init_GLSL(char *vert_source, char *frag_source);
void switch_shaders(GLuint program);

#endif
