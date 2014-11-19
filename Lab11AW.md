//============================================================================
// Name        : Lab11AW.cpp
// Author      : ALexandra WOlf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/** INCLUDE FILES ***************************************************/

#include <iostream>	//	input output commands:	cout & cin
using namespace std;

/** FUNCTION PROTOTYPES**********************************************/ //the & carries the variables (keeping them the same) through all the functions
void getinput(int &length, int &width, int &height, int &doors, int &windows, char &option); //we have to use voids because there are multiple pieces of data that we have to deal with
void process(int &length, int &width, int &height, int &doors, int &windows, int &gallonR, int &gallonT);
void output(int &gallonR, int &gallonT); //MAY HAVE TO ADD MORE VARIABLES DEPENDING ON WHAT I END UP DOING IN THIS FUNCTION

/** MAIN FUNCTION ***************************************************/
int main()
{
	/** VARIABLE DECLARATION ****************************************/

	int length, width, heights, doors, windows;
	double gallonsR, gallonsT;
	char option;

	/** FUNCTION CALLS***********************************************/

   return 0;
}

/** FUNCTIONS *******************************************************/
void getinput(int &length, int &width, int &height, int &doors, int &windows)
{
	cout << "Enter dimensions (length width height): "<<endl;
	cin >> length >> width >> height;

	cout << "Enter number of windows and doors: " << endl;
	cin >> windows >> doors;



}

void process(int &length, int &width, int &height, int &doors, int &windows, int &gallonR, int &gallonT)
{
//surface area needed - spaces where there are doors and windows
	//use conversion given in lab you estimate that one-gallon of paint covers 400 square feet of surface
// gallons per room and gallons total
}
