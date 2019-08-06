#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
public:
	CheckingAccount(double balance, double tranz);
	~CheckingAccount();
	virtual void credit(int sum);
	virtual bool debit(int sum);
private:
	double costForTranzaction;
};

