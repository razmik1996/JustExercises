#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(double balance, double tranz) : Account(balance)
{
	costForTranzaction = (tranz >= 0.0 && tranz <= 200) ? tranz : 0.0;
}



CheckingAccount::~CheckingAccount()
{
}

void CheckingAccount::credit(int sum)
{
	Account::credit(sum);
	Account::debit(costForTranzaction);
}

bool CheckingAccount::debit(int sum)
{
	if (Account::debit(sum)) {
		Account::debit(costForTranzaction);
		return true;
	}
	else {
		return false;
	}
}
