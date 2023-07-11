#pragma once
#include "src/Include.h"
#include <string>
#include <iostream>


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
			this->SuspendLayout();
			// 
			// inputMain
			// 
			this->inputMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputMain->Location = System::Drawing::Point(109, 124);
			this->inputMain->Multiline = true;
			this->inputMain->Name = L"inputMain";
			this->inputMain->Size = System::Drawing::Size(846, 79);
			this->inputMain->TabIndex = 0;
			// 
			// frontText
			// 
			this->frontText->AutoSize = true;
			this->frontText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->frontText->Location = System::Drawing::Point(104, 65);
			this->frontText->Name = L"frontText";
			this->frontText->Size = System::Drawing::Size(339, 42);
			this->frontText->TabIndex = 1;
			this->frontText->Text = L"Enter the file name ";
			// 
			// encryptBtn
			// 
			this->encryptBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->encryptBtn->Location = System::Drawing::Point(109, 599);
			this->encryptBtn->Name = L"encryptBtn";
			this->encryptBtn->Size = System::Drawing::Size(334, 74);
			this->encryptBtn->TabIndex = 2;
			this->encryptBtn->Text = L"Encrypt";
			this->encryptBtn->UseVisualStyleBackColor = true;
			this->encryptBtn->Click += gcnew System::EventHandler(this, &MyForm::encryptBtn_Click);
			// 
			// decryptBtn
			// 
			this->decryptBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decryptBtn->Location = System::Drawing::Point(621, 599);
			this->decryptBtn->Name = L"decryptBtn";
			this->decryptBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->decryptBtn->Size = System::Drawing::Size(334, 74);
			this->decryptBtn->TabIndex = 3;
			this->decryptBtn->Text = L"Decrypt";
			this->decryptBtn->UseVisualStyleBackColor = true;
			this->decryptBtn->Click += gcnew System::EventHandler(this, &MyForm::decryptBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 781);
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
};
}
