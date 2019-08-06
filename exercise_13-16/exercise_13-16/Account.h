#pragma once
class Account
{
public:
	Account(double balance);
	virtual void credit(int sum);
	virtual bool debit(int sum);
	double getBalacne() const {
		return balance;
	}
	~Account();
private:
	double balance;
};

