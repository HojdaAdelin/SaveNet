#include <iostream>
#include <fstream>
#include <windows.h>
#include "Include.h"
#include <stdio.h>

void DecryptFileNet(std::string filenameW) {

	char xr;
	std::fstream fin, fout;
	fin.open(filenameW, std::fstream::out);
	
	if (!fin) {

		MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	fout.open("other.txt", std::fstream::in);

	if (!fout) {

		MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	while (fout >> std::noskipws >> xr) {

		xr = xr - 100;
		fin << xr;

	}

	fin.close();
	fout.close();

	MessageBox::Show("File decrypted!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

}