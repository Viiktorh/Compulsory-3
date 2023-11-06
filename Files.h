#pragma once

using namespace std;

class File {

private:

public:
	string name;
	int size;
	time_t date;

	File(string newName, int newSize, time_t newDate) {
		File::name = newName;
		File::size = newSize = rand() % 100;
		date = time(0);
	}
	File(string newName) {
		File::name = newName;
		File::size = rand() % 100;
		date = time(0);
	}
	File() {
		File::name = "defaultConstructorFileNames ";
		File::size = rand() % 100;
		date = time(0);
	}

	//Prints the info of the file. Name, size and Date
	void printInfo() {
		cout << "File Name: " << name << "| Size: " << size << "MB |  Date of Creation: unixtimestamp:"<< date <<"/ year:" << (date / 31556926) + 1970 << "\n";
	}
	void printLargest() {
		cout << "The largest file is: " << name << " With size: " << size << "MB\n" << "-------------------------------------\n";
	}

	string getName() {
		return name;
	}
};