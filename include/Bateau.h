#ifndef BATEAU_H
#define BATEAU_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> coordonnees(2);


typedef struct suivi {
	coordonnees position;
	bool etat;
};

class Bateau {
	private : 
		int m_tailleBateau;
		vector<suivi> m_etats;
		bool m_etatGeneral;

	public :

		//Constructeurs 
		Bateau(int _t, vector<coordonnees> _coords);

		//Getters
		vector<suivi> getM_etats();
		bool getM_etatGeneral();
 
 		//Fonction qui modifie l'état d'une partie du bateau de coordonnées _coord
		bool estTouche(vector<int> _coord);
};


#endif
