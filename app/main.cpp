#include "app.h"
#include <string>
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
int main()
{
	int id;
	vsite::oop::v4::leg_counter legs;

	while (true)
	{
		std::cout << "Unesite ID zivotinje (1-3) ili 0 za ispis: ";
		std::cin >> id;
		if (id == 0)
		{
			std::cout << "Ukupan broj nogu: " << legs.legs();
			break;
		}
		legs.add_animal(vsite::oop::v4::animal_factory(id).get());
	}

}
