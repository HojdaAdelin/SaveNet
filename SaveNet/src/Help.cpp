#include <iostream>
#include <windows.h>
#include "Include.h"

void srcOpen() {

	system("start https://github.com/HojdaAdelin/SaveNet");
	
}

void creator() {

	system("start https://hojdaadelin.github.io/portfolio/");

}


void ChangeLog() {

	MessageBox::Show("Version 1.3.0 Preview\n\n- Fixed creating file extension\n- New info box for generated file\n-Interface update", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

}