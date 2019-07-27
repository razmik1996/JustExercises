#pragma once
#ifndef COMMISSIONEMPLOYEE_H


#include <string>
using std::string;

class CommissionEmployee
{
public:
	CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
	void setFirstName(const string&);
	string getFirstName() const;

	void setLastName(const string&);
	string getLastName() const;

	void setSocialSec(const string&);
	string getSocialSec() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommisionRate(double);
	double getCommisionRate() const;

	double earnings() const;
	void print() const;

	~CommissionEmployee();
private:
	string firstName;
	string lastName;
	string socialSec;
	double grossSales;
	double commisionRate;
};

#endif // !COMMISSIONEMPLOYEE_H