#include "Pizza.h"



Pizza::Pizza()
{
	privManopera = 0;
}

Pizza::Pizza(int manopera)
{
	privManopera = manopera;
}

Pizza::~Pizza()
{
}

double Pizza::pret(int distanta) const
{
	//Verificare distanta corecta
	if (distanta < 0)
		return -1;

	double pretFinal = privManopera;
	for (auto ing : protecIngrediente)
	{
		pretFinal += ing.pret();
	}

	pretFinal += pretFinal * 0.05 * (distanta / 10);

	return pretFinal;
}

void Pizza::addIngred(const std::string denumire,const double cantitate,const double pret)
{
	protecIngrediente.push_back(Ingredient(denumire, cantitate, pret));
}
