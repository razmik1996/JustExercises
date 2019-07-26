#include "body.h"
#include "Car.h"
#include <iostream>

int 
main() 
{
	body mersChar("Red");
	Car Tachka(mersChar, "mers");
	std::cout << Tachka.getCarName() << std::endl;
	std::cout << Tachka.getCarColor() << std::endl;

	return 0;
}