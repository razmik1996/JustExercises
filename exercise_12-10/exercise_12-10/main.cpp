#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <iostream>

int main()
{
	SavingsAccount acc(5000, 10);
	CheckingAccount acc2(5000, 150);

	acc2.debit(6000);
	std::cout << acc2.getBalacne() << std::endl;
	acc2.credit(3000);
	std::cout << acc2.getBalacne() << std::endl;
	acc2.debit(6000);
	std::cout << acc2.getBalacne() << std::endl;
	std::cout << acc.calculateInterests() << std::endl;

	return 0;
}