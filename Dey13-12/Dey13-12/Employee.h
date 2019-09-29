#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Date.h"

class Employee
{
public:
	Employee(std::string name, std::string surname, int ssn, Date date, int Salary = 500);
	virtual void print();
	virtual int earnings();
	virtual ~Employee();
private:
	Date birthdate;
	std::string name;
	std::string surname;
	int ssn;
	int salary;
};

#endif // !EMPLOYEE_H