#pragma once
#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h"

class SalariedEmployee : public Employee
{
public:
	SalariedEmployee(const string& first, const string& last,
		const string& SSN, double = 0.0);
	void setWeeklySalary(double);
	double getWeeklySalary() const;

	virtual double earnings() const;
	virtual void print() const;
	~SalariedEmployee();
private:
	double weeklySalary;
};

#endif // SALARIED_H