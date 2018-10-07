
//********** Terry Fairchild ***************
//******CS 250 - Data Structures ***********

// **********There is an error on line 32 that I cannot resolve **************
#include <iostream>
#include <string>
#include "LinkedStack.hpp"


	// STEP 3 **************************
void clearStack(){}
void clearStack(LinkedStack<char> LinkedStack){
		while(!LinkedStack.isEmpty()){
		LinkedStack.pop();
		}
}
	// end of 3****************************




	// STEP 4 **************************
void clearStack();//clearStack is called in order to clear out LinkedStack

bool testPal(LinkedStack<char>* LinkedStack, std::string inputStr) {  //This is the algorithm which tests for a palindrome
	 for (int i = 0; i <= inputStr.length() - 1; i++){ 
	 bool LinkedStack<char>::push(const char& inputStr.length()); //The textbook was used as a model for this line but I cannot resolve this error
		 }
	std::string reverse;
	 for (int i = 0; i <= inputStr.length() - 1; i++){

	 /*This step uses 'peek()' to flip 'inputStr' and store it in 'reverse'.  When compared, a palindrome exists if 'inputStr' is the same
			as 'reverse'.  The following two lines of code are also modeled after the text, but I don't have sufficient understanding to 
			resolve the following errors.*/
		reverse = LinkedStack.peek();
		LinkedStack.pop();
			}
	 if (reverse == inputStr) {
		 return true;
	 }
	 else return false;
 }
	// end of 4 ******************




int main(){


	// STEP 1 **************************
	LinkedStack<char>* stackPtr = new LinkedStack<char>();
	// end of 1**************************


	std::string inputStr;
	std::string quit;
	bool result = true;

	do {



	// STEP 2 **************************
		std::cout << "Enter a string of characters: ";
		std::cin >> inputStr;
	// end of 2 ***************************

	

	// STEP 5 **************************         
		result = testPal(stackPtr, inputStr);
	// end of 5 **************************
		

		std::cout << inputStr;
		if (result)
			std::cout << " is a palindrome!" << std::endl;
		else
			std::cout << " is NOT a palindrome!" << std::endl;

		std::cout << "Would you like to test another string? (y/n): ";
		std::cin >> quit;

	} while (quit != "n");

	std::cin.ignore();
	std::cin.get();

   return 0;
}  // end main

