#include <iostream>
#include <windows.h>
#include "Include.h"
#include <string>
#include <fstream>
#include <stdio.h>

void EncryptFileNet(std::string filename) {

	char xr;
	std::fstream fin, fout;

	fin.open(filename, std::fstream::in);

	if (!fin) {

		MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	fout.open("other.txt", std::fstream::out);

	if (!fout) {

		MessageBox::Show("Error: Can't write to the file!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	while (fin >> std::noskipws >> xr) {

		xr = xr + 100;
		fout << xr;

	}

	fin.close();
	fout.close();

	fin.open(filename, std::fstream::out);
	fout.open("other.txt", std::fstream::in);

	while (fout >> std::noskipws >> xr) {
			
		fin << xr;

	}

	fin.close();
	fout.close();

	MessageBox::Show("File encrypted!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

}