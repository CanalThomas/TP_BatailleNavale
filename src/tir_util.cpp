//#include <Windows.h>
#include <iostream>
#include <GL/gl.h>
#include <GL/freeglut.h>
#include <GL/glut.h>
#include <string>
#include "tir_util.h"

using namespace std;

int windowWidth;
int windowHeight;

int convertir(char lettre) {
	// convertir un char en entier correspondant (d'où l'imposition de la minuscule)
	int entier = (int)lettre - 97;
	return entier;
}

///Méthode qui permet de récupérer les coordonnées de la case que l'utilisateur veut attaquer. 
///On stocke ensuite ces coordonnées dans l'attribut Tir.
void TirUtil::coorddecase()
{
	// récupérer la commande utilisateur à l'aide de cin
	char lettre;
	int entier;
	glRasterPos2f(0, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0f, windowWidth, windowHeight, 0.0f, 0.0f, 1.0f);/*faudra penser à utiliser des variables globales
	const unsigned char* t = reinterpret_cast<const unsigned char*>("Entrez votre cible au clavier (lettre minuscule puis numéro)");
	glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, t);*/ //méthode non conservée pour l'affichage des consignes
	cout << "Entrez votre cible au clavier (lettre minuscule puis numéro)"<<endl;
	cin >> lettre;
	bool test = ((lettre >= 'a' && lettre <= 'j'));
	while (!test){
		cout << "Erreur, le caractère n'est pas une lettre possible, recommencez" << endl;
		cin >> lettre;
	}
	cin >> entier;
	bool test2 = (entier >= 0 && entier < 10);
	while (!test2){
		cout << "Erreur, le caractère n'est pas une entier entre 0 et 9 , recommencez" << endl;
		cin >> entier;
	}
	coordonnees prochain_tir;
	prochain_tir.push_back(convertir(lettre));
	prochain_tir.push_back(entier);
	Tir = prochain_tir;
}

/*bool TirUtil::tirutilisateur() {
	// on prend la flotte adv et la case ciblée par le joueur et on gère la maj de la grille adv
	TirUtil.coorddecase();
	bool a_tire = FALSE;
	// INSERER FONCTION DE LA CLASSE FLOTTE QUI PREND VECT<INT> + FLOTTE 
}*/

///Renvoie les coordonnées du Tir
coordonnees TirUtil::getCoord_tir()
{
	return Tir;
}

///Initialise le Tir sur [0,0] par défaut.
TirUtil::TirUtil() {
	Tir.push_back(0);
	Tir.push_back(0);
}


//fonction de tir de l'ordinateur, générer deux coordonnés aléatoire pour le tir de l'ordinateur
coordonnees tirOrdi()
{
	srand((unsigned int) time(NULL));
	coordonnees coord;
	coord.push_back(rand() % 10);
	coord.push_back(rand() % 10);
	return coord;
}
