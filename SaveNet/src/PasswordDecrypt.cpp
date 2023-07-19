#include <iostream>
#include <fstream>
#include <windows.h>
#include "Include.h"
#include <stdio.h>
#include <vector>

void DecryptPassword() {

	std::vector<char> textto;
	char xr;
	std::fstream fin, fout, fxr;
	fin.open("password.txt", std::fstream::out);

	

	fout.open("pass.txt", std::fstream::in);

	

	while (fout >> std::noskipws >> xr) {

		xr = xr - (2007 * 29 * 12 * 5);
		fin << xr;
		textto.push_back(xr);

	}

	fxr.open("pass.txt", std::fstream::out);

	for (char writeto : textto) {

		fxr << writeto;

	}

	fin.close();
	fout.close();
	fxr.close();

	

}