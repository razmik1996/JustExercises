#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

class Employee
{
public:
	Employee(const string&, const string&, const string&);

	void setFirstName(const string&);
	string getFirstName() const;

	void setLastName(const string&);
	string getLastName() const;

	void setSSN(const string&);
	string getSSN() const;

	virtual double earnings() const = 0;
	virtual void print() const;
	~Employee();
private:
	string firstName;
	string SSN;
	string lastName;
};

#endif // !EMPLOYEE_H