/** COMMENTS ********************************************************/
/*	Your name:
	Class block: 				Date:
	Lab:
	Title:
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
	if (0 < num && num < 10)
		digits= 1;
	else if (num<100 && num >= 10  )
		digits = 2;
	else if ( num < 1000 && num >=100)
		digits = 3;
	else if  (num < 10000 && num >= 1000)
		digits = 4;

	cout << "digits =  "<< digits << endl;
	//make a switch case that will seperate out the case based on the number of digits so that you can write each number in reverse
switch(digits)
{
case 1:
	rebmun= num;
	break;
case 2:
	rebmun=  num/10 + ((num %10) *10);
break;
case 3:
	rebmun= num/100 + ((num%10)*100) + ((num%100)-(num%10));
	break;
case 4: rebmun = num/1000  + (num%10 * 1000) + (((num%100)-(num%10))*10) + (((num%1000)- ((num%100)-(num%10)))/10) ;
break;

}
return rebmun;
}




bool prime(int num)
{

	for(int divisor = 2; divisor <= sqrt(num); divisor++)
	{
		if (num % divisor == 0)
		{
			return false;

		}
	}

	return true;
}


void exponent()
{
	int base, exponent, answer=1;

cout << "\nEnter a positive number between 1 and 999 for the base: ";
	cin >> base;
	cout << "Enter a positive number between 1 and 99 for the exponent: ";
	cin >> exponent;


	for(int a = 1; a <= exponent; a++) // middle part declares condition to  it will run not condition to stop teh loop
	{
		answer = base*answer;
	}

	cout <<endl << "The answer of " << base << " raised to the " << exponent << "th power is: " << answer << endl <<endl;
}




void factorial()
{
	int answerD=1, numberD;

cout <<"\nEnter a positive number between 1 and 20: " << endl;
cin >> numberD;


for(int b= 1 ; b <= numberD; b++)
{
	answerD= answerD*b;
}
cout <<"The number " << numberD << "! is " << answerD << "." << endl<< endl;
}


int greatestCommonDivisor(int a, int b)
{

int remainder, small, big, comdiv;

	if(a > b) //if first number is the larger number do this code
	{

			 big = a;
			 small = b;


			do
					{
						remainder = big % small;
						big=small;
						small = remainder;
					}while (remainder != 0); //do while or while loop to go while the remainder is not equal to zero

comdiv=big;
	}



	else if (a == b)          // if the first number is larger do this code
	{
		comdiv= a;
	}


	else
	{
		small= a;
		big=b;

		do
		{
		remainder= big % small;
		big= small;
		small=remainder;

		}while(remainder !=0);

		comdiv= big;  // in the do while loop we have made the last "small" to be called big so we have to say the comdiv=big
	}

return comdiv;


}

