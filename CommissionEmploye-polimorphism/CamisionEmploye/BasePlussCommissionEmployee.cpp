#include "BasePlussCommissionEmployee.h"
#include <iostream>


BasePlussCommissionEmployee::BasePlussCommissionEmployee(const string &first, const string &last,
	const string &ssn, double sales, double rate, double salary)
	: CommissionEmployee(first, last, ssn, sales, rate)
{
	std::cout << "BasePlussCommissionEmployee constructor is called" << std::endl;
	setBaseSalary(salary);

	print();
	std::cout << "\n\n";
}

void BasePlussCommissionEmployee::setBaseSalary(double salary)
{
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}

double BasePlussCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

double BasePlussCommissionEmployee::earnings() const
{
	return getBaseSalary() + CommissionEmployee::earnings();
}

BasePlussCommissionEmployee::~BasePlussCommissionEmployee()
{
	std::cout << "BasePlussCommissionEmployee destructor is called:" << std::endl;
	print();
	std::cout << "\n\n";
}

void BasePlussCommissionEmployee::print() const
{
	std::cout << "base-salaried ";

	CommissionEmployee::print();
	std::cout << "\nbase salary: " << getBaseSalary();
}
