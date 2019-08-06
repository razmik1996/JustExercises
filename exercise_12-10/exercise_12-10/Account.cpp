#include "Account.h"
#include <iostream>

Account::Account(double balance)
{
	this->balance = (balance < 0.0) ? 0.0 : balance;
}

void Account::credit(int sum)
{
	this->balance += (sum > 0) ? sum : 0;
}

bool Account::debit(int sum)
{
	if (sum > balance) {
		std::cout << "Debit amount exceeds account balance" << std::endl;
		return false;
	}
	else {
		this->balance -= sum;
		return true;
	}
}

Account::~Account()
{
}
