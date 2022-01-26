#include "Bateau.h"


/// Va prendre en argument la taille du bateau, et un vecteur de coordonnées correspondant à chaque partie du bateau. 
/// On définit l'état général du bateau à false c'est-à-dire "non coulé". ///
Bateau::Bateau(int _t, vector<coordonnees> _coords){
	m_tailleBateau = _t;
	suivi stmp;
	stmp.etat = false;
	for (int i=0;i< _t;i++){
		for (int j=0; j<_coords[i].size(); j++){
			stmp.position.push_back(_coords[i][j]);
		}
		m_etats.push_back(stmp);
	}
	m_etatGeneral = false;
}



/// Renvoie l'attribut qui représente les coordonnées du bateau, avec le détail des états de chaque partie du bateau
vector<suivi> Bateau::getM_etats(){
	return m_etats;
}

/// Getter de l'état du bateau
/// Renvoie l'état général du bateau	
bool Bateau::getM_etatGeneral(){
	return m_etatGeneral;
}

///Fonction qui va regarder si les coordonnées passées en argument correspondent à une partie du bateau.
/// Va modifier l'état d'une partie du bateau de coordonnées _coord et va renvoyer un booleen vrai s'il y a eu une modification et un booleen faux sinon.
bool Bateau::estTouche(vector<int> _coord){
	bool touche = false;
	for (int i=0;i<m_etats.size();i++){
		if (m_etats[i].position == _coord){
			touche = true;
			m_etats[i].etat = touche;
		}
	}
	return touche;
}
