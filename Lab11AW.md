//============================================================================
// Name        : Lab11AW.cpp    //bLOCK: H
// Author      : ALexandra WOlf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/** INCLUDE FILES ***************************************************/

#include <iostream>	//	input output commands:	cout & cin
#include <cmath.h> //math functions like square root
using namespace std;

// this is where you declare the functions that you are going to use in the program
/** FUNCTION PROTOTYPES**********************************************/ //the & carries the variables  through all the functions
void getinput(double &length, double &width, double &height, int &doors, int &windows, char &option);
double process(int &length, int &width, int &height, int &doors, int &windows, double &gallonR, double &gallonT, int &SA);
void output(double &gallonR, double &gallonT, int &SA); //MAY HAVE TO ADD MORE VARIABLES DEPENDING ON WHAT I END UP DOING IN THIS FUNCTION

/** MAIN FUNCTION ***************************************************/
int main()
{
	/** VARIABLE DECLARATION ****************************************/

	int doors, windows, SA, containers;
	double gallonsR, gallonsT, length, width, heights;
	char option;

	/** FUNCTION CALLS***********************************************/
do
{
	void getinput( length, width, height, doors,windows, option)
	gallonsR= double process(length, width, height, doors, windows, gallonR, gallonT,SA);
	void output(gallonR, gallonT, SA)

	gallonsT=          ;

	cout <<"Another room (y/n)? "<< endl << endl;
}(while option=='y');

	gallonsT= double process(length, width, height, doors, windows);// not sure if this is right need to save the gallonsR for each room and then add them up to get gallonsT

cout <<"All the rooms combined will take " << gallonsT << "gallons of paint."<, endl << endl;
cout << containers  << "gallon-containers of paint will be required."<< endl;

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

double process(int &length, int &width, int &height, int &doors, int &windows) //have double at the front of this because the thing we are returning is a double
{
	int SA;
	double gallonsR; //not sure if I need this here

      SA = ((length*height*2) + (width*height*2)) - ((15*window) + (21*door)); //surface area needed - spaces where there are doors and windows
      gallonsR = SA/400; //use conversion given in lab you estimate that one-gallon of paint covers 400 square feet of surface



}
