#include "PhoneNumber.h"
#include <iomanip>



PhoneNumber::PhoneNumber()
{
}


PhoneNumber::~PhoneNumber()
{
}

std::ostream & operator<<(std::ostream & os, const PhoneNumber &object)
{
	os << "+" << object.areaCode << " " << object.exchange << " " << object.line << std::endl;
	return os;
}

std::istream & operator>>(std::istream & is, PhoneNumber &object)
{
	is.ignore();
	is >> std::setw(4) >> object.areaCode;
	is.ignore();
	is >> std::setw(2) >> object.exchange;
	is.ignore();
	is >> std::setw(6) >> object.line;

	return is;
}
