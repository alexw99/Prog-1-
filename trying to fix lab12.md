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
using namespace std;

/** FUNCTION PROTOTYPES**********************************************/
void getinput(int &numnerator1,int &denom1,int &num2, int &denom2);
int greatestCommonDivisor(int den1, int den2);
void add(int num1, int den1,int num2, int den2);
void subtract(int num1, int den1,int num2, int den2);
void multiply(int N, int D, int n, int d);
void divide(int N1, int D1, int n2, int d2);
void output(int num1, int den1,int num2, int den2, char sign,int nenumanswer,int reducednumerator,int denanswer, int reduceddenom);
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

		cout <<"Menu of Operations \nAdd...................1 \nSubtract..............2 \nMultiply..............3 \nDivide................4";
		cout<< "Which operation? ";
		cin >> option;
cout<< endl;

	switch (option)
	{
	case 1:

		 add(num1, den1, num2, den2);
		 break;
	case 2:

		 subtract( num1,  den1, num2,  den2);
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

