#include "Employee.h"
#include "ContracterEmployee.h"

int main()
{
	Date date(15, 2, 1982);
	Employee employer("Vazgen", "Poghosyan", 2669987, date);
	Employee *ptr = new ContracterEmployee("Andranik", "Vardanyan", 5555555, date, 659);

	employer.print();
	ptr->print();
	return 0;
}