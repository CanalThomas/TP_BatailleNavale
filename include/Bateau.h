#ifndef BATEAU_H
#define BATEAU_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> coordonnees;


/// STRUCTURE SUIVI  <br> 
/// Cette structure permet de stocker la coordonnée d'une partie du bateau ainsi que son état ("touché = true" / "pas touché = false") 
struct suivi {
	/// Vecteur d'entiers (2 entiers)
	coordonnees position; 
	bool etat;
};



/// CLASSE BATEAU <br>
/// Cette classe permet d'instancier des bateaux, en prenant comme attributs la taille du bateau, un vecteur de suivi (correspondant à chaque partie du bateau) et un état général 
///("coulé = true" / "pas coulé = false")
class Bateau {
	private : 
		///Taille du bateau
		int m_tailleBateau;
		///Vecteur qui permet de donner les coordonnées et états de chaque partie du bateau
		vector<suivi> m_etats;
		///Etat général du bateau
		bool m_etatGeneral;

	public :

		///Constructeur 
		Bateau(int _t, vector<coordonnees> _coords);

		///Getter
		vector<suivi> getM_etats();
		///Getter
		bool getM_etatGeneral();
 
 		///Fonction qui modifie l'état d'une partie du bateau de coordonnées _coord
		bool estTouche(vector<int> _coord);
};


#endif
