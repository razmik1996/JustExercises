#pragma once
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

using std::ostream;
using std::istream;
using std::string;

class PhoneNumber
{
private:
	string areaCode;
	string exchange;
	string line;
public:
	friend ostream &operator<<(ostream &, const PhoneNumber &);
	friend istream &operator>>(istream &, PhoneNumber &);
	PhoneNumber();
	~PhoneNumber();
};

#endif 