#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <vector>
using std::vector;
#include <iostream>


int main()
{
	CheckingAccount acc1(6000, 150);
	SavingsAccount acc2(6000, 5);

	vector<Account *> ptrs(2);
	ptrs[0] = &acc1;
	ptrs[1] = &acc2;

	std::cout << ptrs[0]->getBalacne() << std::endl;
	ptrs[0]->credit(3000);
	std::cout << ptrs[0]->getBalacne() << std::endl;

	std::cout << ptrs[1]->getBalacne() << std::endl;
	ptrs[1]->credit(3000);
	std::cout << ptrs[1]->getBalacne() << std::endl;

	std::cout << ptrs.size() << std::endl;
	// Logic, if ptr is associated with an object of the SavingAccounts class, 
	// then all transactions call CalcuInterest and Credit.
	for (int i = 0; i < ptrs.size(); i++) {
		ptrs[i]->credit(2000);
		SavingsAccount *ptr = dynamic_cast<SavingsAccount*>(ptrs[i]);
		if (ptr != 0) {
			double interests = ptr->calculateInterests();
			std::cout << "Sum of interests: " << interests << std::endl;
			ptr->credit(interests);
		}
		std::cout << ptrs[i]->getBalacne() << std::endl;
	}
}