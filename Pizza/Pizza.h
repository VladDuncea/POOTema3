#pragma once
#include "produs.h"

class Pizza : public produs
{
	double privManopera;
public:
	Pizza();
	Pizza(int manopera);
	~Pizza();

	double pret(int distanta = 0) const;

	void addIngred(const std::string denumire,const double cantitate,const double pret);
};

