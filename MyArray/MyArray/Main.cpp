#include <iostream>
#include "MyArray.h"

int main()
{
	MyArray integers1;
	MyArray integers2(50);

	std::cout << "Sizof integers 1 is: " << integers1.getSize() << std::endl;
	std::cout << "Sizof integers 2 is: " << integers2.getSize() << std::endl;

	std::cin >> integers1;
	std::cin >> integers2;

	std::cout << integers1;
	std::cout << integers2;

	system("PAUSE");
	return 0;
}