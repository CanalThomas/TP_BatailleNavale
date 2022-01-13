#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include "flotte.h"

class TirUtil {
protected:
	vector<int>* Tir;
public:
	TirUtil();
	void coorddecase();
	bool tirutilisateur(Flotte adv);
};
