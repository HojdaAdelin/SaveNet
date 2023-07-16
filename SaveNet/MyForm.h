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
	private: System::Windows::Forms::Button^ clearBtn;
	private: System::Windows::Forms::Button^ generateBtn;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ shortcutsMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ decryptViewSub;
	private: System::Windows::Forms::ToolStripMenuItem^ encryptViewSub;
	private: System::Windows::Forms::ToolStripMenuItem^ clearYesSub;
	private: System::Windows::Forms::ToolStripMenuItem^ clearWriteOnSub;
	private: System::Windows::Forms::ToolStripMenuItem^ homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changeLogSub;
	private: System::Windows::Forms::ToolStripMenuItem^ sourceToolSub;
	private: System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::Button^ snBtn;
	private: System::Windows::Forms::ToolStripMenuItem^ themeToolMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ defaultToolMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ darkToolMenu;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->inputMain = (gcnew System::Windows::Forms::TextBox());
			this->frontText = (gcnew System::Windows::Forms::Label());
			this->encryptBtn = (gcnew System::Windows::Forms::Button());
			this->decryptBtn = (gcnew System::Windows::Forms::Button());
			this->viewBtn = (gcnew System::Windows::Forms::Button());
			this->secondText = (gcnew System::Windows::Forms::TextBox());
			this->writeBtn = (gcnew System::Windows::Forms::Button());
			this->checkWrite = (gcnew System::Windows::Forms::CheckBox());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->generateBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeLogSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sourceToolSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->shortcutsMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->decryptViewSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->encryptViewSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearYesSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearWriteOnSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themeToolMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultToolMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkToolMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->snBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// inputMain
			// 
			this->inputMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputMain->Location = System::Drawing::Point(107, 132);
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
			this->frontText->Location = System::Drawing::Point(100, 87);
			this->frontText->Name = L"frontText";
			this->frontText->Size = System::Drawing::Size(339, 42);
			this->frontText->TabIndex = 1;
			this->frontText->Text = L"Enter the file name ";
			// 
			// encryptBtn
			// 
			this->encryptBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->encryptBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->encryptBtn->Location = System::Drawing::Point(60, 713);
			this->encryptBtn->Name = L"encryptBtn";
			this->encryptBtn->Size = System::Drawing::Size(306, 74);
			this->encryptBtn->TabIndex = 2;
			this->encryptBtn->Text = L"Encrypt";
			this->encryptBtn->UseVisualStyleBackColor = true;
			this->encryptBtn->Click += gcnew System::EventHandler(this, &MyForm::encryptBtn_Click);
			// 
			// decryptBtn
			// 
			this->decryptBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->decryptBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decryptBtn->Location = System::Drawing::Point(412, 713);
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
			this->viewBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewBtn->Location = System::Drawing::Point(748, 713);
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
			this->secondText->Location = System::Drawing::Point(107, 248);
			this->secondText->Multiline = true;
			this->secondText->Name = L"secondText";
			this->secondText->ReadOnly = true;
			this->secondText->Size = System::Drawing::Size(891, 363);
			this->secondText->TabIndex = 5;
			// 
			// writeBtn
			// 
			this->writeBtn->Enabled = false;
			this->writeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->writeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->writeBtn->Location = System::Drawing::Point(412, 633);
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
			this->checkWrite->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkWrite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkWrite->Location = System::Drawing::Point(60, 652);
			this->checkWrite->Name = L"checkWrite";
			this->checkWrite->Size = System::Drawing::Size(278, 55);
			this->checkWrite->TabIndex = 7;
			this->checkWrite->Text = L"Write to text";
			this->checkWrite->UseVisualStyleBackColor = true;
			this->checkWrite->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkWrite_CheckedChanged);
			// 
			// clearBtn
			// 
			this->clearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearBtn->Location = System::Drawing::Point(748, 633);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->clearBtn->Size = System::Drawing::Size(289, 74);
			this->clearBtn->TabIndex = 8;
			this->clearBtn->Text = L"Clear Text";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MyForm::clearBtn_Click);
			// 
			// generateBtn
			// 
			this->generateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->generateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->generateBtn->Location = System::Drawing::Point(60, 793);
			this->generateBtn->Name = L"generateBtn";
			this->generateBtn->Size = System::Drawing::Size(306, 74);
			this->generateBtn->TabIndex = 9;
			this->generateBtn->Text = L"Generate file";
			this->generateBtn->UseVisualStyleBackColor = true;
			this->generateBtn->Click += gcnew System::EventHandler(this, &MyForm::generateBtn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->homeToolStripMenuItem,
					this->shortcutsMenu, this->themeToolMenu
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1097, 57);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->changeLogSub,
					this->sourceToolSub
			});
			this->homeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->Size = System::Drawing::Size(127, 53);
			this->homeToolStripMenuItem->Text = L"Home";
			// 
			// changeLogSub
			// 
			this->changeLogSub->Name = L"changeLogSub";
			this->changeLogSub->Size = System::Drawing::Size(322, 54);
			this->changeLogSub->Text = L"Change log";
			this->changeLogSub->Click += gcnew System::EventHandler(this, &MyForm::changeLogSub_Click);
			// 
			// sourceToolSub
			// 
			this->sourceToolSub->Name = L"sourceToolSub";
			this->sourceToolSub->Size = System::Drawing::Size(322, 54);
			this->sourceToolSub->Text = L"Source";
			this->sourceToolSub->Click += gcnew System::EventHandler(this, &MyForm::sourceToolSub_Click);
			// 
			// shortcutsMenu
			// 
			this->shortcutsMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->decryptViewSub,
					this->encryptViewSub, this->clearYesSub, this->clearWriteOnSub
			});
			this->shortcutsMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shortcutsMenu->Name = L"shortcutsMenu";
			this->shortcutsMenu->Size = System::Drawing::Size(174, 53);
			this->shortcutsMenu->Text = L"Shortcuts";
			// 
			// decryptViewSub
			// 
			this->decryptViewSub->Name = L"decryptViewSub";
			this->decryptViewSub->Size = System::Drawing::Size(399, 54);
			this->decryptViewSub->Text = L"Decrypt + View";
			this->decryptViewSub->Click += gcnew System::EventHandler(this, &MyForm::decryptViewSub_Click);
			// 
			// encryptViewSub
			// 
			this->encryptViewSub->Name = L"encryptViewSub";
			this->encryptViewSub->Size = System::Drawing::Size(399, 54);
			this->encryptViewSub->Text = L"Encrypt + View";
			this->encryptViewSub->Click += gcnew System::EventHandler(this, &MyForm::encryptViewSub_Click);
			// 
			// clearYesSub
			// 
			this->clearYesSub->Name = L"clearYesSub";
			this->clearYesSub->Size = System::Drawing::Size(399, 54);
			this->clearYesSub->Text = L"Clear + Yes";
			this->clearYesSub->Click += gcnew System::EventHandler(this, &MyForm::clearYesSub_Click);
			// 
			// clearWriteOnSub
			// 
			this->clearWriteOnSub->Name = L"clearWriteOnSub";
			this->clearWriteOnSub->Size = System::Drawing::Size(399, 54);
			this->clearWriteOnSub->Text = L"Clear + Write On";
			this->clearWriteOnSub->Click += gcnew System::EventHandler(this, &MyForm::clearWriteOnSub_Click);
			// 
			// themeToolMenu
			// 
			this->themeToolMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->defaultToolMenu,
					this->darkToolMenu
			});
			this->themeToolMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->themeToolMenu->Name = L"themeToolMenu";
			this->themeToolMenu->Size = System::Drawing::Size(137, 53);
			this->themeToolMenu->Text = L"Theme";
			// 
			// defaultToolMenu
			// 
			this->defaultToolMenu->Name = L"defaultToolMenu";
			this->defaultToolMenu->Size = System::Drawing::Size(359, 54);
			this->defaultToolMenu->Text = L"Default";
			// 
			// darkToolMenu
			// 
			this->darkToolMenu->Name = L"darkToolMenu";
			this->darkToolMenu->Size = System::Drawing::Size(359, 54);
			this->darkToolMenu->Text = L"Dark";
			// 
			// deleteBtn
			// 
			this->deleteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteBtn->Location = System::Drawing::Point(412, 793);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->deleteBtn->Size = System::Drawing::Size(289, 74);
			this->deleteBtn->TabIndex = 13;
			this->deleteBtn->Text = L"Delete file";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &MyForm::deleteBtn_Click);
			// 
			// snBtn
			// 
			this->snBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->snBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->snBtn->Location = System::Drawing::Point(748, 793);
			this->snBtn->Name = L"snBtn";
			this->snBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->snBtn->Size = System::Drawing::Size(289, 74);
			this->snBtn->TabIndex = 14;
			this->snBtn->Text = L"Extension .sn";
			this->snBtn->UseVisualStyleBackColor = true;
			this->snBtn->Click += gcnew System::EventHandler(this, &MyForm::snBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 879);
			this->Controls->Add(this->snBtn);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->generateBtn);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->checkWrite);
			this->Controls->Add(this->writeBtn);
			this->Controls->Add(this->secondText);
			this->Controls->Add(this->viewBtn);
			this->Controls->Add(this->decryptBtn);
			this->Controls->Add(this->encryptBtn);
			this->Controls->Add(this->frontText);
			this->Controls->Add(this->inputMain);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1123, 950);
			this->MinimumSize = System::Drawing::Size(1123, 950);
			this->Name = L"MyForm";
			this->Text = L"SaveNet";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void ButtonsMenuHovEnter(Object^ sender, EventArgs^ e) {

			Button^ button = dynamic_cast<Button^>(sender);
			ToolStripItem^ menuItem = dynamic_cast<ToolStripItem^>(sender);
			MenuStrip^ menuItemMain = dynamic_cast<MenuStrip^>(sender);

			if (button != nullptr)
			{
				button->BackColor = Color::FromArgb(217, 217, 217);
				button->FlatAppearance->BorderColor = SystemColors::ControlDark;
			}
			else if (menuItem != nullptr)
			{
				menuItem->BackColor = Color::FromArgb(217, 217, 217);
			}
			else if (menuItemMain != nullptr) {

				menuItemMain->BackColor = Color::FromArgb(217, 217, 217);

			}

			
		}

		void ButtonsMenuHovLeave(Object^ sender, EventArgs^ e) {

			Button^ button = dynamic_cast<Button^>(sender);
			ToolStripItem^ menuItem = dynamic_cast<ToolStripItem^>(sender);
			MenuStrip^ menuItemMain = dynamic_cast<MenuStrip^>(sender);

			if (button != nullptr)
			{
				
				button->BackColor = Color::White;
				button->FlatAppearance->BorderColor = SystemColors::ControlDark;

			}
			else if (menuItem != nullptr)
			{
				
				menuItem->BackColor = SystemColors::Menu;

			}
			else if (menuItemMain != nullptr) {

				menuItemMain->BackColor = SystemColors::Control;

			}

		}

		void MenuStripHoverEnter(Object^ sender, EventArgs^ e)
		{
			// Change the back color of the MenuStrip here
			MenuStrip^ menuStrip = dynamic_cast<MenuStrip^>(sender);
			if (menuStrip != nullptr)
			{
				menuStrip->BackColor = Color::FromArgb(240, 240, 240);
			}
		}

		void MenuStripHoverLeave(Object^ sender, EventArgs^ e)
		{
			// Change the back color of the MenuStrip here
			MenuStrip^ menuStrip = dynamic_cast<MenuStrip^>(sender);
			if (menuStrip != nullptr)
			{
				menuStrip->BackColor = SystemColors::Control;
			}
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

		secondText->Clear();
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
private: System::Void clearBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ filename = inputMain->Text;
	std::string filename_convert = ConvertString(filename);

	if (String::IsNullOrEmpty(filename)) {

		MessageBox::Show("Enter the name of the file!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	else {

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to clear the file content?",
			"SaveNet",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes) {

			ClearFileContent(filename_convert);

		}
		else {

		}

	}

}
private: System::Void logBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	ChangeLog();

}
private: System::Void srcBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	srcOpen();

}
private: System::Void generateBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	inputMain->Text = gcnew String(GenerateNameFile().c_str());

}
private: System::Void decryptViewSub_Click(System::Object^ sender, System::EventArgs^ e) {

	// 1

	String^ file_name = inputMain->Text;
	std::string file_name_convert = ConvertString(file_name);
	DecryptFileNet(file_name_convert);

	// 2

	secondText->Clear();
	String^ file_name2 = inputMain->Text;
	std::string file_name_convert2 = ConvertString(file_name2);
	std::string getLineFromFile;
	std::string fileCount;

	std::ifstream read(file_name_convert2);

	while (std::getline(read, getLineFromFile)) {

		fileCount += getLineFromFile + "\r\n";

	}

	read.close();

	secondText->Text = gcnew String(fileCount.c_str());

}
private: System::Void encryptViewSub_Click(System::Object^ sender, System::EventArgs^ e) {

	// 1

	String^ file_name = inputMain->Text;
	std::string file_name_convert = ConvertString(file_name);
	EncryptFileNet(file_name_convert);

	// 2

	secondText->Clear();
	String^ file_name2 = inputMain->Text;
	std::string file_name_convert2 = ConvertString(file_name2);
	std::string getLineFromFile;
	std::string fileCount;

	std::ifstream read(file_name_convert2);

	while (std::getline(read, getLineFromFile)) {

		fileCount += getLineFromFile + "\r\n";

	}

	read.close();

	secondText->Text = gcnew String(fileCount.c_str());

}
private: System::Void clearYesSub_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ filename = inputMain->Text;
	std::string filename_convert = ConvertString(filename);

	if (String::IsNullOrEmpty(filename)) {

		MessageBox::Show("Enter the name of the file!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	else {

		ClearFileContent(filename_convert);

	}
	secondText->Clear();
}
private: System::Void clearWriteOnSub_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ filename = inputMain->Text;
	std::string filename_convert = ConvertString(filename);

	if (String::IsNullOrEmpty(filename)) {

		MessageBox::Show("Enter the name of the file!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	else {

		ClearFileContent(filename_convert);

	}

	checkWrite->Checked = true;
	secondText->Clear();
}
private: System::Void changeLogSub_Click(System::Object^ sender, System::EventArgs^ e) {

	ChangeLog();

}
private: System::Void sourceToolSub_Click(System::Object^ sender, System::EventArgs^ e) {

	srcOpen();

}
private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ filename = inputMain->Text;
	std::string filename_convert = ConvertString(filename);

	if (String::IsNullOrEmpty(filename)) {

		MessageBox::Show("Enter the name of the file!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	else {

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to delete the file?",
			"SaveNet",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes) {

			remove(filename_convert.c_str());

		}
		else {

		}

	}

}
private: System::Void snBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ filename = inputMain->Text;
	secondText->Clear();
	std::string filename_convert = ConvertString(filename);

	UseExtension(filename_convert);

}
};
}
