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
void getinput( int &numnerator1, int &denom1, int &num2, int &denom2 );
int greatestCommonDivisor(int den1, int den2);
void add(int num1, int den1,int num2, int den2);
void subtract(int num1, int den1,int num2, int den2);
void multiply(int N, int D, int n, int d);
void divide(int N1, int D1, int n2, int d2);
//maybe make a reduce fraction function?

/** MAIN FUNCTION ***************************************************/
int main()
{
	/** VARIABLE DECLARATION ****************************************/
char option2;
int numnerator1,  denom1,  num2, denom2, option, num1, den1, den2;


	/** FUNCTION CALLS***********************************************/
do
{
	 getinput( numnerator1,  denom1,  num2,  denom2 );

		cout <<"Menu of Operations \nAdd...................1 \nSubtract..............2 \nMultiply..............3 \nDivide................4";
		cin >> option;

	switch (option)
	{
	case 1:
		 add( num1,  den1, num2,  den2);
	}
		cout << "Another problem (y for yes, n for no)? ";
		cin >> option2;

} while (option2 == 'y');

return 0;
}





/** FUNCTIONS *******************************************************/
void getinput( int &numnerator1, int &denom1, int &num2, int &denom2 )  // getting the fraction inputs form the user
{
	cout <<"Enter the numerator and denominator of the first fraction: ";
	cin >> numnerator1 >> denom1;
	cout <<"Enter the numerator and denominator of the second fraction: ";
	cin >> num2 >> denom2 ;


}

void add(int num1, int den1,int num2, int den2) // addition function
{

	int LCM, step1, newN1, step3, newN2, newN3, gcf, reducednumerator, reduceddenom;
							// calculate LCM for denominator

	gcf= greatestCommonDivisor( den1, den2);
		LCM = (den1*den2) / gcf; //calculate the LCM multiply the denominators by each other and divide by the GCD
	step1 = LCM/den1;
	newN1= step1*num1; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
	step3= LCM/den2;
	newN2= step3*num2; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
	newN3= newN1+newN2;

					//simplify fraction
	gcf= greatestCommonDivisor( newN3, LCM); //need the GCM of the LCM and newN3 in order to see if we can simplify the fraction
	 if ( gcf > 1);  //put in  simplest form so see is numerator goes into denominator (LCM)
	 {

reducednumerator =newN3/gcf;
reduceddenom = LCM/gcf;

	 }

	cout <<" " << num1<< "         " << num2 << "         " << newN3 << "         " << reducednumerator;
	cout << "---  -  ---  =  ---  =  ---";
	cout << " " <<den1 << "         " << den2 << "         " << LCM << "         "<< reduceddenom;

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

void subtract(int num1, int den1,int num2, int den2) //subtraction function
{

	int LCM, step1, newN1, step3, newN2, newN3, gcf, reducednumerator, reduceddenom;
								// calculate LCM for denominator

		gcf= greatestCommonDivisor( den1, den2);
			LCM = (den1*den2) / gcf; //calculate the LCM multiply the denominators by each other and divide by the GCD
		step1 = LCM/den1;
		newN1= step1*num1; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
		step3= LCM/den2;
		newN2= step3*num2; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
		newN3= newN1-newN2;

						//simplify fraction
		gcf= greatestCommonDivisor( newN3, LCM); //need the GCM of the LCM and newN3 in order to see if we can simplify the fraction
		 if ( gcf > 1);  //put in  simplest form so see is numerator goes into denominator (LCM)
		 {

	reducednumerator =newN3/gcf;
	reduceddenom = LCM/gcf;
		 }

}

void multiply(int N, int D, int n, int d)//multiplication function
{
int numerator, denominator, gcf, reducednumerator, reduceddenom;

	numerator = N* n;	// mulitply the top of the fration
	denominator = D*d;	//mutlitply the bottom of the fraction

	gcf= greatestCommonDivisor(numerator ,denominator ); // reduce fraction
			 if ( numerator > 1);  //put in  simplest form so see is numerator goes into denominator
			 {

		reducednumerator =numerator/denominator;
		reduceddenom = denominator/numerator;

			 }
}

void divide(int N1, int D1, int n2, int d2)// division function
{
	int numerator, denominator, reducednumerator, reduceddenom, gcf;
	n2=d2;// flip second fraction
	d2=n2;

	numerator = N1*d2;// multiply top
	denominator = D1*n2;// multiply bottom

	gcf= greatestCommonDivisor(numerator ,denominator ); // reduce fraction
				 if ( numerator > 1);  //put in  simplest form so see is numerator goes into denominator
				 {

			reducednumerator =numerator/denominator;
			reduceddenom = denominator/numerator;

				 }

}
