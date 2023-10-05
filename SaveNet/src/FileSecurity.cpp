#include <iostream>
#include <cstdlib>
#include <string>
#include "Include.h"
#include <fstream>

void OpenFile(std::string file_name_create);

std::string GenerateNameFile() {

	char symbols[23] = { '1', '2', '3', '4', '5',
	'6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
	'x', 'y', 'w', 'z', 'r', 'q'};

	int full_name = 0;
	std::string filename;

	while (full_name < 10) {

		int index = std::rand() % 23;
		filename = filename + symbols[index];
		full_name++;

	}

	OpenFile(filename + ".txt");
	MessageBox::Show("File generated!", "SaveNet");


	return filename + ".txt";

}

void OpenFile(std::string file_name_create) {

	//std::string file_name_create = GenerateNameFile();

	std::ofstream getfile(file_name_create);

	getfile << "";

	getfile.close();
}