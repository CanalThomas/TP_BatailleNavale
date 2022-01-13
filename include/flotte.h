#include<iostream>
#include<vector>
#include <fstream>


class Bateau;

class Flotte
{
private:
	std::vector<Bateau> m_flotte;

public:
	Flotte();
	Flotte(std::string nfichier);
	~Flotte();

	std::vector<Bateau> getflotte();


};

