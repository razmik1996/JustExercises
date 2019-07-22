#include "SavingsAccount.h"
#include <iostream>

int SavingsAccount::annualInteresRate = 0;

SavingsAccount::SavingsAccount(double balance):savingsBalance(balance)
{
}

void SavingsAccount::printBalance()
{
	std::cout << savingsBalance << std::endl;
}

void SavingsAccount::calculateMonthlyInterest()
{
	std::cout << "Your Balance is: " << savingsBalance << std::endl;
	double percentInThisMonth = 0;
	percentInThisMonth = ((savingsBalance * annualInteresRate) / 100)/12;
	std::cout << "Monthly Interest with " << annualInteresRate << "% is: " << percentInThisMonth << std::endl;
	savingsBalance += percentInThisMonth;
	std::cout << "New Balace is: " << savingsBalance << std::endl;
}

void SavingsAccount::modifyInterestRate(int newRate) 
{
	std::cout << "Interest rate is: " << annualInteresRate << std::endl;
	annualInteresRate = newRate;
	std::cout << "New interest rate is: " << annualInteresRate << std::endl;
}

SavingsAccount::~SavingsAccount()
{
}
