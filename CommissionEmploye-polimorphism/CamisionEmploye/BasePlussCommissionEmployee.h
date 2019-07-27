#pragma once
#ifndef BASEPLUS_H

#include "CommissionEmployee.h"
#include <string>
class BasePlussCommissionEmployee :public CommissionEmployee
{
public:
	BasePlussCommissionEmployee(const string&, const string&, const string&, double = 0.0,
		double = 0.0, double = 0.0);
	void setBaseSalary(double);
	double getBaseSalary() const;
	virtual double earnings() const;
	~BasePlussCommissionEmployee();
	virtual void print() const;
private:
	double baseSalary;
};

#endif // !BASEPLUS_H