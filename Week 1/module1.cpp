/*
*module1.cpp
* Created by:bob
*Apr 13, 2024
*/
#include "header.h"


int main()
{
	//Program lacks error checking

	string fName, lName, address, city, zip, state; //String variables for user input

	cout << "Please enter your first name: "; //Print prompt to console
	cin >> fName;							  //Get user input
	cout << "Please enter your last name: ";
	cin >> lName;
	cout << "Please enter your street address: ";
	cin.ignore(); //Ignore line so that the address can be parsed
	getline(cin, address); //Capture entire line of user input (get spaces)
	cout << "Please enter your city: \n";
	cin >> city;
	cout << "Please enter your Zip code: \n";
	cin >> zip;

	cout << "The entered information is: \n" << fName << " " << lName << endl << address << endl << city << ", ";

	ZipFunc(&zip); //Call function to lookup state using the Zip code

	cout << " " << zip;


return 0;
}
