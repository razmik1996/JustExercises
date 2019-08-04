#pragma once
#ifndef HOURLY_H
#define HOURLY_H
#include "Employee.h"

class HourlyEmployee : public Employee
{
public:
	HourlyEmployee(const string& first, const string& last,
		const string& ssn, double wage = 0.0, double hours = 0.0);

	void setWage(double wage);
	double getWage() const;

	void setHours(double hour);
	double getHours() const;

	virtual double earnings() const;
	virtual void print() const;
	~HourlyEmployee();
private:
	double wage;
	double hours;
};

#endif // HOURLY_H