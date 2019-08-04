#include <iostream>
using std::cout;
using std::endl;

#include "BasePlusCommissionEmployee.h"
#include "Employee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"

#include <vector>
using std::vector;

#include <iomanip>
using std::setprecision;

void virtualPointer(const Employee * const ptr);
void virtualReference(const Employee &);

int main()
{
	cout << std::fixed << setprecision(2);

	SalariedEmployee Salared("Karen", "Martirosyan", "111-11-1111", 900);
	HourlyEmployee Hourly("Karine", "Martirosyan", "222-22-2222", 23, 45);
	CommissionEmployee Commission("Vlad", "Arzumanovich", "333-33-3333", 0.06, 10000);
	BasePlusCommissionEmployee Base("Nikita", "Xrushchov", "444-44-4444", 0.01, 5000, 600);

	cout << "Using static linking \n\n";

	Salared.print();
	cout << "\nearned $" << Salared.earnings() << "\n\n";
	Hourly.print();
	cout << "\nearned $" << Hourly.earnings() << "\n\n";
	Commission.print();
	cout << "\nearned $" << Commission.earnings() << "\n\n";
	Base.print();
	cout << "\nearned $" << Base.earnings() << "\n\n";

	cout << "Using dinamic linking \n\n";

	Employee *ptr;
	ptr = &Salared;

	ptr->print();
	cout << "\nearned $" << ptr->earnings() << "\n\n";

	ptr = &Hourly;

	ptr->print();
	cout << "\nearned $" << ptr->earnings() << "\n\n";

	ptr = &Commission;

	ptr->print();
	cout << "\nearned $" << ptr->earnings() << "\n\n";

	ptr = &Base;

	ptr->print();
	cout << "\nearned $" << ptr->earnings() << "\n\n";

	system("PAUSE");
	return 0; 
}

void virtualPointer(const Employee * const ptr)
{
	ptr->print();
	cout << "\nearned $" << ptr->earnings() << "\n\n";
}

void virtualReference(const Employee &ref) 
{
	ref.print();
	cout << "\nearned $" << ref.earnings() << "\n\n";
}