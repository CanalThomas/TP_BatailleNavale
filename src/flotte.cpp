#include"flotte.h"
#include"Bateau.h"
#include <random>



Flotte::Flotte()
{
	int i, j, k, l, partieActuelle, tailleBateau;
	bool vertical, nvBateau;
	bool grille[10][10] = { 0 };

	std::vector<coordonnees> coords;
	coordonnees c;


	for (k = 0; k < 4; k++)
	{
		tailleBateau = (k + 2 - (k > 1));
		// il faudra initialisé la graine 

		//vertical ou horizontal
		vertical = rand() % 1;
		////partie actuelle
		partieActuelle = rand() % (k + 2 - (k > 1));

		nvBateau = 0;
		while (!nvBateau)
		{
			//on prend deux chiffres en 0 et 9 au hasard
			i = rand() % 10;
			j = rand() % 10;

			nvBateau = 1;

			if (vertical)
			{
				// On teste si les cases sont valable et si elles sont libres sinon break et on teste avec d'autre chiffres aleatoires
				for (l = i - partieActuelle; l < k - partieActuelle + tailleBateau; l++)
				{
					if (l < 0 || l>9 || grille[l][j] == 1) {
						nvBateau = 0; break;
					}
				}
				// Si on est la c'est qu'on a trouvé une places pour notre bateau et on va donc l'inscrire dans la grille et save ses coords
				if (nvBateau)
				{
					for (l = i - partieActuelle; l < k - partieActuelle + tailleBateau; l++)
					{
						grille[l][j] = 1;
						c.x = l;
						c.y = j;
						coords.push_back(c);
					}
				}
				
			}
			else
			{
				for (l = j - partieActuelle; l < j - partieActuelle + tailleBateau; l++)
				{
					if (l < 0 || l>9 || grille[i][l] == 1) {
						nvBateau = 0; break;
					}
				}
				// Si on est la c'est qu'on a trouvé une places pour notre bateau et on va donc l'inscrire dans la grille et save ses coords
				if (nvBateau)
				{
					for (l = j - partieActuelle; l < j - partieActuelle + tailleBateau; l++)
					{
						grille[i][l] = 1;
						c.x = i;
						c.y = l;
						coords.push_back(c);
					}
				}
			}
		}

		Bateau bateauCourant(tailleBateau, coords);
		m_flotte.push_back(bateauCourant);

		coords.clear();


		

	}
	


}





Flotte::Flotte(std::string nfichier)		// Constructeur flotte utilisateur via fichier texte
{
	std::ifstream flux(nfichier);


	if (flux)	
	{
		std::string f;

		bool bateauxTrouve[5] = { 0,0,0,0,0 };
		int  bateauxTrouves = 0;
		int tailleBateau, i, partieActuelle, k, l; // PArtie actuelle : la partie du bateau trouvée -> entre 0 et 5 la taille maximale d'un bateau
		
		std::vector<coordonnees> coords;
		coordonnees c;

		bool vertical;

		for (k = 0; k < 10; k++)
		{
			for (l = 0; l < 10; l++)
			{
				flux >> f;

				if (f != "0" && bateauxTrouve[int(f[0])] == false)	// si la case n'est pas vide et que le bateau n'a pas deja été trouvé
				{
					bateauxTrouves++;
					bateauxTrouve[int(f[0])] = true;
					tailleBateau = int(f[0]) + 2 - (int(f[0]) > 1);

					partieActuelle = int(f[1]);
					vertical = int(f[2]);


					if (vertical)
					{
						for (i = k - partieActuelle; i < k - partieActuelle + tailleBateau; i++)
						{
							c.x = i;
							c.y = l;
							coords.push_back(c);
						}
						
					}
					else
					{
						for (i = l - partieActuelle; i < l - partieActuelle + tailleBateau; i++)
						{
							c.x = k;
							c.y = i;
							coords.push_back(c);
						}
					}
					Bateau bateauCourant(tailleBateau, coords);
					m_flotte.push_back(bateauCourant);

					coords.clear();

					if (bateauxTrouves == 5) return;
				}
			}
		}
		
	}
	else { std::cout << "Erreur de lecture de fichier carte" << std::endl; }
}





Flotte::~Flotte()
{

}


