// Task: Create a simple bank system to keep track of account balances. 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu

// header file library - allows us to work w/input and output objects.
// using namespace std - allows us to use names for objects and variables from the standard library.
#include <iostream>
using namespace std;

// function
int main() {
	// variables
	int id_num = 0; // identification number
	string account_holder; // bank account holder 
	double account_balance; // bank account balance

	int user_choice; // user chooses between 0, 1, 2, or 3

	std::cout << "\n";
	std::cout << "Enter the name: ";
	std::cin >> account_holder;
	std::cout << "Enter the balance: ";
	std::cin >> account_balance;
	std::cout << "\n";

	do {
		std::cout << "\n";
		std::cout << "Account Menu:" << "\n";
		std::cout << "0. Quit Program" << "\n";
		std::cout << "1. Display Account Information" << "\n";
		std::cout << "2. Add a deposit to an account" << "\n";
		std::cout << "3. Withdraw from an account" << "\n";
		std::cout << "Your choice: ";
		std::cin >> user_choice;
		std::cout << "\n";

		if (user_choice == 1) {
			std::cout << "\n";
			std::cout << "Account ID: " << id_num << "\n" << "Account Holder: " << account_holder << "\n" << "Account Balance: " << account_balance << "\n";
		}
		else if (user_choice == 2) {
			double deposit_amnt; // bank account deposit amount
		
			std::cout << "\n";
			std::cout << "Amount to deposit: ";
			std::cin >> deposit_amnt;
			std::cout << "\n";

			account_balance = account_balance + deposit_amnt; 
		}
		else if (user_choice == 3) {
			double withdraw_amnt; // bank account withdrall amount

			std::cout << "\n";
			std::cout << "Amount to withdraw: ";
			std::cin >> withdraw_amnt;
			std::cout << "\n";

			account_balance = account_balance - withdraw_amnt;
		}
	} 
	while (user_choice != 0);

	return 0;
}