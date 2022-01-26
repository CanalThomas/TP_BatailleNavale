#include "Grille.h"
#include "tir_util.h"

///Ce constructeur permet de construire une grille vide, qui va en fait constituer notre grille d'attaque.
///Chaque case est donc initialisée à 0, ce qui correspond à l'eau.
grille::grille()
{
	for (int i = 0;i<10;i++)
	{
		for (int j = 0;j<10;j++)
		{
			m_grid[i][j] = 0;
		}
	}
}

///Ce constructeur permet de stocker notre flotte Utilisateur dans une grille, afin d'avoir un suivi sur les attaques que l'ordinateur effectue.
///Si une case correspond à une partie de bateau, on l'initialise à 1 (c'est-à-dire présence d'une part d'un bateau non encore attaquée) et sinon, on met à 0.
grille::grille(Flotte Util)
{
	//initialiser la grille à 0
	for (int i = 0;i<10;i++)
	{
		for (int j = 0;j<10;j++)
		{
			m_grid[i][j] = 0;
		}
	}

	//ajouter les bateaux de l'utilisateur sur la grille
	for (int i=0;i<Util.getflotte().size();i++)
	{
		for (int j=0;j<Util.getflotte()[i].getM_etats().size();j++)
		{
			m_grid[Util.getflotte()[i].getM_etats()[j].position[0]][Util.getflotte()[i].getM_etats()[j].position[1]] = 1;
		}
	}
}

///Cette fonction permet de mettre à jour la grille d'attaque (initialement vide).
///Elle va prendre en argument la flotte adverse (flotte Ordinateur), va effectuer un tir Utilisateur, et va mettre à jour notre grille si il y a un changement.
///Si on a tiré sur l'eau, on met la case à -1, pour savoir qu'on a déjà tiré ici. 
///Si on tiré sur une partie de bateau, on met la case à 2.
void grille::MAJAttaqueOrdi(Flotte adv)
{
	coordonnees coord_attaque;

	TirUtil tir = TirUtil();
	tir.coorddecase();

	//récupérer les coordonné de l'attaue de l'utilisateur pour faire la mise à jour de la grille
	coord_attaque = tir.getCoord_tir();

	for (int i=0;i<adv.getflotte().size();i++)
	{
		if (adv.getflotte()[i].estTouche(coord_attaque))
		{
			m_grid[coord_attaque[0]][coord_attaque[1]] = 2;
		}
	}

}

///Cette fonction permet de mettre à jour notre grille Utilisateur.
///L'ordinateur va effectuer son tir, et on va actualiser la grille en fonction de celui-ci. 
///Si l'ordinateur tire dans un bateau, on actualise à 2, et s'il tire dans l'eau, on ne modifie rien. 
void grille::MAJFlotteUtil(Flotte Util)
{
	coordonnees coord_attaque;

	coord_attaque = tirOrdi();

	for (int i=0;i<Util.getflotte().size();i++)
	{
		if (Util.getflotte()[i].estTouche(coord_attaque))
		{
			m_grid[coord_attaque[0]][coord_attaque[1]] = 2;
		}
	}
}