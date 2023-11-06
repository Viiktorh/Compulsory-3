#pragma once
using namespace std;


int intInput = 0;
///<summary>
///This function checks if the cinput is an integer, clears the cinput and asks to retype it if not an integer.
///Using this means you will use validateInput(); and intInput as your integer to check for valid input. 
///This approach needs of the limits library.
///</summary>
void validateIntInput() {
	cin >> intInput;
	while (!cin.good()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Enter a valid number.";
		cin >> intInput;
	}
}