#include "Include.h"
#include <iostream>
#include <string>

void DeletePassword() {

	std::remove("password.txt");
	std::remove("pass.txt");

}