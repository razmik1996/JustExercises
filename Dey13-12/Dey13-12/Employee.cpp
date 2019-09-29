#include <iostream>
#include "Employee.h"

Employee::Employee(std::string name, std::string surname, int ssn, Date date, int salary)
{
	this->name = name;
	this->surname = surname;
	this->ssn = ssn;
	this->birthdate = date;
	this->salary = salary;
}

void Employee::print()
{
	std::cout << "Name: " << name 
		<< "\nSurname: " << surname 
		<< "\nSSN: " << ssn 
		<< "\nBirth day: " << birthdate 
		<< "\nEarnings: "<< earnings() << std::endl;
}

int Employee::earnings()
{
	return salary;
}

Employee::~Employee()
{
}
