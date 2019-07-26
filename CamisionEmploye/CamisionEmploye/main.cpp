#include <iostream>
using std::cout;
#include <iomanip>
using std::setprecision;
#include "BasePlussCommissionEmployee.h"

int main()
{
	std::cout << std::fixed << std::setprecision(2);

	{
		CommissionEmployee employee1("Karen", "Poghosyan", "096-772-772", 6000, 0.04);
	}
	cout << std::endl;
	BasePlussCommissionEmployee employee2("Kaaa", "Poggggn", "096-732-772", 5000, 0.04);
	cout << std::endl;
	BasePlussCommissionEmployee employee3("Malen", "Fstanyan", "096-772-799", 3000, 0.10);
	cout << std::endl;

	system("PAUSE");
	return 0;
}