/*
*module_2.cpp
* Created by:bob
*May 12, 2024
*/
#include <iostream>
#include <string>

int main()
{
	std::string first, second;

	for (int i = 0; i < 3; i++) {
		std::cout <<"Please enter the first string: ";
		std::cin >> first;
		std::cout << "Please enter the second string: ";
		std::cin >> second;
		std::cout << "The concatenated strings are: " << first + second << "\n\n";

	}

return 0;
}
