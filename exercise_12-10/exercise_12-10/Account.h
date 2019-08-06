#pragma once
class Account
{
public:
	Account(double balance);
	void credit(int sum);
	bool debit(int sum);
	double getBalacne() const {
		return balance;
	}
	~Account();
private:
	double balance;
};

