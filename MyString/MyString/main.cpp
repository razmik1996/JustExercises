#include "String.h"
#include <iostream>

int main()
{
	String str1 ("flan");
	String str2 ("flan");

	std::cout << (str1 == str2) << std::endl;

	system("PAUSE");
	return 0;
}