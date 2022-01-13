#include <Windows.h>
#include <iostream>
#include<GL/gl.h>
#include<GL/GLUT.h>
#include <string>
#include <vector>
#include "tir_util.h"
using namespace std;


void TirUtil::coorddecase() {
	char lettre;
	int entier;
	glRasterPos2f(0, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0f, windowWidth, windowHeight, 0.0f, 0.0f, 1.0f);/*faudra penser à utiliser des variables globales*/
	glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "Entrez votre cible au clavier (lettre puis numéro)");
	cin >> lettre;
	bool test = ((lettre >= 'a' && lettre <= 'j') || (lettre >= 'A' && lettre <= 'J'));
	while test = FALSE{
		cout << "Erreur, le caractère n'est pas une lettre possible, recomencez" << endl;
		cin >> lettre;
	}
	cin >> entier;
	bool test2 = (entier >= 0 && entier < 10);
	while test2 = FALSE{
		cout << "Erreur, le caractère n'est pas une entier entre 0 et 9 , recomencez" << endl;
		cin >> entier;
	}
	vector<int> prochain_tir;
	prochain_tir.push(lettre);
	prochain_tir.push(entier);
	TirUtil.Tir* = prochain_tir;
}

bool TirUtil::tirutilisateur() {
	TirUtil.coorddecase();
	bool a_tire = FALSE;

}