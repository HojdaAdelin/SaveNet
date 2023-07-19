#include "Password.h"
#include <fstream>
#include <iostream>
#include "../MyForm.h"

using namespace Windows::Forms;

void WritePassword(std::string password) {

	std::ofstream write("password.txt");

	write << password;

	write.close();

}

void EncryptPassword() {

	bool fresult, sresult;
	char xr;
	std::fstream fin, fout;

	fin.open("password.txt", std::fstream::in);

	if (!fin) {

		MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	fresult = true;

	fout.open("pass.txt", std::fstream::out);

	if (!fout) {

		MessageBox::Show("Error: Can't write to the file!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
		fin.close();
		return;

	}
	sresult = true;

	while (fin >> std::noskipws >> xr) {

		xr = xr + (2007 * 29 * 12 * 5);
		fout << xr;

	}

	fin.close();
	fout.close();

	fin.open("password.txt", std::fstream::out);
	fout.open("pass.txt", std::fstream::in);

	while (fout >> std::noskipws >> xr) {

		fin << xr;

	}

	fin.close();
	fout.close();

	if (fresult == true && sresult == true) {

		MessageBox::Show("Password set!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

}