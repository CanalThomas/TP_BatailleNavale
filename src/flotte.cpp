#include"flotte.h"
#include"Bateau.h"
#include <random>


///							CONSTRUCTEUR POUR LA FLOTTE PC
/// 
/// Cette flotte est cree aleatoirement.
/// On tire au sort des coordonnees et un sens (vertical ou horizontal) puis on teste si le bateau peut y etre placé :
/// est ce qu'il reste dans la grille 10*10? est-ce que toutes les cases sont libres ?
/// Si oui, on va ajouter ce bateau a la flotte et on va mettre a 1 les cases qu'il utilise dans la grille
///
///																														///
 
Flotte::Flotte()
{
	int i, j, k, l, partieActuelle, tailleBateau;
	bool vertical, nvBateau;
	bool grille[10][10] = { 0 };

	std::vector<coordonnees> coords;
	coordonnees c;


	for (k = 0; k < 5; k++)
	{
		tailleBateau = (k + 2 - (k > 1));
		// il faudra initialisé la graine dans le main

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
				// On teste si les cases sont valable et si elles sont libres sinon break et on reteste avec d'autre chiffres 
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
						c.push_back(l);
						c.push_back(j);
						coords.push_back(c);
					}
				}
				
			}
			else // de meme quand c'est horizontal
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
						c.push_back(i);
						c.push_back(l);
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





///							CONSTRUCTEUR POUR LA FLOTTE JOUEUR
/// 
/// Cette flotte est cree à partir d'un fichier texte. La convention de nommage est :
/// un chiffre (de 0 à 4) pour l'id du bateau qui renseigne aussi sur sa taille
/// un chiffre pour la place dans ce bateau (de 0 à tailleBateau)
/// un booleen : 1 vertical/ 0 horizontal
///																														///

Flotte::Flotte(std::string nfichier)		// Constructeur flotte utilisateur via fichier texte
{
	std::ifstream flux(nfichier);


	if (flux)	
	{
		std::string f;

		bool bateauxTrouve[5] = { 0,0,0,0,0 };
		int  bateauxTrouves = 0;	//Lorsque les 5 bateaux seront trouvés on sortira de la fonction
		int tailleBateau, i, partieActuelle, k, l, idB; // PArtie actuelle : la partie du bateau trouvée -> entre 0 et 5 la taille maximale d'un bateau
		
		std::vector<coordonnees> coords;
		coordonnees c;

		bool vertical;

		for (k = 0; k < 10; k++)	
		{
			for (l = 0; l < 10; l++)
			{
				flux >> f;
				idB = (int)(f[0]) - ASCII_0;	// Le -48 pour passer de ASCII au chiffre
				
				if (f != "0" && bateauxTrouve[idB] == false)	// si la case n'est pas vide et que le bateau n'a pas deja été trouvé
				{
					bateauxTrouves++;
					bateauxTrouve[idB] = true;
					tailleBateau = int(f[0]) + 2 - (int(f[0]) > 1) - ASCII_0;

					partieActuelle = (int)(f[1]) - ASCII_0;
					vertical = int(f[2]) - ASCII_0;


					if (vertical)
					{
						for (i = k - partieActuelle; i < k - partieActuelle + tailleBateau; i++)	//oN recup les coordonnees du bateau
						{
							c.push_back(i);
							c.push_back(l);
							coords.push_back(c);
						}
						
					}
					else
					{
						for (i = l - partieActuelle; i < l - partieActuelle + tailleBateau; i++)
						{
							c.push_back(k);
							c.push_back(i);
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


