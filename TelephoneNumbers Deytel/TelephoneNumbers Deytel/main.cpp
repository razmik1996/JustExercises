#include "PhoneNumber.h"

int main()
{
	PhoneNumber Phone;
	std::cout << "Please enter your phone number for example +374 96 772111: ";

	std::cin >> Phone;

	std::cout << std::endl;

	std::cout << "Your phone number is: " << Phone << std::endl;

	system("PAUSE");
	return 0;
}