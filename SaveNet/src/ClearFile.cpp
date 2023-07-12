#include <iostream>
#include <string>
#include <fstream>
#include "Include.h"

void ClearFileContent(std::string filenameC) {

	std::ofstream clear_file(filenameC, std::ios::trunc);
	clear_file.close();

}