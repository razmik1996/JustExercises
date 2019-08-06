#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
public:
	CheckingAccount(double balance, double tranz);
	~CheckingAccount();
	void credit(int sum);
	bool debit(int sum);
private:
	double costForTranzaction;
};

