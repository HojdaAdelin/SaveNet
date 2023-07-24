#include <iostream>
#include <string>
#include "Include.h"
#include <fstream>

bool checkpassfile() {

	std::fstream fileToCheckAndDelete("password.txt", std::fstream::in);
	return fileToCheckAndDelete.good();

}

void ChangePassword(std::string newpassword) {

	ClearFileContent("password.txt");


	std::ofstream writepassword("password.txt");

	writepassword << newpassword;

	writepassword.close();

}