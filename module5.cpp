/*
*module5.cpp
* Created by:bob
*Jun 1, 2024
*/
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	fstream f;
	ifstream fin("CSC450_CT5_mod5.txt", ios::in);
	ofstream fout("CSC450-mod5-reverse.txt", ios::out);
	string entry;

	//Open the CSC450_CT5_mod5.txt file and append the user string (Using fstream
	f.open("CSC450_CT5_mod5.txt", ios::app); //open file to append the string
	if (!f)
		cout << "File not found";
	else {
		cout << "Please enter a string to append to the file: ";
		getline (cin, entry);
		f << entry; //Appending the string
		cout << "The string has been appended to the file. \n";
		f.close(); //Closing the file
	}

	//Opening CSC450_CT5_mod5.txt to read data and convert to string
	string text((istreambuf_iterator<char>(fin)), istreambuf_iterator<char>());
	    fin.close();

	//Reverse the text string
	reverse(text.begin(), text.end());

	//Writing the data to CSC450-mod5-reverse.txt
	fout << text;
	fout.close();

	cout << "The reversed data has been written to CSC450-mod5-reverse.txt";

return 0;
}
