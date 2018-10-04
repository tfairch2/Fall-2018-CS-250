#include<iostream>
#include<cmath>

using namespace std;

//Function for Problem 1 *********************************************
int resultPart1;
//Functions for calculating an exponent
void Power() {
}
int Power(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	else if (exponent == 1) {
		return resultPart1;
	}
	else {
		resultPart1 = resultPart1 * base;
		exponent--;
		Power(base, exponent);
	}
}

//Function for Problem 2 *********************************************
int n = 0;
int resultPart2 = 0;

//Function declaration & definition
void Sum() {}
int Sum(int n) {
	if (n == 0) {
		return resultPart2;
	}
	else {
		resultPart2 = Sum(n - 1) + n;
	}
}

//Function for Problem 3 *********************************************

//Declaring and initializing variables to be used
//'number' is used for the user input value
int number = 0;

/*'digit' is used for the least significant digit of the
value that the user input.  The cumulative use of 'digit' will
give the desired answer*/
int digit = 0;

//'result' is used to accumulate the added values of the least significant
//  digit of the input
int resultPart3 = 0;

int sumTheDigits(int) {
	//This step effectively removes the least significant digit (l.s.d.)
	//  of the user input, 'number' and assigns it the the variable 'digit'
	digit = number % 10;

	//This step takes the l.s.d. of the user input and adds it  
	//  to the variable 'result' for output
	resultPart3 = resultPart3 + digit;

	//Once the l.s.d. of 'number' has been added to 'result' it is subtracted
	//  from 'number' which then makes 0 the l.s.d.
	number = number - digit;

	/*If all of the digits have been added up in 'result' then the original user input
	in 'number' is gone.  The variable 'result' then has the total of all of
	the digits in 'number'*/
	if (number == 0) {
		//We then output 'result' to the user in main
		return resultPart3;
	}

	/*If 'number' doesn't equal 0, it still has digits to be added up.  However the
	l.s.d. is now 0.  So, if we divide 'number' by 10, that 0 drops off and we repeat the
	process of adding the l.s.d.'s to 'result'.  Any zero's originally in 'number'
	from user input are eliminated here as well.*/
	else {
		number = number / 10;
		sumTheDigits(number);
	}
}

int main() {



//Code for Problem 1 operations *********************************************
	int base = 0;
	int exponent = 0;

	//Loop through this program three times per instructions
	for (int i = 0; i < 3; i++) {
		//User input of values
		cout << "Calculation of an exponential value!" << endl;
		cout << "What is the base? " << endl;
		cin >> base;
		cout << "What is the exponent? " << endl;
		cin >> exponent;

		//Calling the function to calculate the answer then output
		resultPart1 = base;
		resultPart1 = Power(base, exponent);
		cout << "Base (" << base << ", " <<
			exponent << ") = " << resultPart1 << endl;
	}
	//Pause so results can be read
	cout << endl << "**************************" << endl <<
		"Press enter to go to Part 2" << endl << endl;
	cin.ignore();
	cin.get();



	//Code for Problem 2 operations *********************************************
	//Loop through this program three times per instructions
	for (int i = 0; i < 3; i++) {
		resultPart2 = 0;
		cout << "Enter an integer >= 0" << endl;
		cin >> n;
		cout << "Sum ( " << n << ")= "
			//Calling the function to essentially mimic Factorial except using addition
			//  then outputting the result from the function call
			<< Sum(n) << endl;
	}
	//Pause so results can be read
	cout << endl << "**************************" << endl <<
		"Press enter to go to Part 3" << endl << endl;
	cin.ignore();
	cin.get();


	//Code for Problem 3 operations *********************************************
	//Loop through this program three times per instructions
	for (int i = 0; i < 3; i++) {
		cout << "Please enter a positive integer: " << endl;
		cin >> number;

		//The variable 'originalNumber' is merely to hold the value that the user 
		//  originally entered in order to ouput it at the end of the program
		int originalNumber = number;

		//Call the function to add up the digits of the value input by the user
		sumTheDigits(number);

		//Once the digits have been added and placed into 'result' by the function we 
		//  output the original user input value along with the result
		cout << "sumTheDigits ( " << originalNumber << " ) = " << resultPart3 << endl;
		resultPart3 = 0;
	}

	//Pause so results can be read
	cout << endl << "**************************" << endl <<
		"Press enter to exit." << endl << endl;

	cin.ignore();
	cin.get();
	return 0;
}