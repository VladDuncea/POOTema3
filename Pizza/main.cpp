#include <iostream>
#include "Pizza.h"

int main()
{
	std::vector<produs *> produse;
	Pizza pizza(10);
	pizza.addIngred("rosiute", 20, 0.5);
	pizza.addIngred("ardeior", 10, 0.5);
	pizza.addIngred("salamior", 10, 0.5);
	produse.push_back(&pizza);

	Pizza pizza2(pizza);
	pizza2.addIngred("cascavel", 5, 0.5);
	produse.push_back(&pizza2);

	Pizza pizza3(pizza2);
	pizza3.addIngred("frunzisoare", 10, 0.3);
	produse.push_back(&pizza3);

	int dist = 8;
	for (auto prod : produse)
	{
		std::cout << prod->pret(dist)<<std::endl;
		dist += 100;
	}
	return 0;

}