#pragma once
#include <iostream>
#include <vector>
#include "flotte.h"

using namespace std;

///CLASSE TIR UTIL 
///Cette classe correspond au tir de l'utilisateur
class TirUtil {
protected:
	///Coordonnées du tir
	coordonnees Tir;
public:
	///Constrcteur du Tir, initialisé à [0,0]
	TirUtil();
	///Permet de récupérer la commande utilisateur du prochain tir
	void coorddecase();
	

	///Getter
	coordonnees getCoord_tir();
};

coordonnees tirOrdi();

int convertir(char lettre);


