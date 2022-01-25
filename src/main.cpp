//#include <Windows.h>
#include <iostream>
#include <stdio.h> 
#include <string>
#include <vector>
#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glext.h>
#include <GL/glcorearb.h>
//#include <glm.hpp>
//#include <ext.hpp>
#define GL_GLEXT_PROTOTYPES

using namespace std;

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"


//#include "Grille.h"

int width = 1280;
int height = 720;

//Pour les points 
typedef float Vertex[3];
//Pour les vectedurs d'indices
typedef unsigned int Ind[4];

//Pour les tests d'affichage de grille
int gjoueur[10][10];
int gordi[10][10];

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
    glBegin(GL_POLYGON);
    for (int i = 0; i < 4; i++) {
        glColor4f(carre[i].r, carre[i].g, carre[i].b, carre[i].a);
        glTexCoord2d(texco[i].s, texco[i].t);
        glVertex3f(carre[i].x-1, carre[i].y, carre[i].z);
    }
    glEnd();
    glScalef(0.7, 0.7, 0.7);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 4; i++) {
        glColor4f(carre[i].r, carre[i].g, carre[i].b, carre[i].a);
        glTexCoord2d(texco[i].s, texco[i].t);
        glVertex3f(carre[i].x+1.8, carre[i].y+0.4, carre[i].z);
    }
    glScalef(2, 2, 2);
    glEnd();
}



void affGrilleLines(int numeroGrille = 1) {
    vector<vector<float>> vertices;
    vector<vector<int>> indices;
    int slices = 10;
    vector<float> v;
    vector<int> IND1, IND2;
    for (int j = 0; j <= slices; ++j) {
        for (int i = 0; i <= slices; ++i) {
            float x = (float)i / (float)slices+1;
            float z = 0;
            float y = (float)j / (float)slices;
            if (numeroGrille == 1) {
                x *= 2/0.7;
                y *= 2/0.7;
                x -= 5.72;
                y -= 1.43;
            }
            else if (numeroGrille == 2) {
                x *= 2;
                y *= 2;
                x -= 1.2;
                y -= 0.6;
            }
            else {
                cout << "Erreur dans affGrilleLines : numero de grille invalide" << endl;
                exit(1);
            }
            v.push_back(x); v.push_back(y); v.push_back(z);
            vertices.push_back(v);
            v.clear();
        }
    }

    for (int j = 0; j < slices; ++j) {
        for (int i = 0; i < slices; ++i) {

            int row1 = j * (slices + 1);
            int row2 = (j + 1) * (slices + 1);
            IND1.push_back(row1 + i); IND1.push_back(row1 + i+1); IND1.push_back(row1 + i+1); IND1.push_back(row2 + i+1);
            IND2.push_back(row2 + i+1); IND2.push_back(row2 + i); IND2.push_back(row2 + i); IND2.push_back(row1 + i);
            indices.push_back(IND1);
            indices.push_back(IND2);

        }
    }
    GLuint vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    GLuint vbo;
    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Vertex), &vertices[0], GL_STATIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, nullptr);

    GLuint ibo;
    glGenBuffers(1, &ibo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(Ind), &indices[0], GL_STATIC_DRAW);

    glBindVertexArray(0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    int lenght = (GLuint)indices.size() * 4;
    glBindVertexArray(vao);
    glDisable(GL_TEXTURE_2D);
    glDrawElements(GL_LINES, lenght, GL_UNSIGNED_INT, NULL);
    glEnable(GL_TEXTURE_2D);
    glBindVertexArray(0);
    if (numeroGrille == 1) {
        affGrilleLines(2);
    }
}

void affGrilleInfos(int g[10][10],bool joueur) {
    glDisable(GL_TEXTURE_2D);
    for (int j = 0; j < 10; ++j) {
        for (int i = 0; i < 10; ++i) {
            float x, y, z;
            if (!joueur) {
                x = i / 1.75 - 5.69;
                y = j / 1.75 - 2.825;
                z = 0;
            }
            else {
                x = i / 1.75  +2.3255;
                y = j / 1.75  -1.6755;
                z = 0;
                glScalef(0.7, 0.7, 0.7);
            }
            switch (g[i][j]) {
            case 0:
                glColor4f(1, 1, 1, 0);
                break;
            case 1:
                glColor4f(0.5, 0.5, 0.5, 1);
                break;
            case 2:
                glColor4f(1, 0, 0, 1);
                break;
            case -1:
                glColor4f(1, 1, 1, 1);
                break;
            default:
                glColor4f(1, 0, 1, 1);
                break;
            }
            glScalef(0.5, 0.5, 0.5);
            glBegin(GL_POLYGON);
            glVertex3f(x, y, z);
            glVertex3f(x+0.5, y, z);
            glVertex3f(x+0.5, y+0.5, z);
            glVertex3f(x, y+0.5, z);
            glEnd();
            glScalef(2, 2, 2);
            if (joueur) {
                glScalef(1/0.7, 1/0.7, 1/0.7);
            }
        }
    }
    glEnable(GL_TEXTURE_2D);
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
    //affGrilleLines();
    
    affGrilleInfos(gjoueur,true);
    affGrilleInfos(gordi,false);

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
    glutCreateWindow("Bataille Navale");
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glDisable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Définition des fonctions de callbacks
    glutDisplayFunc(affichage);
    glutKeyboardFunc(clavier);
    glutMouseFunc(souris);
    glutReshapeFunc(redimensionner);
    glewInit();
}

int main(int argc, char* argv[]) {
    glInit(argc, argv);
    textureLoad();

    //Valeurs de test pour l'affichage
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            gjoueur[i][j] = (i + j) / 5;
            gordi[i][j] = (-i + j) / 5;
        }
    }

    glutMainLoop();
    return 0;
}
