#include "MyForm.h"
#include "PasswordForm.h"
#include "src/Password.h"
#include <fstream>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

bool CheckPassFile() {

    std::ifstream fileCheck("password.txt");

    return fileCheck.good();

}

void main(array<String^>^ args) {

    if (CheckPassFile()) {

        Application::SetCompatibleTextRenderingDefault(false);
        Application::EnableVisualStyles();

        SaveNet::PasswordForm passwordForm;

        if (passwordForm.ShowDialog() == DialogResult::OK)
        {
            SaveNet::MyForm mainForm;
            Application::Run(% mainForm);
        }
        else
        {
            return;
        }

    }
    else {

        SaveNet::MyForm mainForm;
        Application::Run(% mainForm);

    }

    
}