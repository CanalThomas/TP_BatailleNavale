#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include "flotte.h"
#include "bateau.h"

class TirUtil {
protected:
	vector<int>* Tir;
public:
	TirUtil();
	void coorddecase();
	bool tirutilisateur(Flotte adv);
};

coordonnees tirOrdi(); 


