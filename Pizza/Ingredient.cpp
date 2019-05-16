#include "Ingredient.h"

Ingredient::Ingredient()
{
	privDenumire = "";
	privCantitate = 0;
	privPret = 0;
}

Ingredient::Ingredient(std::string denumire, double cantitate, double pret)
{
	privDenumire = denumire;
	privCantitate = cantitate;
	privPret = pret;
}

Ingredient::~Ingredient()
{
}

void Ingredient::initializare(std::string denumire, double cantitate, double pret)
{
	privDenumire = denumire;
	privCantitate = cantitate;
	privPret = pret;
}

std::string Ingredient::denumire() const
{
	return privDenumire;
}

double Ingredient::cantitate() const
{
	return privCantitate;
}

double Ingredient::pret() const
{
	return privPret*privCantitate;
}
