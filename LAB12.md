/** COMMENTS ********************************************************/
/*	Your name: Alexandra Wolf
	Class block: 	H			Date:
	Lab:
	Title: Lab 12
	Objective:
*/

/** INCLUDE FILES ***************************************************/

#include <iostream>	//	input output commands:	cout & cin
#include <iomanip>
#include <cmath>
using namespace std;

/** FUNCTION PROTOTYPES**********************************************/
void getinput( int &numerator1, int &denom1, &num2, int &denom2,  );
int greatestCommonDivisor(int den1, int den2)
void add(int num1, int den1,int num2, int den2, int &comdiv);
void subtract();
void multiply();
void divide();

/** MAIN FUNCTION ***************************************************/
int main()
{
	/** VARIABLE DECLARATION ****************************************/
char option2, option;


	/** FUNCTION CALLS***********************************************/
do
{
 void getinput(numerator1, denom1, num2. denom2 )

		cout <<"Menu of Operations \nAdd...................1 \nSubtract..............2 \nMultiply..............3 \nDivide................4";
		cin >> option;

		cout << "Another problem (y for yes, n for no)? ";
cin >> option2;

} while (option2 = 'y')
}


   return 0;
}

/** FUNCTIONS *******************************************************/
void getinput( int &numnerator1, int &denom1, int &num2, int denom2, int &comdiv )  // getting the fraction inputs form the user
{
	cout <<"Enter the numerator and denominator of the first fraction: ";
	cin >> numnerator1 >> denom1;
	cout <<"Enter the numerator and denominator of the second fraction: ";
	cin >> num2 >> denom2 ;


}

void add(int num1, int den1,int num2, int den2, int &comdiv) // addition function
{
}

int greatestCommonDivisor(int den1, int den2) // we need this function to reduce fractions to simplest form
	{

	int remainder, small, big, comdiv;

		if(den1 > den2) //if first number is the larger number do this code
		{

				 big = den1;
				 small = den2;

		}



		else if (den1 == den2)          //if numbers are the same the common divisor is the same  number
		{
			comdiv= den1;
		}


		else //do this code if the second number is the larger number
		{
			small= den1;
			big=den2;


		}
		do
								{
									remainder = big % small;
									big=small;
									small = remainder;
								}while (remainder != 0); //do while or while loop to go while the remainder is not equal to zero
		comdiv=big;
		return comdiv;
	}

//subtraction function
//multiplication function
// division function

