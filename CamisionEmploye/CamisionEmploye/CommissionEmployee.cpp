#include "CommissionEmployee.h"
#include <iostream>


CommissionEmployee::CommissionEmployee(const string &first, const string &last,
	const string &social, double sales, double rate) 
	: firstName(first), lastName(last), socialSec(social)
{
	setGrossSales(sales);
	setCommisionRate(rate);

	std::cout << "Commission Employee constructor:" << std::endl;
	print();
	std::cout << "\n\n";
}

void CommissionEmployee::setFirstName(const string &first)
{
	firstName = first;
}

string CommissionEmployee::getFirstName() const
{
	return firstName;
}

void CommissionEmployee::setLastName(const string &last)
{
	lastName = last;
}

string CommissionEmployee::getLastName() const
{
	return lastName;
}

void CommissionEmployee::setSocialSec(const string &ssn)
{
	socialSec = ssn;
}

string CommissionEmployee::getSocialSec() const
{
	return socialSec;
}

void CommissionEmployee::setGrossSales(double sales)
{
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

void CommissionEmployee::setCommisionRate(double rate)
{
	commisionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommisionRate() const
{
	return commisionRate;
}

double CommissionEmployee::earnings() const
{
	return getCommisionRate() * getGrossSales();
}

void CommissionEmployee::print() const
{
	std::cout << "CommissionEmployee: " << getFirstName() << " " << getLastName()
		<< "\nSocial Security number: " << getSocialSec()
		<< "\nGross sales: " << getGrossSales()
		<< "\commision rate: " << getCommisionRate();
}

CommissionEmployee::~CommissionEmployee()
{
	std::cout << "CommissionEmployee Destructor:" << std::endl;
	print();
	std::cout << "\n\n";
}
