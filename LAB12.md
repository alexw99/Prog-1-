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
void getinput(int &num1,int &den1,int &num2, int &den2);
int greatestCommonDivisor(int den1, int den2);
void add(int &num1, int &den1,int &num2, int &den2, int &denanswer,int &newnumanswer);
void subtract(int &num1, int &den1,int &num2, int &den2, int &denanswer,int &newnumanswer);
void multiply(int &num1, int &den1, int &num2, int &den2, int &denanswer,int &newnumanswer);
void divide(int &num1, int &den1, int &num2, int &den2, int &denanswer,int &newnumanswer);
void output(int &num1, int &den1,int &num2, int &den2, char sign,int &newnumanswer,int &reducednumerator,int &denanswer, int &reduceddenom);
//maybe make a reduce fraction function?

/** MAIN FUNCTION ***************************************************/
int main()
{
	/** VARIABLE DECLARATION ****************************************/
char option2;
int num1, den1, num2, den2, option, denanswer, newnumanswer;


	/** FUNCTION CALLS***********************************************/
do
{
	 getinput(num1, den1, num2, den2);

		cout <<"Menu of Operations \nAdd...................1 \nSubtract..............2 \nMultiply..............3 \nDivide................4\n";
		cout <<"Which operation? ";
		cin >> option;
		cout <<endl;


	switch (option)
	{
	case 1:

		 add(num1, den1, num2, den2, denanswer, newnumanswer);
		 break;
	case 2:
		 subtract( num1,  den1, num2,  den2,  denanswer, newnumanswer);
		 break;
	case 3:

		 multiply(num1, den1, num2, den2, denanswer, newnumanswer);
		 break;
	case 4:

		 divide(num1, den1, num2, den2, denanswer, newnumanswer);
		 break;
	}
		cout << "Another problem (y for yes, n for no)? ";
		cin >> option2;

} while (option2 == 'y');

return 0;
}





/** FUNCTIONS *******************************************************/
void getinput(int &num1,int &den1,int &num2, int &den2)  // getting the fraction inputs form the user
{
	do
	{
	cout <<"Enter the numerator and denominator of the first fraction: ";
	cin >> num1 >> den1;
	cout <<"Enter the numerator and denominator of the second fraction: ";
	cin >> num2 >> den2 ;
	cout <<endl;

	if (den2 == 0 ||den1 ==0)
	{
		cout<< "Fractions cannot have a denominator of zero"<< endl;
		cout << "Please enter valid input" <<endl <<endl;
	}

	}while (den2 == 0 ||den1 ==0);

}

void add(int &num1, int &den1,int &num2, int &den2, int &denanswer,int &newnumanswer) // addition function
{
char sign;
	int step1 = 0, newN1 = 0, step2 = 0, newN2 = 0,  gcf = 0, reducednumerator = 0, reduceddenom = 0;
							// calculate LCM for denominator

	gcf= greatestCommonDivisor( den1, den2);
	denanswer = (den1*den2) / gcf; //calculate the LCM multiply the denominators by each other and divide by the GCD

	step1 = den2/gcf;
	newN1= step1*num1; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
	step2= den1/gcf;
	newN2= step2*num2; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
	newnumanswer= newN1+newN2;


					//simplify fraction
	gcf= greatestCommonDivisor( newnumanswer, denanswer); //need the GCM of the LCM and newN3 in order to see if we can simplify the fraction


	if ( gcf > 1)  //put in  simplest form so see is numerator goes into denominator (LCM)
	 {
		reducednumerator =newnumanswer/gcf;
		reduceddenom = denanswer/gcf;
	 }

	 else
	 {
		 reducednumerator=newnumanswer;
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

void subtract(int &num1, int &den1,int &num2, int &den2, int &denanswer,int &newnumanswer) // addition function
{
char sign;
	int step1 = 0, newN1 = 0, step2 = 0, newN2 = 0,  gcf = 0, reducednumerator = 0, reduceddenom = 0;
							// calculate LCM for denominator

	gcf= greatestCommonDivisor( den1, den2);
	denanswer = (den1*den2) / gcf; //calculate the LCM multiply the denominators by each other and divide by the GCD

	step1 = den2/gcf;
	newN1= step1*num1; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
	step2= den1/gcf;
	newN2= step2*num2; //multiplying numerator by same thing as denominator was multiplied by so fraction maintains its value
	newnumanswer= newN1-newN2;


					//simplify fraction
	gcf= greatestCommonDivisor( newnumanswer, denanswer); //need the GCM of the LCM and newN3 in order to see if we can simplify the fraction


	if ( gcf > 1)  //put in  simplest form so see is numerator goes into denominator (LCM)
	 {
		reducednumerator =newnumanswer/gcf;
		reduceddenom = denanswer/gcf;
	 }

	 else
	 {
		 reducednumerator=newnumanswer;
		 reduceddenom=denanswer;
	 }
	sign = '-';
	 output( num1,  den1, num2,  den2,  sign, newnumanswer, reducednumerator, denanswer,  reduceddenom);
}

void multiply(int &num1, int &den1, int &num2, int &den2, int &denanswer,int &newnumanswer)//multiplication function
{
	char sign;
	int  gcf = 0;
	int reducednumerator = 0, reduceddenom = 0; //these are the variables used in the output function

	newnumanswer = num1* num2;	// mulitply the top of the fration
	denanswer = den1*den2;	//mutlitply the bottom of the fraction

	gcf= greatestCommonDivisor(newnumanswer ,denanswer ); // reduce fraction
			 if ( gcf > 1)  //put in  simplest form so see is numerator goes into denominator
			 {

		reducednumerator =newnumanswer/gcf;
		reduceddenom = denanswer/gcf;

			 }
			 else{
				 reducednumerator =newnumanswer;
				 reduceddenom = denanswer;
			 }
			 sign= '*';
			 output( num1,  den1, num2,  den2,  sign, newnumanswer, reducednumerator, denanswer,  reduceddenom);
}

void divide(int &num1, int &den1, int &num2, int &den2, int &denanswer,int &newnumanswer)// division function
{
	char sign;
	int  reducednumerator = 0,  reduceddenom = 0, gcf; // these are the variables called in the output function
	if (num2==0)
	{
		cout<< "You cannot a zero in the numerator because when you flip the second fraction you will get a numerator in the denanswer!"<<endl <<endl;
		return; // returning to main function to get valid input by running input and menu again
	}
	num2=den2;// flip second fraction
	den2=num2;

	newnumanswer = num1*den2;// multiply top
	denanswer = den1*num2;// multiply bottom

	gcf= greatestCommonDivisor(newnumanswer ,denanswer ); // reduce fraction
				 if ( newnumanswer > 1)  //put in  simplest form so see is numerator goes into denanswer
				 {

			reducednumerator =newnumanswer/denanswer;
			reduceddenom = denanswer/newnumanswer;

				 }
				 sign='/';
				  output( num1,  den1, num2,  den2,  sign, newnumanswer, reducednumerator, denanswer,  reduceddenom);
}

void output(int &num1, int &den1,int &num2, int &den2, char sign,int &newnumanswer,int &reducednumerator,int &denanswer, int &reduceddenom)
{


	cout <<" " << num1<< "        " << num2 << "       " << newnumanswer << "           " << reducednumerator << endl;

	//need to make this work for add subtract or multiply or divide so create a char variable with those symbols

		cout << "---  " << sign << "  ---  =  ---  =  ---  =  ---" << endl;


		cout << " " <<den1 << "        " << den2 << "         " << denanswer << "          "<< reduceddenom << endl;

}
