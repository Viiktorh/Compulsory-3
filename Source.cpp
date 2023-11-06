#include <iostream>
#include "Files.h"
#include "Folders.h"
#include "Header.h"

using namespace std;
string name;
int main() {
	Folder mainFolder("Main");
	bool running = true;
	int n = 0;
	int test = 0;

	while (running != false){
		mainFolder.displayProgram();
		cout << "\nWhat would you like to do? \n1. Create a new file. \n2. Create a subfolder. \n3. Get largest File. \n4. Quit the program\n";
		validateIntInput();
		n = intInput;
		while (n <= 0 || n > 4) {
			cout << "Choose a valid number";
			validateIntInput();
			n = intInput;
		}
		n = intInput;
		switch (n){
		case 1:
			cout << "decide the name of the file:";
			cin >> name;
			mainFolder.createFile(name);
			break;
		case 2:
			cout << "Decide the name of the new subfolder.";
			cin >> name;
			mainFolder.createSubFolder(name);
			break;
		case 3:
			mainFolder.getLargestFile().printLargest();
			break;
		case 4:
			running = false;
			break;
		}

	}
	
}

// Folder:
// Name, Size, Date of Creation
// Contains maximum 10 Files and 5 Folders
// File:
// Name, Size, Date of Creation
// Program:
// Needs a way to create a Folder or File. With a random size with max 100 MB and minimum of 0 MB.
// Print the information of the Files and Folders (Name, Size, Date of Creation).
// Specify the name of a Folder and Print the information of the largest File (Name, Size, Date of Creation).
// Change the names of folders and files.
//
