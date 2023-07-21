#include <iostream>
#include "Include.h"
#include <fstream>
#include <string>


void WriteToTextFile(std::string filenameWT, std::string contenttofile) {

	if (filenameWT == "password.txt") {

		MessageBox::Show("Error: Can't write to password anymore!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;

	}
	else {

		std::ofstream write(filenameWT, std::ios::app);

		if (write.is_open()) {

			write << "\n" << contenttofile << "\n";

		}

		write.close();

	}


}