/*
*csc450_ct1_mod1-3.cpp
* Created by:bob
*May 19, 2024
*/
#include <iostream>


int main()
{
	int *one = new int; //Allocating memory for an integer
	int *two = new int;
	int *three = new int;


	std::cout << "Please enter an integer: ";
	std::cin >> *one;
	std::cout << "Please enter second integer: ";
	std::cin >> *two;
	std::cout << "Please enter third integer: ";
	std::cin >> *three;


	std::cout << "Address of first integer: " << one << std::endl;
	std::cout << "Value of first integer: " << *one << std::endl;
	std::cout << "Address of second integer: " << two << std::endl;
	std::cout << "Value of second integer: " << *two << std::endl;
	std::cout << "Address of third integer: " << three << std::endl;
	std::cout << "Value of third integer: " << *three << std::endl;

	delete one; //Delete Pointer
	one = nullptr; //Set pointer to null
	delete two;
	two = nullptr;
	delete three;
	three = nullptr;

	std::cout << "Memory addresses have bee cleared.";

return 0;
}
