#ifndef GRILLE_H
#define GRILLE_H

#include <iostream>
#include <string>
#include <vector>



class grille {
	private :
		int grid[10][10];


	public:

		//Constructeur grille qu'on attaque donc vide initialement
		grille();
		//Constructeur grille de notre flotte
		grille(flotte Util);

		//Mise à jour grille d'attaque 
		void MAJAttaqueOrdi();

		//Mise à jour grille de notre flotte
		void MAJFlotteUtil();

}

#endif 