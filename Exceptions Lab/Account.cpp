#include <stdexcept>
#include <string.h>
using namespace std;



//************************ STEP 3 ************************
struct InsufficientFunds : public exception {
public:
	InsufficientFunds() {}
	virtual const char* what() const throw() {
		return "\nError, account has insufficient funds for withdrawl!\n";
	}
};
double withdraw(double amount) {
	if (amount > balance) {
		throw InsufficientFunds();
	}
}
//************************end of step 3 **********************



//************************ STEP 4 ************************
struct NegativeAmount: public exception{
	public:
		NegativeAmount(){}
		virtual const char* what() const throw(){
			return "\nError, you can't deposit a negative amount!\n";
		}
};
//*******************end of Step 4 ***********************


//**************************** Step 5 ************************
struct NegativeAmountWithdrawn : public exception {
public:
	NegativeAmountWithdrawn() {}
	virtual const char* what() const throw() {
		return "\nError, you can't withdraw a negative amount!\n";
	}
};

double withdrawNegative(double amount) {
	if (amount < 0) {
		throw NegativeAmountWithdrawn();
	}
	//*********************** end of Step 5*********************
	else {
		balance -= amount;
		return balance;
	}
}


class Account
{
	private:
		double balance;
		double deposit;
	public:
		Account(){
			balance = 0;
		}
		
		Account(double initialDeposit){
			balance = initialDeposit;
		}
		
		double getBalance(){
			return balance;
		}

};