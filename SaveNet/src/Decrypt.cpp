#include <iostream>
#include <fstream>
#include <windows.h>
#include "Include.h"
#include <stdio.h>
#include <vector>

void DecryptFileNet(std::string filenameW) {

	if (filenameW == "password.txt") {

		MessageBox::Show("Error: Can't decrypt password.txt!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;

	}
	else {

		bool fresult, sresult;
		std::vector<char> textto;
		char xr;
		std::fstream fin, fout, fxr;
		fin.open(filenameW, std::fstream::out);

		if (!fin) {

			MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;

		}
		fresult = true;

		fout.open("other.txt", std::fstream::in);

		if (!fout) {

			MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
			fin.close();
			return;
		}
		sresult = true;

		while (fout >> std::noskipws >> xr) {

			xr = xr - (1000 * 8 + 45550 + 880 + 2222);
			fin << xr;
			textto.push_back(xr);

		}

		fxr.open("other.txt", std::fstream::out);

		for (char writeto : textto) {

			fxr << writeto;

		}

		fin.close();
		fout.close();
		fxr.close();

		if (fresult == true && sresult == true) {

			MessageBox::Show("File decrypted!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

	}

	

	
}