#pragma once
#ifndef COMMISSION_H
#define COMMISSION_H
#include "Employee.h"

class CommissionEmployee : public Employee
{
public:
	CommissionEmployee(const string& first, const string& last,
		const string& ssn, double commissionRate = 0.0, double grossSales = 0.0);

	void setCommissionRate(double rate);
	double getCommissionRate() const;

	void setGrossSales(double sales);
	double getGrossSales() const;

	virtual double earnings() const;
	virtual void print() const;
	~CommissionEmployee();
private:
	double commissionRate;
	double grossSales;
};

#endif // !COMMISSION_H