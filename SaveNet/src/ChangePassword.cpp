#include <iostream>
#include <string>
#include "Include.h"
#include "Password.h"
#include <fstream>

bool checkpassfile() {

	std::fstream fileToCheckAndDelete("password.txt", std::fstream::in);
	return fileToCheckAndDelete.good();

}

void ChangePassword(std::string newpassword) {

	std::remove("password.txt");
	std::remove("pass.txt");

	std::ofstream changepass("password.txt", std::ios::trunc);

	changepass << newpassword;

	changepass.close();

	SetFileAttributesA("password.txt", FILE_ATTRIBUTE_HIDDEN);

	EncryptPassword();

}