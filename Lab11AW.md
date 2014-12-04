//============================================================================
// Name        : Lab11AW.cpp    //bLOCK: H
// Author      : ALexandra Wolf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/** INCLUDE FILES ***************************************************/

#include <iostream>	//	input output commands:	cout & cin
#include <iomanip> // rounds to two decomal places
using namespace std;

// this is where you declare the functions that you are going to use in the program
/** FUNCTION PROTOTYPES**********************************************/ //the & carries the variables  through all the functions
void getinput(int &length, int &width, int &height, int &doors, int &windows);
double process(int length, int width, int height, int doors, int windows);
void output(double gallonR);

/** MAIN FUNCTION ***************************************************/
int main()
{
	/** VARIABLE DECLARATION ****************************************/

	int gallonsT_rounded, doors, windows,length, width, height ;
	double gallonR, gallonT=0;
	char option;

	/** FUNCTION CALLS***********************************************/

do
{

		getinput(length, width, height, doors, windows);
		gallonR=  process(length, width, height, doors, windows);


		output(gallonR);
		gallonT= gallonR + gallonT;




	 	 cout <<"Another room (y/n)? "; // I need to write something that will call th output of on the gallons total neded as a double and what they are rounded
	 	 cin >> option;

} while (option =='y');


	cout <<endl <<"All the rooms combined will take " << gallonT << " gallons of paint."<< endl << endl;

		gallonsT_rounded = (int) gallonT +1;                        // calculating the number of containers
	cout << gallonsT_rounded  << " gallon-containers of paint will be required."<< endl;  //output number of containers

   return 0;
}



/** FUNCTIONS *******************************************************/
void getinput(int &length, int &width, int &height, int &doors, int &windows)
{
	cout <<endl << "Enter dimensions (length width height): ";
	cin >> length >> width >> height;

	cout << "Enter number of windows and doors: ";
	cin >> windows >> doors;



}

double process(int length, int width, int height, int doors, int windows) //have double at the front of this because the thing we are returning is a double
{
	int SA;
	double gallonsR;

	  	  SA = ((length*height*2) + (width*height*2)) - ((15*windows) + (21*doors)); //surface area needed - spaces where there are doors and windows
	  	  gallonsR = SA/400.0;     //use conversion given in lab to estimate that one-gallon of paint covers 400 square feet of surface
// make 400 400.0 so that it becomes a double and the computer doesn't have store it as interger or say doubel before hand
return gallonsR;

}

void output(double gallonR)
{

	cout << setiosflags(ios_base::fixed)      // do not use E notation
	     << setiosflags(ios_base::showpoint)  // always show decimal point
	     << setprecision(2);              	 // rounded to 2 decimal places

	cout << "That room will take "<< gallonR << " gallons of paint." << endl << endl;


}
