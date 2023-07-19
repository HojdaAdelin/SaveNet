#include <iostream>
#include <fstream>
#include <windows.h>
#include "Include.h"
#include <stdio.h>
#include <vector>

void DecryptPassword() {

	bool fresult, sresult;
	std::vector<char> textto;
	char xr;
	std::fstream fin, fout, fxr;
	fin.open("password.txt", std::fstream::out);

	if (!fin) {

		MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;

	}
	fresult = true;

	fout.open("pass.txt", std::fstream::in);

	if (!fout) {

		MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
		fin.close();
		return;
	}
	sresult = true;

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

	if (fresult == true && sresult == true) {

		MessageBox::Show("Pass confirmed!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

}