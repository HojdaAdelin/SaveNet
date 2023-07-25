#include <iostream>
#include <fstream>
#include <string>
#include "Include.h"

std::string PasswordGenerator() {

	std::string final_password;
	
	char symbols[23] = { '1', '2', '3', '4', '5',
	'6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
	'x', 'y', 'w', 'z', 'r', 'q' };

	char Msymbols[10] = { 'A', 'B', 'C', 'D', 'E',
	'F', 'G', 'H', 'I', 'Q' };

	int pass_int = 0;

	while (pass_int < 10) {

		int index = std::rand() % 23;
		int index2 = std::rand() % 10;
		final_password = final_password + symbols[index] + Msymbols[index2];
		pass_int++;

	}

	return final_password;

}