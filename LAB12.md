/** COMMENTS ********************************************************/
/*	Your name: Alexandra Wolf
	Class block: 	H			Date:
	Lab:
	Title: Lab 12
	Objective:  //THE PROBLEM IS THAT WE NEED TO IONS THEN ADD AN ANSWER NUMERATOR AND DENOMINATOR VARIABLE
*/

/** INCLUDE FILES ***************************************************/

#include <iostream>	//	input output commands:	cout & cin
#include <iomanip>
#include <cmath>
using namespace std;

/** FUNCTION PROTOTYPES**********************************************/
void getinput(int &numnerator1,int &denom1,int &num2, int &denom2);
int greatestCommonDivisor(int den1, int den2);
void add(int num1, int den1,int num2, int den2);
void subtract(int num1, int den1,int num2, int den2);
void multiply(int N, int D, int n, int d);
void divide(int N1, int D1, int n2, int d2);
void output(int num1, int den1,int num2, int den2, char sign,int newnumanswer,int reducednumerator,int denanswer, int reduceddenom);
//maybe make a reduce fraction function?

/** MAIN FUNCTION ***************************************************/
int main()
{
	/** VARIABLE DECLARATION ****************************************/
char option2;
int num1, den1, num2, den2, option;


	/** FUNCTION CALLS***********************************************/
do
{
	 getinput(num1, den1, num2, den2);

		cout <<"Menu of Operations \nAdd...................1 \nSubtract..............2 \nMultiply..............3 \nDivide................4\n";
		cout <<"Which operation?";
		cin >> option;
		cout <<endl;


	switch (option)
	{
	case 1:

		 add(num1, den1, num2, den2);
		 break;
	case 2:

		 subtract(num1,  den1, num2,  den2);
		 break;
	case 3:

		 multiply(num1, den1, num2, den2);
		 break;
	case 4:

		 divide(num1, den1, num2, den2);
		 break;
	}
		cout << "Another problem (y for yes, n for no)? ";
		cin >> option2;

} while (option2 == 'y');

return 0;
}





/** FUNCTIONS *******************************************************/
void getinput(int &numnerator1,int &denom1,int &num2, int &denom2)  // getting the fraction inputs form the user
{
	do
	{
	cout <<"Enter the numerator and denominator of the first fraction: ";
	cin >> numnerator1 >> denom1;
	cout <<"Enter the numerator and denominator of the second fraction: ";
	cin >> num2 >> denom2 ;

	if (denom2 == 0 ||denom1 ==0)
		cout<< "Fractions cannot have a denominator of zero"<< endl;
	cout << "Please enter valid input" <<endl <<endl;

	}while (denom2 == 0 ||denom1 ==0);

}

void add(int num1, int den1,int num2, int den2) // addition function
{
char sign;
	int LCM = 0, step1 = 0, newN1 = 0, step2 = 0, newN2 = 0, numanswer = 0, gcf = 0, reducednumerator = 0, reduceddenom = 0, denanswer = 0, newnumanswer = 0;
							// calculate LCM for denominator

	gcf= greatestCommonDivisor( den1, den2);
	LCM = (den1*den2) / gcf; //calculate the LCM multiply the denominators by each other and divide by the GCD
	step1 = LCM/den2;
	newN1= step1*num1; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
	step2= LCM/den1;
	newN2= step2*num2; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
	numanswer= newN1+newN2;

					//simplify fraction
	gcf= greatestCommonDivisor( numanswer, LCM); //need the GCM of the LCM and newN3 in order to see if we can simplify the fraction
	if ( gcf > 1)  //put in  simplest form so see is numerator goes into denominator (LCM)
	 {
		reducednumerator =numanswer/gcf;
		reduceddenom = LCM/gcf;
	 }

	 else
	 {
		 reducednumerator=numanswer;
		 reduceddenom=denanswer;
	 }
	sign = '+';
	 output( num1,  den1, num2,  den2,  sign, newnumanswer, reducednumerator, denanswer,  reduceddenom);
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
			return den1;
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
char sign;
	int LCM = 0, step1 = 0, newN1 = 0, step3 = 0, newN2 = 0, newN3 = 0, gcf = 0, reducednumerator = 0, reduceddenom = 0, newnumanswer = 0, denanswer = 0;
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
		 if ( gcf > 1)  //put in  simplest form so see is numerator goes into denominator (LCM)
		 {

	reducednumerator =newN3/gcf;
	reduceddenom = LCM/gcf;
		 }
		 sign= '-';
		 output( num1,  den1, num2,  den2,  sign, newnumanswer, reducednumerator, denanswer,  reduceddenom);
}

void multiply(int N, int D, int n, int d)//multiplication function
{
	char sign;
int numerator = 0, denominator = 0, gcf = 0;
int num1 = 0,  den1 = 0, num2 = 0,  den2 = 0, newnumanswer = 0, reducednumerator = 0, denanswer = 0, reduceddenom = 0; //these are the variables used in the output function

	numerator = N* n;	// mulitply the top of the fration
	denominator = D*d;	//mutlitply the bottom of the fraction

	gcf= greatestCommonDivisor(numerator ,denominator ); // reduce fraction
			 if ( numerator > 1)  //put in  simplest form so see is numerator goes into denominator
			 {

		reducednumerator =numerator/denominator;
		reduceddenom = denominator/numerator;

			 }
			 sign= '*';
			 output( num1,  den1, num2,  den2,  sign, newnumanswer, reducednumerator, denanswer,  reduceddenom);
}

void divide(int N1, int D1, int n2, int d2)// division function
{
	char sign;
	int numerator, denominator, gcf;
	int  num1 = 0,  den1 = 0, num2 = 0,  den2 = 0, newnumanswer = 0, reducednumerator = 0, denanswer = 0,  reduceddenom = 0; // these are the variables called in the output function
	if (n2==0)
	{
		cout<< "You cannot a zero in the numerator because when you flip the second fraction you will get a numerator in the denominator!"<<endl <<endl;
		return; // returnign to main function to get valid input by running input and menu again
	}
	n2=d2;// flip second fraction
	d2=n2;

	numerator = N1*d2;// multiply top
	denominator = D1*n2;// multiply bottom

	gcf= greatestCommonDivisor(numerator ,denominator ); // reduce fraction
				 if ( numerator > 1)  //put in  simplest form so see is numerator goes into denominator
				 {

			reducednumerator =numerator/denominator;
			reduceddenom = denominator/numerator;

				 }
				 sign='/';
				  output( num1,  den1, num2,  den2,  sign, newnumanswer, reducednumerator, denanswer,  reduceddenom);
}

void output(int num1, int den1,int num2, int den2, char sign,int newnumanswer,int reducednumerator,int denanswer, int reduceddenom)
{


	cout <<" " << num1<< "         " << num2 << "         " << newnumanswer << "         " << reducednumerator << endl;

	//need to make this work for add subtract or multiply or divide so create a chaar variable with those symbols

		cout << "---  " << sign << "  ---  =  ---  =  ---" << endl;


		cout << " " <<den1 << "         " << den2 << "         " << denanswer << "         "<< reduceddenom << endl;

}
