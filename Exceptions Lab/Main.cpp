#include <iostream>
#include "Account.cpp"
using namespace std;


int main(){
	Account a(100);
	int choice = 0;


// Prompt the user for their choice of exception to test
	do {
		std::cout << "What test do you want to do?"
			<< std::endl << "1. NegativeAmount exception with deposit()" 
			<< std::endl << "2. InsufficientFunds exception with withdraw()" 
			<< std::endl << "3. NegativeAmount exception with withdraw()"
			<< std::endl << "Your choice: ";
		std::cin >> choice;
		if ((choice < 1) || (choice > 3)){
		std::cout << std::endl << "Invalid choice, please enter 1, 2, or 3." << std::endl << std::endl;
		}	
	} while ((choice < 1) || (choice > 3));


	
/******************* beginning STEP 6  ************************
**** The try/catch statements for each exception to be tested*******/
	cout << endl;
	switch (choice) {
	case 1:
		try {
			cout << "Working with an account that has a $100 balance." << endl <<
				"Trying a deposit of -200." << endl << endl;
			a.deposit(-200);
		}
		catch (NegativeAmount &except){
			cout << except.what() << endl << endl;
		}
		break;
	case 2:
		try {
			cout << "Working with an account that has a $100 balance." << endl <<
				"Trying a withdrawl of $200." << endl << endl;
			a.withdraw(200);
		}
		catch (InsufficientFunds &except){
			cout << except.what() << endl << endl;
		}
		break;
	case 3:
		try {
			cout << "Working with an account that has a $100 balance." << endl <<
				"Trying a withdrawl of -$200." << endl << endl;
			a.withdraw(-200);
		}
		catch (NegativeAmount &except) {
			cout << except.what() << endl << endl;
		}
		break;
	default: break;
	}
//******************* end of STEP 6 ***************************



	std::cin.ignore();
	std::cin.get();
	return 0;
}