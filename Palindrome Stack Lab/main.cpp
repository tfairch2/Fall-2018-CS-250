
//********** Terry Fairchild ***************
//******CS 250 - Data Structures ***********

#include <iostream>
#include <string>
#include "LinkedStack.hpp"


	// STEP 3 **************************
void clearStack(LinkedStack<char> LinkedStack)
{

			while(!LinkedStack.isEmpty())
			{
			LinkedStack.pop();
			}
}
	// end of 3****************************





	// STEP 4 **************************
bool testPal(LinkedStack<char> LinkedStack, std::string inputStr)
 { 
	 for (int i = 0; i <= inputStr.length() - 1; i++)
		 { 
			 LinkedStack.push(inputStr);
		 }
	 for (int i = 0; i <= inputStr.length() - 1; i++)
		 {
			 LinkedStack.peek() == inputStr;
			 LinkedStack.pop();
		 }
	 return true;
 }
	// end of 4 ***************************




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


	clearStack(LinkedStack);
	

	// STEP 5 **************************
	result = testPal(LinkedStack, inputStr);
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

