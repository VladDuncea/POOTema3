#pragma once
#include <string>
class Ingredient
{
	std::string privDenumire;
	double privCantitate;
	double privPret;

public:
	Ingredient();
	Ingredient(std::string denumire,double cantitate,double pret);
	~Ingredient();
	
	//initializare
	void initializare(std::string denumire, double cantitate, double pret);

	//Getter
	std::string denumire() const;
	double cantitate() const;
	double pret() const;
};

