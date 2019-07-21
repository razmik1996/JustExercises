#include <iostream>
#include "Rectangle.h"

int main()
{
	Rectangle rec1;
	Rectangle rec2(5,8);

	std::cout << rec1.area() << std::endl;
	std::cout << rec2.perimeter() << std::endl;

	system("PAUSE");
	return 0;
}