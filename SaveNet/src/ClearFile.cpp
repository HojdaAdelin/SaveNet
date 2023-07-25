#include <iostream>
#include <string>
#include <fstream>
#include "Include.h"

void ClearFileContent(std::string filenameC) {

	if (filenameC == "password.txt") {

		MessageBox::Show("Error: Can't clear password.txt!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;

	}
	else {

		std::ofstream clear_file(filenameC, std::ios::trunc);
		clear_file.close();

	}


}