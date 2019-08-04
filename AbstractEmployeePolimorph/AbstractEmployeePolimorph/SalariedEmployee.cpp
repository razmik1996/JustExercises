#include "SalariedEmployee.h"
#include <iostream>

SalariedEmployee::SalariedEmployee(const string & first, const string & last, const string & SSN, double wSalary)
	:Employee(first, last, SSN)
{
	setWeeklySalary(wSalary);
}

void SalariedEmployee::setWeeklySalary(double wSalary)
{
	weeklySalary = (wSalary < 0.0) ? 0.0 : wSalary;
}

double SalariedEmployee::getWeeklySalary() const
{
	return weeklySalary;
}

double SalariedEmployee::earnings() const
{
	return getWeeklySalary();
}

void SalariedEmployee::print() const
{
	std::cout << "Salared Employee: ";
	Employee::print();
	std::cout << "\nweekly salary: " << getWeeklySalary();
}

SalariedEmployee::~SalariedEmployee()
{
}
