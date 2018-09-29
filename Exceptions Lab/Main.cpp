#include <iostream>
#include "Account.cpp"

int main()
{
	Account a(100);
	int choice = 0;

	do {
		cout << "What test do you want to do?"
			<< endl << "1. NegativeAmount exception with deposit()" 
			<< endl << "2. InsufficientFunds exception with withdraw()" 
			<< endl << "3. NegativeAmount exception with withdraw()"
			<< endl << "Your choice: ";
		cin >> choice;

		if ((choice < 1) || (choice > 3)){
		cout << endl << "Invalid choice, please enter 1, 2, or 3." << endl << endl;
		}	
	} while ((choice < 1) || (choice > 3));


//************************* STEP 6 ***********************************
		cout << endl << "Starting Balance: " << a.getBalance() << endl;
		switch (choice) {
		case 1:
			try {
				cout << "Working with an account that has a $100 balance." << endl <<
					"Trying a deposit of -200." << endl;
					a.deposit(-200);
			}
			catch (NegativeAmount &except) {
				cout << except.what() << endl <<endl;
			}
			break;
		case 2:
			try {
				cout << "Working with an account that has a $100 balance." << endl <<
					"Trying a withdrawl of $200." << endl;
				a.withdraw(200);
			}
			catch (InsufficientFunds &except) {
				cout << except.what() << endl << endl;
			}
			break;
		case 3:
			try {
				cout << "Working with an account that has a $100 balance." << endl <<
					"Trying a withdrawl of -$200." << endl;
				a.withdrawNegative(-200);
			}
			catch (NegativeAmountWithdrawn &except) {
				cout << except.what() << endl << endl;
			}
			break;
		default: break;
		}
//************************ end of Step 6*********************************


	cin.ignore();
	cin.get();
	return 0;
}
