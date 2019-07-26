#include "BasePlussCommisionEmployee.h"



BasePlussCommisionEmployee::BasePlussCommisionEmployee(const string &first, const string &last,
	const string &ssn, double sales, double rate, double salary)
	: CommissionEmployee(first, last, ssn, sales, rate)
{
	setBaseSalary(salary);
}

BasePlussCommisionEmployee::~BasePlussCommisionEmployee()
{
}
