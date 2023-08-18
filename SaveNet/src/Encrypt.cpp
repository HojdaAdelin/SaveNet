#include <iostream>
#include <windows.h>
#include "Include.h"
#include <string>
#include <fstream>
#include <stdio.h>

void EncryptFileNet(std::string filename) {

	std::ifstream checkForMisc("misc" + filename);

	bool miscResult = checkForMisc.good();

	checkForMisc.close();

	if (filename == "password.txt") {

		MessageBox::Show("Error: Can't encrypt password anymore!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;

	}
	else if (miscResult == true) {

		MessageBox::Show("The file can't be encrypted twice!", "Save Net");
		return;

	}
	else {

		bool fresult, sresult;
		char xr;
		std::fstream fin, fout;

		fin.open(filename, std::fstream::in);

		if (!fin) {

			MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		fresult = true;

		fout.open("misc" + filename, std::fstream::out);

		if (!fout) {

			MessageBox::Show("Error: Can't write to the file!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
			fin.close();
			return;

		}
		sresult = true;

		

		while (fin >> std::noskipws >> xr) {

			
			
			xr = xr + (1000 * 8 + 45550 + 880 + 2222);
			fout << xr;

			
		}

		fin.close();
		fout.close();

		fin.open(filename, std::fstream::out);
		fout.open("misc" + filename, std::fstream::in);

		while (fout >> std::noskipws >> xr) {

			fin << xr;

		}

		fin.close();
		fout.close();

		if (fresult == true && sresult == true) {

			MessageBox::Show("File encrypted!", "SaveNet");

		}

	}


}