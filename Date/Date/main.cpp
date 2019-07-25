#include <iostream>
#include "MyDate.h"

int main()
{
	MyDate d1;
	MyDate d2(11, 25, 1999);
	MyDate d3(5555, 5555, 5555);

	std::cout << "d1 is: " << d1 << " d2 is: " << d2 << " d3 is: " << d3 << std::endl;
	d3.setDate(01, 29, 1996);

	std::cout << d3 << std::endl;
}