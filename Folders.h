#pragma once
#include <iostream>
#include "Files.h"

using namespace std;

const int MAX_FILES = 10;
const int MAX_FOLDERS = 5;

class Folder {
private:
	int size;
	int date;
	File files[MAX_FILES];
	Folder* subFolders[MAX_FOLDERS];



public:
	string name;
	int fileCount = 0;
	int folderCount = 0;

	Folder(string newName, int newSize, int newDate, File fileCount[MAX_FILES], Folder* subFolders[MAX_FOLDERS]) {
		Folder::name = newName;
		Folder::size = newSize = rand() % 100;
		Folder::date = newDate;
		Folder::files;
		for (int i = 0; i < MAX_FOLDERS; ++i) {
			subFolders[i] = nullptr;
		}
	}
	Folder(string newName, int newSize, int newDate) {
		Folder::name = newName;
		Folder::size = newSize = rand() % 100;
		Folder::date = newDate;
		Folder::files;
		for (int i = 0; i < MAX_FOLDERS; ++i) {
			subFolders[i] = nullptr;
		}
	}
	Folder(string newName){
		Folder::name = newName;
		Folder::size = rand() % 100;
		Folder::date = rand() % 31;
		Folder::files;
		for (int i = 0; i < MAX_FOLDERS; ++i) {
			subFolders[i] = nullptr;
		}
	}
	Folder() {
		Folder::name = "defaultConstructorFolderName ";
		Folder::size = rand() % 100;
		Folder::date = rand() % 31;
		Folder::files;
		for (int i = 0; i < MAX_FOLDERS; ++i) {
			subFolders[i] = nullptr;
		}
	}
	void displayProgram() {
		cout << "Folder: " << name << "\nFiles:" << "\n";
		for (int i = 0; i < fileCount; i++) {
			files[i].printInfo();
		}
		cout << "\nSubfolders:" << "\n";
		for (int i = 0; i < folderCount; i++) {
			if (subFolders[i] != nullptr) {
				cout << subFolders[i]->name << "\n";
			}
		}
	}
	//When called with a string variable, Creates a new folder with the name of the string and adds it to the list.
	void createSubFolder(string& name) {
		if (folderCount < MAX_FOLDERS) {
			subFolders[folderCount++] = new Folder(name);
			system("cls");
		}
		else {
			system("cls");
			cout << "Max number of subfolders reached in this folder.\n";
		}
	}

	void createFile(string name) {
		if (fileCount < MAX_FILES) {
			files[fileCount++] = File(name);
			system("cls");
			cout << "File \"" << name << "\" has been added.\n";
		}
		else {
			system("cls");
			cout << "Cannot add any more Files to this Folder";
		}
	}

	//Goes through every file in folder and returns the one with the highest "filesize"
	File getLargestFile() {
		if (fileCount == 0) {
			system("cls");
			cout << "No files in this folder.\n";
			return File("");
		}

		File largestFile = files[0];
		for (int i = 1; i < fileCount; ++i) {
			if (files[i].size > largestFile.size) {
				largestFile = files[i];
			}
		}
		system("cls");
		return largestFile;
	}
	//returns fileCount
	int getFileCount() {
		return fileCount;
	}
	//gets the current count of folders
	int getFolderCount() {
		return folderCount;
	}
	//Returns Folder Name
	string getName() {
		//cout << name << "\n";
		return name;
	}
	//Returns Folder Size
	int getSize() {
		return size;
	}
	//Returns Folder Date of Creation
	int getDate() {
		return date;
	}
	//Sets new name of Folder.
	void setName() {
		cout << "Set new Folder name: \n";
		cin >> name;
	}


};
