#include "PhoneNumber.h"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int 
main()
{
	PhoneNumber Phone;

	cout << "Enter phone number in the form (123) 456-7890: " << endl;

	cin >> Phone;
	cout << "The phone number etered was: ";
	cout << Phone << endl;
	return 0;
}