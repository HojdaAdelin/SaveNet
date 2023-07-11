#pragma once
#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>

using namespace System;
using namespace msclr::interop;
using namespace System::Windows::Forms;

std::string ConvertString(String^ str);
void EncryptFileNet(std::string filename);
void DecryptFileNet(std::string filenameW);