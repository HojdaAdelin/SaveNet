#include <iostream>
#include "Include.h"
#include <fstream>
#include <string>


void WriteToTextFile(std::string filenameWT, std::string contenttofile) {

	std::ofstream write(filenameWT, std::ios::app);

	if (write.is_open()) {

		write << "\n" << contenttofile << "\n";

	}

	write.close();

}