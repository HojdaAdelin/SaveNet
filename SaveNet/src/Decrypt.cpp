#include <iostream>
#include <windows.h>
#include "Include.h"
#include <string>
#include <fstream>
#include <stdio.h>
#include <cstdio>

void DecryptFileNet(std::string filenameW) {

    std::ifstream checkMisc("misc" + filenameW);

    bool miscResult = checkMisc.good();

    if (filenameW == "password.txt") {
        MessageBox::Show("Error: Can't decrypt password.txt!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
    else if (miscResult == false) {

        MessageBox::Show("File isn't encrypted or misc file didn't exist!", "Save Net");
        return;

    }
    else {
        bool fresult = false;

        char xr;
        std::fstream fin, fout;

        fin.open(filenameW, std::fstream::in);

        if (!fin) {
            MessageBox::Show("Error: File can't be opened!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }
        fresult = true;

        fout.open("misc" + filenameW, std::fstream::out);

        if (!fout) {
            MessageBox::Show("Error: Can't write to the file!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
            fin.close();
            return;
        }
        

        while (fin >> std::noskipws >> xr) {

           
            xr = xr - (1000 * 8 + 45550 + 880 + 2222);
            fout << xr;

        }

        fin.close();
        fout.close();

        fin.open("misc" + filenameW, std::fstream::in);
        fout.open(filenameW, std::fstream::out);

        while (fin >> std::noskipws >> xr) {
            fout << xr;
        }

        fin.close();
        fout.close();

        if (fresult) {
            MessageBox::Show("File decrypted!", "SaveNet");
            std::remove(std::string("misc" + filenameW).c_str());

        }
    }
}
