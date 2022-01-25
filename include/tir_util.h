#pragma once
#include <iostream>
#include <vector>
#include "flotte.h"

using namespace std;

class TirUtil {
protected:
	coordonnees Tir;
public:
	TirUtil();
	void coorddecase();
	bool tirutilisateur(Flotte adv);

	coordonnees getCoord_tir();
};

coordonnees tirOrdi();


