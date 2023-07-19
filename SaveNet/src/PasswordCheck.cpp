#include "Password.h"
#include <iostream>
#include <fstream>
#include <string>

bool PasswordConfirm(std::string pass) {

	DecryptPassword();

	std::string user_pass;

	std::ifstream readpassword("password.txt");

	readpassword >> user_pass;

	readpassword.close();

	EncryptPassword();

	if (user_pass == pass) {

		return true;

	}
	else {

		return false;

	}

}