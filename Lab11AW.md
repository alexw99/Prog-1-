//============================================================================
// Name        : Lab11AW.cpp    //bLOCK: H
// Author      : ALexandra WOlf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/** INCLUDE FILES ***************************************************/

#include <iostream>	//	input output commands:	cout & cin
using namespace std;

// this is where you declare the functions that you are going to use in the program
/** FUNCTION PROTOTYPES**********************************************/ //the & carries the variables (keeping them the same) through all the functions
void getinput(double &length, double &width, double &height, int &doors, int &windows, char &option);
double process(double &length, double &width, double &height, int &doors, int &windows, double &gallonR, double &gallonT, int &SA);
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


	cout <<"Another room (y/n)? "<< endl << endl;
}(while option=='y');

cout <<"All the rooms combined will take " << gallonsT << "gallons of paint."<, endl << endl;
cout << containers  << "gallon-containers of paint will be required."<< endl;

   return 0;
}

/** FUNCTIONS *******************************************************/
void getinput(double &length, double &width, double &height, int &doors, int &windows)
{
	cout << "Enter dimensions (length width height): "<<endl;
	cin >> length >> width >> height;

	cout << "Enter number of windows and doors: " << endl;
	cin >> windows >> doors;



}

double process(double &length, double &width, double &height, int &doors, int &windows) //have double at the front of this because the thing we are returning is a double
{
	double SA, gallonsR; //not sur eif I need this here

      SA = (length*height*2) + (width*height*2)) - ((15*window) + (21*door)); //surface area needed - spaces where there are doors and windows
      gallonsR = SA/400;
  	//use conversion given in lab you estimate that one-gallon of paint covers 400 square feet of surface



// gallons per room and gallons total
      //MRS HAUPT SIAD THAT THE THIGNS with GALLONS R ADN GALLONST NEED TO BE IN THE MAIN FUNCTION
}