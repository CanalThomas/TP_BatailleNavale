#ifndef GRILLE_H
#define GRILLE_H

#include <iostream>
#include <string>
#include <vector>

#include "flotte.h"



class grille {



	public:
		int grid[10][10];

		//Constructeur grille qu'on attaque donc vide initialement
		grille();
		//Constructeur grille de notre flotte
		grille(Flotte Util);


		//Mise à jour grille d'attaque 
		void MAJAttaqueOrdi();

		//Mise à jour grille de notre flotte
		void MAJFlotteUtil();

}

#endif 