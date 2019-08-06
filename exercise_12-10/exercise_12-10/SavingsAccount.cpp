#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(int balance, int percentage) : Account(balance)
{
	this->percentage = (percentage < 0 || percentage > 100) ? 0 : percentage;
}

double SavingsAccount::calculateInterests()
{
	return getBalacne() * (percentage/100.0);
}

SavingsAccount::~SavingsAccount()
{
}
