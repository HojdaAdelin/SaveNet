#include <iostream>
#include <fstream>
#include "Include.h"
#include <fstream>

void UseExtension(std::string filenameUE) {

	std::ofstream createExtension(filenameUE + ".sn");

	createExtension << " ";

	createExtension.close();

	MessageBox::Show("File created!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

}