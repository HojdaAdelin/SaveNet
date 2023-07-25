#pragma once
#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>
#include <vector>

using namespace System;
using namespace msclr::interop;
using namespace System::Windows::Forms;

std::string ConvertString(String^ str);
void EncryptFileNet(std::string filename);
void DecryptFileNet(std::string filenameW);
void WriteToTextFile(std::string filenameWT, std::string contenttofile);
void ClearFileContent(std::string filenameC);
void ChangeLog();
void srcOpen();
std::string GenerateNameFile();
void UseExtension(std::string filenameUE);
void CreateUserFile(std::string filenameCU);
void creator();
std::string userName();
void DeletePassword();
void ChangePassword(std::string newpassword);
bool checkpassfile();
void BackUpPassword();