#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
public:
	SavingsAccount(int balance, int percentage);
	double calculateInterests();
	~SavingsAccount();
private:
	double percentage;
};

