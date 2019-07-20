#include <iostream>

int main() 
{
	long value1, value2;
	value1 = 20000;

	long* lPtr;
	lPtr = &value1;

	std::cout << "*lptr = " << *lPtr << std::endl;

	value2 = *lPtr;

	std::cout << "value2 = " << value2 << std::endl;

	std::cout << "&value1 = " << &value1 << std::endl;

	std::cout << "lptr = " << lPtr << " &value1 = " << &value1 << " &value2 = " << &value2 << std::endl;
}