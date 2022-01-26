#ifndef GRILLE_H
#define GRILLE_H

#include <iostream>
#include <string>
#include <vector>


#include "flotte.h"

#include "tir_util.h"


/// CLASSE GRILLE <br>
/// Classe qui permettre de stocker un flotte dans une grille 2D de taille 10x10
class grille {

	public:
		///Attribut m_grid qui correspond à un tableau statique de taille 10x10 d'entiers, qui va représenter une grille de bataille navale
		int m_grid[10][10];

		///Constructeur grille qu'on attaque donc vide initialement
		grille();
		///Constructeur grille de notre flotte
		grille(Flotte Util);


		///Mise à jour grille d'attaque 
		void MAJAttaqueOrdi(Flotte adv);

		///Mise à jour grille de notre flotte
		void MAJFlotteUtil(Flotte Util);

};

#endif 
