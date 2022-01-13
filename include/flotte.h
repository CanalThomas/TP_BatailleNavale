#ifndef FLOTTE_HEADER
#define FLOTTE_HEADER


#include<iostream>
#include<vector>
#include <fstream>

#define ASCII_0 48

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

#endif // !FLOTTE_HEADER
