/** COMMENTS ********************************************************/
/*	Your name:Alexandra Wolf
	Class block: 		H		Date: 
	Lab:
	Title:Lab 10
	Objective:
*/

/** INCLUDE FILES ***************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/** PROTOTYPES ******************************************************/
int reverse(int num);
bool prime(int num);
void exponent();
void factorial();
int greatestCommonDivisor(int a, int b);

/** MAIN FUNCTION ***************************************************/
int main()
{
/** VARIABLE DECLARATION ***************************************/
	int number, rebmun, num2, comdiv;
	bool p;		// this is a variable type that can only be true (1) or false (0)

/** PROCESS *****************************************************/
	char option;
	do
	{
		cout<<"A) Reverses the digits of a number."<<endl
			<<"B) Determines if a number is prime"<<endl
			<<"C) Raise a number to a certain exponential value"<<endl
			<<"D) Determine the factorial of a number"<<endl
			<<"E) Find the Greatest Common Divisor between two numbers"<<endl
			<<"Q) Quit the program"<<endl<<endl
			<<"Please choose an option: ";
		cin>>option;
		switch(option)
		{
			case 'A':
				cout << endl << "Enter a positive number between 1 and 9999: ";
				cin >> number;
				rebmun = reverse(number);
				cout << "The number " << number << " reversed is: " << rebmun << endl << endl;
				break;
			case 'B':
				cout << endl << "Enter a positive number: ";
				cin >> number;
				p = prime(number);
				if (p == false)			// can also use: if (!p)
					cout << "\nThe number " << number << " is not prime." << endl << endl;
				else if (p == true)		// can also use: if (p)
					cout << "\nThe number " << number << " is prime." << endl << endl;
				break;
			case 'C':	exponent();
				break;
			case 'D':	factorial();
				break;
			case 'E':
				cout << endl << "Enter two positive numbers: ";
				cin >> number >> num2;
				comdiv = greatestCommonDivisor(number, num2);
				cout << "\nThe greatest common divisor of " << number << " and " << num2
					 << " is " << comdiv << "." << endl << endl;
				break;
		}

	}while(option!='Q');
	cout << "Thanks for using my super cool math program."<< endl << "Have a Great Day!" << endl;
	return 0;
}

/** FUNCTIONS ******************************************************/
int reverse(int num)
{
int digits, rebmun;
	if (num < 10)
		digits= 1;
	else if (num > 100 )
		digits = 2;
	else if (num < 1000)
		digits = 3;
	else if (num < 10000)
		digits = 4;

	//make a switch case that will sseperate out the case based on teh number of digits so that you can write each number in reverse
switch(digits)
{
case 1:
	rebnum= num;
	break;
case 2:
	rebmun=  num/10 + ((num %10) *10);
break;
case 3:
	rebumn= num/ //NEED TO F
}
}

bool prime(int num)
{

}

void exponent()
{

}

void factorial()
{

}

int greatestCommonDivisor(int a, int b)
{

}

