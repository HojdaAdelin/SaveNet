#include <iostream>
#include <string>
#include "Include.h"
#include "Password.h"
#include <fstream>

void BackUpPassword() {

	std::string getpass;

	DecryptPassword();

	std::ifstream readpass("password.txt");

	readpass >> getpass;

	readpass.close();

	EncryptPassword();

	std::ofstream writebackup("passbackup.txt");

	writebackup << getpass;

	writebackup.close();

	MessageBox::Show("Backup created!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);


}