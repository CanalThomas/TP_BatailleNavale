#include "Bateau.h"

//Constructeur
Bateau::Bateau(int _t, vector<coordonnees> _coords){
	m_tailleBateau = _t;
	suivi stmp;
	stmp.etat = false;
	for (int i=0;i<_t;i++){
		stmp.position = _coords[i];
		m_etats.push_back(stmp);
	}
	m_etatGeneral = false;
}


//Getters
vector<suivi> Bateau::getM_etats(){
	return m_etats;
}
		
bool Bateau::getM_etatGeneral(){
	return m_etatGeneral;
}

//Fonction qui modifie l'état d'une partie du bateau de coordonnées _coord
void Bateau::estTouche(vector<int> _coord){
	for (int i=0;i<_t;i++){
		if (m_etats[i].position == _coord){
			m_etats[i].etat = true;
		}
	}
}