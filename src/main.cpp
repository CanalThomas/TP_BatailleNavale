
#include <iostream>
#include <stdio.h> 
#include <string>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glext.h>
#define GL_GLEXT_PROTOTYPES
using namespace std;

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int width = 1280;
int height = 720;

typedef struct {
    float x;
    float y;
    float z;
    float r;
    float g;
    float b;
    float a;
} vertex;

typedef struct {
    float s;
    float t;
} textureCoord;

// Texture
GLuint textureID = 0;
unsigned char* img_data;
int w, h, c;
void textureLoad() {
    string f = "ocean.jpg";
    img_data = stbi_load(f.c_str(), &w, &h, &c, 0);
    glGenTextures(1, &textureID);
    glBindTexture(GL_TEXTURE_2D, textureID);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, img_data);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_BASE_LEVEL, 0);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, 0);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_TRUE);
}
// !Texture

// Fonctions d'affichage
void affGrilleBG() {
    vertex carre[4] = {
        {-1,-1,0,1,1,1,1},
        {1,-1,0,1,1,0,1},
        {1,1,0,1,1,1,1},
        {-1,1,0,1,1,1,1}
    };
    textureCoord texco[4] = { { 0.0f, 0.0f }, { 0.0f, 1.0f }, { 1.0f, 1.0f }, { 1.0f, 0.0f } };
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
    glMatrixMode(GL_MODELVIEW);
    glTranslatef(-1, 0, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 4; i++) {
        glColor4f(carre[i].r, carre[i].g, carre[i].b, carre[i].a);
        glTexCoord2d(texco[i].s, texco[i].t);
        glVertex3f(carre[i].x, carre[i].y, carre[i].z);
    }
    glEnd();
    glTranslatef(2.2, 0.3, 0);
    glScalef(0.7, 0.7, 0.7);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 4; i++) {
        glColor4f(carre[i].r, carre[i].g, carre[i].b, carre[i].a);
        glTexCoord2d(texco[i].s, texco[i].t);
        glVertex3f(carre[i].x, carre[i].y, carre[i].z);
    }
    glEnd();
}
// !Foncions d'affichage

// GL Callbacks
GLvoid redimensionner(int w, int h) {
    float focale = 65.0f;
    float ournear = 0.1f;
    float ourfar = 100.0f;

    width = w;
    height = h;
    if (width == 0)
        height = 1;
    float ratio = (float)width / (float)height;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0, 0, width, height);
    gluPerspective(focale, ratio, ournear, ourfar);
    glMatrixMode(GL_MODELVIEW);
}

GLvoid affichage() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_TEXTURE_2D);

    glLoadIdentity();
    gluLookAt(0, 0, 2, 0, 0, 0, 0, 1, 0);
    affGrilleBG();

    glFlush();
    glutSwapBuffers();
}
// !GL Callbacks

void glInit(int argc, char* argv[]) {
    // Initialisation de GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowPosition(200, 200);
    glutInitWindowSize(width, height);
    glutCreateWindow("Valor");
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glEnable(GL_DEPTH_TEST);

    // Définition des fonctions de callbacks
    glutDisplayFunc(affichage);
    //glutKeyboardFunc(clavier);
    //glutMouseFunc(souris);
    //glutMotionFunc(deplacementSouris);
    glutReshapeFunc(redimensionner);
}

int main(int argc, char* argv[]) {
    glInit(argc, argv);
    textureLoad();

    glutMainLoop();
    return 0;
}
