#pragma once
#include <iostream>
#include <vector>
#include "flotte.h"
#include <utility>

using namespace std;

class TirUtil {
protected:
	coordonnee Tir;
public:
	TirUtil();
	void coorddecase();
	bool tirutilisateur(Flotte adv);
};
coordonnee tirOrdi();


