#include "BasePlusCommissionEmployee.h"
#include <iostream>


BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string & first, const string & last, const string & ssn, double commission, double sales, double baseSalary)
	: CommissionEmployee(first, last, ssn, commission, sales)
{
	setBaseSalary(baseSalary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	baseSalary = ((salary < 0.0) ? 0.0 : salary);
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
	return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
	std::cout << "base salared: ";
	CommissionEmployee::print();
	std::cout << "; base salary: " << getBaseSalary();
}

BasePlusCommissionEmployee::~BasePlusCommissionEmployee()
{
}
