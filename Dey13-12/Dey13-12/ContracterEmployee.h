#pragma once
#include "Employee.h"
class ContracterEmployee : public Employee
{

public:
	ContracterEmployee(std::string name, std::string surname, int ssn, Date date, int monthlyEarning);
	virtual void print();

	void setMonthly(int monthlyEarning);
	int getMonthly() const;
	virtual int earnings();
	virtual ~ContracterEmployee();
private:
	int monthlyEarning;
};

