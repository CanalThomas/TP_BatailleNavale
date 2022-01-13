#include <Windows.h>
#include <iostream>
#include <GL/gl.h>
#include <GL/GLUT.h>
#include <string>
#include "tir_util.h"

using namespace std;

int convertir(char lettre) {
	int entier = (int)lettre - 97;
	return entier;
}


void TirUtil::coorddecase() {
	char lettre;
	int entier;
	glRasterPos2f(0, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0f, windowWidth, windowHeight, 0.0f, 0.0f, 1.0f);/*faudra penser à utiliser des variables globales*/
	glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "Entrez votre cible au clavier (lettre minuscule puis numéro)");
	cin >> lettre;
	bool test = ((lettre >= 'a' && lettre <= 'j'));
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
	coordonnees prochain_tir;
	prochain_tir.push(convertir(lettre));
	prochain_tir.push(entier);
	*(TirUtil.Tir) = prochain_tir;
}

bool TirUtil::tirutilisateur(Flotte adv) {
	// on prend la flotte adv et la case ciblée par le joueur et on gère la maj de la grille adv
	TirUtil.coorddecase();
	bool a_tire = FALSE;
	// INSERER FONCTION DE LA CLASSE FLOTTE QUI PREND VECT<INT> + FLOTTE 
}



TirUtil::TirUtil() {
	Tir = new pair<int,int>;
}


coordonnees tirOrdi()
{
	srand((unsigned int) time(NULL));
	coordonnees coord;
	coord.push(rand() % 10);
	coord.push(rand() % 10);
	return coord;
}
