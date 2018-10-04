//Terry Fairchild
//Lab 05 - Exceptions
//CS 250, Data Structures

#include <stdexcept>
#include <string>


//*********************** beginning STEP 2 **************************
class NegativeAmount : public std :: logic_error {
	public:
		NegativeAmount(const std::string& message) : logic_error
		("***NegativeAmount exception was thrown.*** \n Here is the exception message: \n " + message) {}
};
//*********************** end of STEP 2 *****************************



//*********************** beginning STEP 3 **************************
class InsufficientFunds : public std :: logic_error {
	public:
		InsufficientFunds(const std::string& message) : logic_error 
		("***InsufficientFunds exception was thrown.*** \n Here is the exception message: \n " + message){}
};
//*********************** end of STEP 3 *****************************


class Account{
	private:
		double balance;
	
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
		double deposit(double amount){
			if (amount > 0)
				balance += amount;
			else


/*********************** beginning STEP 4 ***************************
******** Deposit exception - entering a negative deposit amount **********/

			throw NegativeAmount ("Error, you can't deposit a negative amount! ");
//*********************** end of STEP 4 *****************************


			return balance;
		}
		double withdraw(double amount){
			if (amount < 0){



//************************** beginning STEP 5 *************************
//  First withdrawl exception - withdrawing a negative amount 
				throw NegativeAmount ("Error, you can't withdraw a negative amount!");
			}

 // Second withdrawl exception - excessive funds withdrawl 
			else if (amount > balance){
				throw InsufficientFunds("Error, account has insufficient funds for withdrawl!");
			}
//*************************** end of STEP 5 **************************


			else
				balance -= amount;
			return balance;
		}
};
