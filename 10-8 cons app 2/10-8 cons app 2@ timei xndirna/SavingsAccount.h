#pragma once
class SavingsAccount
{
public:
	void calculateMonthlyInterest();
	void printBalance();
	SavingsAccount(double);
	~SavingsAccount();
	static void modifyInterestRate(int);
private:
	double savingsBalance;
	static int annualInteresRate;
};

