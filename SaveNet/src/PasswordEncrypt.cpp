#include "Password.h"
#include <fstream>
#include <iostream>
#include "../MyForm.h"
#include <Windows.h>

using namespace Windows::Forms;

void WritePassword(std::string password) {

	std::ofstream write("password.txt");

	write << password;

	write.close();

	SetFileAttributesA("password.txt", FILE_ATTRIBUTE_HIDDEN);


}

void EncryptPassword() {

	
	char xr;
	std::fstream fin, fout;

	fin.open("password.txt", std::fstream::in);

	

	fout.open("pass.txt", std::fstream::out);

	

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

	SetFileAttributesA("pass.txt", FILE_ATTRIBUTE_HIDDEN);

}