#include "ContracterEmployee.h"


ContracterEmployee::ContracterEmployee(std::string name, std::string surname, int ssn, Date date, int monthlyEarning)
	:Employee(name, surname, ssn, date)
{
	setMonthly(monthlyEarning);
}

void ContracterEmployee::setMonthly(int monthlyEarning)
{
	this->monthlyEarning = (monthlyEarning > 0) ? monthlyEarning : 0;
}

int ContracterEmployee::getMonthly() const
{
	return monthlyEarning;
}

int ContracterEmployee::earnings()
{
	return (Employee::earnings() + (monthlyEarning * (10/100)));
}

void ContracterEmployee::print()
{
	Employee::print();
	std::cout << "Monthly earning: " << monthlyEarning << std::endl;
}

ContracterEmployee::~ContracterEmployee()
{
}
