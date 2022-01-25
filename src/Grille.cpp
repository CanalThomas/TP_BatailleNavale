#include "Grille.h"
#include "tir_util.h"


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

void grille::MAJAttaqueOrdi(Flotte adv)
{
	coordonnees coord_attaque;

	TirUtil tir = TirUtil();
	tir.tirutilisateur(adv);

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