#include <iostream>
#include <string>
#include "Include.h"
#include <fstream>

bool checkpassfile() {

	std::fstream fileToCheckAndDelete("password.txt", std::fstream::in);
	return fileToCheckAndDelete.good();

}

void ChangePassword(std::string newpassword) {

	std::ofstream changepass("password.txt", std::ios::trunc);

	changepass << newpassword;

	changepass.close();

}