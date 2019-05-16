#pragma once
#include "Ingredient.h"
#include <vector>

class produs
{
protected:
	std::vector<Ingredient> protecIngrediente;

public:

	produs();
	virtual ~produs();

	virtual double pret(int distanta = 0) const = 0;
};

