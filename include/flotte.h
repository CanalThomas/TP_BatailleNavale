#ifndef FLOTTE_HEADER
#define FLOTTE_HEADER


#include<iostream>
#include<vector>
#include <fstream>
#include"Bateau.h"

#define ASCII_0 48


/// CLASSE FLOTTE <br>
/// Classe qui va contenir tous les bateaux (dans un vecteur) d'une flotte
class Flotte
{
private:
	/// Vecteur de bateaux qui représente la flotte
	std::vector<Bateau> m_flotte;

public:
	///Constructeur de la flotte pour une flotte Ordinateur (bateaux définis aléatoirement)
	Flotte();
	///Constructeur de la flotte pour une flotte Utilisateur (bateaux définis à partir d'un document texte)
	Flotte(std::string nfichier);
	//Destructeur de la flotte
	~Flotte();
	///Getter
	std::vector<Bateau> getflotte();


};

#endif // !FLOTTE_HEADER
