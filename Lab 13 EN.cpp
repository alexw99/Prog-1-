//============================================================================
// Name: Emily Nadler
// Class block: B 				Date: 9/26/14
// Lab: 13
// Title: Lab 13 EN
// Objective:
//============================================================================

//FOR EXAMPLE AND ANSWER KEY PURPOSES ONLY!!!!!!!

/** INCLUDE FILES ***************************************************/

#include <iostream>	//	input output commands:	cout & cin
using namespace std;

/** FUNCTION PROTOTYPES**********************************************/
void getinput(int &row, int &pattern);
void pat1(int row);
void pat2(int row);
void pat3(int row);
void finalpat(int row);


/** MAIN FUNCTION ***************************************************/
int main()
{
	/** VARIABLE DECLARATION ****************************************/
	int row, pattern;




	/** FUNCTION CALLS***********************************************/

	getinput(row, pattern);

	switch (pattern)
	{
	case 1:
		pat1(row);
		break;
	case 2:
		pat2(row);
		break;
	case 3:
		pat3(row);
		break;
	case 4:
		finalpat(row);
		break;
	}


   return 0;
}

/** FUNCTIONS *******************************************************/

void getinput(int &row, int &pattern)
{
	cout << "How many rows would you like? ";
	cin >> row;
	cout << "Which pattern would you like? (1, 2, 3, or 4) ";
	cin >> pattern;
}


void pat1(int row)
{
	int col, col2;
	cout << endl;
	for(col = 0; col < row; col++)
	{
		for(col2 = row - col; col2 > 0; col2--)
			cout << "*";
	cout << endl;
	}

}


void pat2(int row)
{
	int col, col2, col3;
	cout << endl;
	for(col = 0; col < row; col++)
		{
			for(col2 = row - col; col2 > 0; col2--)
				cout << " ";

			for(col3 = col; col3 >= 0; col3--)
				cout << "*";
		cout << endl;
		}


}

void pat3(int row)
{
	int col, col2, col3, col4;
	cout << endl;
	for(col = 0; col < row; col++)
		{
			for(col2 = row - col; col2 > 0; col2--)
				cout << " ";

			for(col3 = col; col3 >= 0; col3--)
				cout << "*";

			for(col4 = col; col4 > 0; col4--)
				cout << "*";
		cout << endl;
		}

}

void finalpat(int row)
{
	cout << "Not done yet.. ";
}


