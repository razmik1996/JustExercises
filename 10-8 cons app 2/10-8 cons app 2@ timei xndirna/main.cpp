#include <iostream>
#include "SavingsAccount.h"

int 
main()
{
	SavingsAccount saver1(2000);
	SavingsAccount saver2(3000);
	SavingsAccount::modifyInterestRate(3);

	saver1.printBalance();
	saver2.printBalance();

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	SavingsAccount::modifyInterestRate(4);

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
}