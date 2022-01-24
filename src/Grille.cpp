#include "Grille.h"
#include "flotte.h"
#include "Bateau.h"

Grille::grille()
{
	for (int i = 0;i<10;i++)
	{
		for (int j = 0;j<10;j++)
		{
			m_grid[i][j] = 0;
		}
	}
}

Grille::grille(flotte Util)
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
	for (int i=;i<Util.size();i++)
	{
		for (int j=0;j<Util[i].getM_etats().size();j++)
		{
			m_grid[Util[i].getM_etats()[j].coordonnees[0]][Util[i].getM_etats()[j].coordonnees[1]] = 1;
		}
	}
}

void Grille::MAJAttaqueOrdi()
{

}

void Grille::MAJFlotteUtil(flotte Util)
{
	coordonnees coord_attaque;
	coord_attaque = tirOrdi();
	for (int i=;i<Util.size();i++)
	{
		if (Util[i].estTouche(coord_attaque))
		{
			m_grid[coord_attaque[0]][coord_attaque[1]] = 2;
		}
	}
}