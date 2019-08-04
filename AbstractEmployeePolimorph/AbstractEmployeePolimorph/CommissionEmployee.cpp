#include "CommissionEmployee.h"
#include <iostream>

CommissionEmployee::~CommissionEmployee()
{
}

CommissionEmployee::CommissionEmployee(const string & first, const string & last, const string & ssn, double commissionRate, double grossSales)
	:Employee(first, last, ssn)
{
	setCommissionRate(commissionRate);
	setGrossSales(grossSales);
}

void CommissionEmployee::setCommissionRate(double rate)
{
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

void CommissionEmployee::setGrossSales(double sales)
{
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

double CommissionEmployee::earnings() const
{
	return getGrossSales() * getCommissionRate();
}

void CommissionEmployee::print() const
{
	std::cout << "Commision employee: ";
	Employee::print();
	std::cout << "\ngross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate();
}
