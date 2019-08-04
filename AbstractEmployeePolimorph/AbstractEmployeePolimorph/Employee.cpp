#include "Employee.h"
#include <iostream>


Employee::Employee(const string& first, const string& last, const string& ssn)
	:firstName(first), lastName(last), SSN(ssn)
{
}


void Employee::print() const
{
	std::cout << getFirstName() << " " << getLastName() << "\nSSN is: " << getSSN();
}

Employee::~Employee()
{
}


void Employee::setFirstName(const string &name)
{
	firstName = name;
}

string Employee::getFirstName() const
{
	return firstName;
}

void Employee::setLastName(const string &last)
{
	lastName = last;
}

string Employee::getLastName() const
{
	return lastName;
}

void Employee::setSSN(const string &SSN)
{
	this->SSN = SSN;
}

string Employee::getSSN() const
{
	return SSN;
}
