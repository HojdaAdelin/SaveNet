#include "Include.h"
#include <fstream>
#include <iostream>
#include <string>

void CreateUserFile(std::string filenameCU) {

	if (filenameCU == "password.txt") {

		MessageBox::Show("Error: Can't create password.txt!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;

	}
	else {

		std::ofstream createfile(filenameCU);

		createfile << "";

		createfile.close();

	}

}