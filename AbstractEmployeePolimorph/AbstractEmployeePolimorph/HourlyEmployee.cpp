#include "HourlyEmployee.h"
#include <iostream>

HourlyEmployee::HourlyEmployee(const string & first, const string & last, const string & ssn, double wage, double hours)
	:Employee(first, last, ssn)
{
	setWage(wage);
	setHours(hours);
}

void HourlyEmployee::setWage(double wage)
{
	this->wage = (wage < 0.0) ? 0.0 : wage;
}

double HourlyEmployee::getWage() const
{
	return wage;
}

void HourlyEmployee::setHours(double hour)
{
	this->hours = ((hour >= 0.0) && (hour <= 168)) ? hour : 0.0;
}

double HourlyEmployee::getHours() const
{
	return hours;
}

double HourlyEmployee::earnings() const
{
	if (getHours() <= 40) {
		return getWage() * getHours();
	}
	else {
		return 40 *	getWage() + ((getHours() - 40) * getWage() * 1.5);
	} 
}

void HourlyEmployee::print() const
{
	std::cout << "Hourly Employee: ";
	Employee::print();
	std::cout << "\nhourly wage: " << getWage() << "; hours worked: " << getHours();
}

HourlyEmployee::~HourlyEmployee()
{
}
