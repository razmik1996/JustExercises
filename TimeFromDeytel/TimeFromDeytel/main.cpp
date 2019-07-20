#include "Time.h"
#include <iostream>

using std::endl;
using std::cout;

int main()
{
	Time t;

	cout << "The initial universal time is: ";
	t.printUniversal();
	cout << endl;
	cout << "The initial standart time is: ";
	t.printStandart();
	cout << endl;

	t.setTime(15, 6, 65);

	cout << "Universal time after setTime is: ";
	t.printUniversal();
	cout << endl;
	cout << "Standart time after setTime is: ";
	t.printStandart();
	cout << endl;

	system("PAUSE");
	return 0;
}