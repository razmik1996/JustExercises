#include <iostream>
#include "MyArray.h"

int main()
{
	MyArray integers1;
	MyArray integers2(5);

	std::cout << "Sizof integers 1 is: " << integers1.getSize() << std::endl;
	std::cout << "Sizof integers 2 is: " << integers2.getSize() << std::endl;

	std::cin >> integers1;
	std::cin >> integers2;

	std::cout << integers1;
	std::cout << integers2;

	integers1 = integers1 + integers2;

	std::cout << integers1;
	system("PAUSE");
	return 0;
}