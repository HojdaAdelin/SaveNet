#pragma once
#include "src/Include.h"
#include <string>
#include <iostream>
#include <fstream>


namespace SaveNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ inputMain;
	protected:
	private: System::Windows::Forms::Label^ frontText;
	private: System::Windows::Forms::Button^ encryptBtn;
	private: System::Windows::Forms::Button^ decryptBtn;
	private: System::Windows::Forms::Button^ viewBtn;
	private: System::Windows::Forms::TextBox^ secondText;
	private: System::Windows::Forms::Button^ writeBtn;
	private: System::Windows::Forms::CheckBox^ checkWrite;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->inputMain = (gcnew System::Windows::Forms::TextBox());
			this->frontText = (gcnew System::Windows::Forms::Label());
			this->encryptBtn = (gcnew System::Windows::Forms::Button());
			this->decryptBtn = (gcnew System::Windows::Forms::Button());
			this->viewBtn = (gcnew System::Windows::Forms::Button());
			this->secondText = (gcnew System::Windows::Forms::TextBox());
			this->writeBtn = (gcnew System::Windows::Forms::Button());
			this->checkWrite = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// inputMain
			// 
			this->inputMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputMain->Location = System::Drawing::Point(97, 75);
			this->inputMain->Multiline = true;
			this->inputMain->Name = L"inputMain";
			this->inputMain->Size = System::Drawing::Size(891, 79);
			this->inputMain->TabIndex = 0;
			// 
			// frontText
			// 
			this->frontText->AutoSize = true;
			this->frontText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->frontText->Location = System::Drawing::Point(90, 30);
			this->frontText->Name = L"frontText";
			this->frontText->Size = System::Drawing::Size(339, 42);
			this->frontText->TabIndex = 1;
			this->frontText->Text = L"Enter the file name ";
			// 
			// encryptBtn
			// 
			this->encryptBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->encryptBtn->Location = System::Drawing::Point(60, 672);
			this->encryptBtn->Name = L"encryptBtn";
			this->encryptBtn->Size = System::Drawing::Size(306, 74);
			this->encryptBtn->TabIndex = 2;
			this->encryptBtn->Text = L"Encrypt";
			this->encryptBtn->UseVisualStyleBackColor = true;
			this->encryptBtn->Click += gcnew System::EventHandler(this, &MyForm::encryptBtn_Click);
			// 
			// decryptBtn
			// 
			this->decryptBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decryptBtn->Location = System::Drawing::Point(412, 672);
			this->decryptBtn->Name = L"decryptBtn";
			this->decryptBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->decryptBtn->Size = System::Drawing::Size(289, 74);
			this->decryptBtn->TabIndex = 3;
			this->decryptBtn->Text = L"Decrypt";
			this->decryptBtn->UseVisualStyleBackColor = true;
			this->decryptBtn->Click += gcnew System::EventHandler(this, &MyForm::decryptBtn_Click);
			// 
			// viewBtn
			// 
			this->viewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewBtn->Location = System::Drawing::Point(748, 672);
			this->viewBtn->Name = L"viewBtn";
			this->viewBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->viewBtn->Size = System::Drawing::Size(289, 74);
			this->viewBtn->TabIndex = 4;
			this->viewBtn->Text = L"View";
			this->viewBtn->UseVisualStyleBackColor = true;
			this->viewBtn->Click += gcnew System::EventHandler(this, &MyForm::viewBtn_Click);
			// 
			// secondText
			// 
			this->secondText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->secondText->Location = System::Drawing::Point(97, 188);
			this->secondText->Multiline = true;
			this->secondText->Name = L"secondText";
			this->secondText->ReadOnly = true;
			this->secondText->Size = System::Drawing::Size(891, 363);
			this->secondText->TabIndex = 5;
			// 
			// writeBtn
			// 
			this->writeBtn->Enabled = false;
			this->writeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->writeBtn->Location = System::Drawing::Point(748, 576);
			this->writeBtn->Name = L"writeBtn";
			this->writeBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->writeBtn->Size = System::Drawing::Size(289, 74);
			this->writeBtn->TabIndex = 6;
			this->writeBtn->Text = L"Write";
			this->writeBtn->UseVisualStyleBackColor = true;
			this->writeBtn->Click += gcnew System::EventHandler(this, &MyForm::writeBtn_Click);
			// 
			// checkWrite
			// 
			this->checkWrite->AutoSize = true;
			this->checkWrite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkWrite->Location = System::Drawing::Point(60, 595);
			this->checkWrite->Name = L"checkWrite";
			this->checkWrite->Size = System::Drawing::Size(283, 55);
			this->checkWrite->TabIndex = 7;
			this->checkWrite->Text = L"Write to text";
			this->checkWrite->UseVisualStyleBackColor = true;
			this->checkWrite->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkWrite_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 781);
			this->Controls->Add(this->checkWrite);
			this->Controls->Add(this->writeBtn);
			this->Controls->Add(this->secondText);
			this->Controls->Add(this->viewBtn);
			this->Controls->Add(this->decryptBtn);
			this->Controls->Add(this->encryptBtn);
			this->Controls->Add(this->frontText);
			this->Controls->Add(this->inputMain);
			this->MaximumSize = System::Drawing::Size(1123, 852);
			this->MinimumSize = System::Drawing::Size(1123, 852);
			this->Name = L"MyForm";
			this->Text = L"SaveNet";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void encryptBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ file_name = inputMain->Text;
		std::string file_name_convert = ConvertString(file_name);
		EncryptFileNet(file_name_convert);

	}
	private: System::Void decryptBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ file_name = inputMain->Text;
		std::string file_name_convert = ConvertString(file_name);
		DecryptFileNet(file_name_convert);

	}
	private: System::Void viewBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ file_name = inputMain->Text;
		std::string file_name_convert = ConvertString(file_name);
		std::string getLineFromFile;
		std::string fileCount;

		std::ifstream read(file_name_convert);

		while (std::getline(read, getLineFromFile)) {

			fileCount += getLineFromFile + "\r\n";

		}

		read.close();

		secondText->Text = gcnew String(fileCount.c_str());

	}
private: System::Void checkWrite_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkWrite->Checked) {

		writeBtn->Enabled = true;
		secondText->ReadOnly = false;
		secondText->Clear();
		
	}
	else {

		writeBtn->Enabled = false;
		secondText->ReadOnly = true;
		
	}

}
private: System::Void writeBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ getTextFile = inputMain->Text;
	String^ getContentToWrite = secondText->Text;
	std::string getTextFile_convert = ConvertString(getTextFile);
	std::string getContentToWrite_convert = ConvertString(getContentToWrite);

	if (String::IsNullOrEmpty(getTextFile)) {

		MessageBox::Show("Enter the name of the file!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	else if (String::IsNullOrEmpty(getContentToWrite)) {

		MessageBox::Show("Enter some text in 2nd textbox to process!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	else {

		WriteToTextFile(getTextFile_convert, getContentToWrite_convert);
		MessageBox::Show("Text writed!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

}
};
}
