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
	return lenght == 0;
}

bool String::operator==(const String &right) const
{
	return !(strcmp(sPtr, right.sPtr));
}

bool String::operator<(const String &right) const
{
	return strcmp(sPtr, right.sPtr) < 0;
}

char & String::operator[](int sub)
{
	if (sub < 0 || sub > lenght) {
		cerr << "Error 1: out of range" << endl;
		exit(1);
	}
	return sPtr[sub];
}

char String::operator[](int sub) const
{
	if (sub < 0 || sub > lenght) {
		cerr << "Error 1: out of range" << endl;
		exit(1);
	}
	return sPtr[sub];
}

int String::getLenght() const
{
	return lenght;
}

//String String::operator()(int, int) const
//{
//	return String();
//}

void String::setString(const char *str2)
{
	sPtr = new char[lenght + 1];

	if (str2 != 0) {
		strcpy(sPtr, str2);
	}
	else
		sPtr[0] = '\0';
}

std::ostream & operator<<(std::ostream & os, const String &string)
{
	os << string.sPtr;
	return os;
}

std::istream & operator>>(std::istream & is, String &s)
{
	char temp[100];
	is >> setw(100) >> temp;
	s = temp;
	return is;
}
