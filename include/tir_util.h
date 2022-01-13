#pragma once
#include <iostream>
#include <vector>
#include "flotte.h"
#include <utility>

using namespace std;

class TirUtil {
protected:
	pair<int,int>* Tir;
public:
	TirUtil();
	void coorddecase();
	bool tirutilisateur(Flotte adv);
};
pair<int,int> tirOrdi();


