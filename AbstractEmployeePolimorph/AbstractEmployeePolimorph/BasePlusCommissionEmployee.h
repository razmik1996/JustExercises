#pragma once
#ifndef BASEPLUS_H

#include "CommissionEmployee.h"
class BasePlusCommissionEmployee :public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn,
		double commission = 0.0, double sales = 0.0, double baseSalary = 0.0);

	void setBaseSalary(double salary);
	double getBaseSalary() const;

	virtual double earnings() const;
	virtual void print() const;
	~BasePlusCommissionEmployee();
private:
	double baseSalary;
};

#endif // !BASEPLUS_H