#include "String.h"

#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstring>
using std::strcmp;
using std::strcpy;
using std::strcat;

#include <cstdlib>
using std::exit;

String::String(const char *s) : lenght((s!=0) ? strlen(s) :0)
{
	cout << s << endl;
	setString(s);
}

String::String(const String &copy) : lenght(copy.lenght)
{
	cout << copy.sPtr << endl;
	setString(copy.sPtr);
}


String::~String()
{
	delete [] sPtr;
}

const String & String::operator=(const String &right)
{
	if (&right != this) {
		delete[] sPtr;
		lenght = right.lenght;
		setString(right.sPtr);
	}
	else {
		cout << "Attempted assignment of a String to itself" << endl;
	}
	return *this;
}

const String & String::operator+=(const String &other)
{
	int newLenght = lenght + other.lenght;
	char *temp = new char[newLenght + 1];

	strcpy(temp, sPtr);
	strcpy(temp + lenght, other.sPtr);

	delete[] sPtr;
	sPtr = temp;
	lenght = newLenght;
	return *this;
}

bool String::operator!() const
{
	return false;
}

bool String::operator==(const String &) const
{
	return false;
}

bool String::operator<(const String &) const
{
	return false;
}

char & String::operator[](int)
{
	// TODO: вставьте здесь оператор return
}

char String::operator[](int) const
{
	return 0;
}

int String::getLenght() const
{
	return 0;
}

String String::operator()(int, int) const
{
	return String();
}

void String::setString(const char *)
{
}

std::ostream & operator<<(std::ostream & os, const String &)
{
	// TODO: вставьте здесь оператор return
}

std::istream & operator>>(std::istream & is, String &)
{
	// TODO: вставьте здесь оператор return
}
