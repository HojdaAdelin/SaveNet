#pragma once
#include "src/Include.h"
#include "src/GUI/SetPassword.h"
#include <string>
#include <iostream>
#include <fstream>
#include "src/Password.h"


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



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ shortcutsMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ decryptViewSub;
	private: System::Windows::Forms::ToolStripMenuItem^ encryptViewSub;
	private: System::Windows::Forms::ToolStripMenuItem^ clearYesSub;
	private: System::Windows::Forms::ToolStripMenuItem^ clearWriteOnSub;
	private: System::Windows::Forms::ToolStripMenuItem^ homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changeLogSub;
	private: System::Windows::Forms::ToolStripMenuItem^ sourceToolSub;



	private: System::Windows::Forms::ToolStripMenuItem^ fileToolMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ generateFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ securityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ snExtensionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ setLocalPasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ creatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changePasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deletePasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backupPasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generatePasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeLogSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sourceToolSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generateFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->shortcutsMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->decryptViewSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->encryptViewSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearYesSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearWriteOnSub = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->securityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->snExtensionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setLocalPasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changePasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deletePasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backupPasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generatePasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// inputMain
			// 
			this->inputMain->AccessibleDescription = L"Main input";
			this->inputMain->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inputMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputMain->Location = System::Drawing::Point(209, 66);
			this->inputMain->Name = L"inputMain";
			this->inputMain->Size = System::Drawing::Size(865, 80);
			this->inputMain->TabIndex = 0;
			// 
			// frontText
			// 
			this->frontText->AutoSize = true;
			this->frontText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->frontText->Location = System::Drawing::Point(12, 82);
			this->frontText->Name = L"frontText";
			this->frontText->Size = System::Drawing::Size(191, 42);
			this->frontText->TabIndex = 1;
			this->frontText->Text = L"File name:";
			// 
			// encryptBtn
			// 
			this->encryptBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->encryptBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->encryptBtn->Location = System::Drawing::Point(19, 778);
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
			this->decryptBtn->Location = System::Drawing::Point(406, 778);
			this->decryptBtn->Name = L"decryptBtn";
			this->decryptBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->decryptBtn->Size = System::Drawing::Size(305, 74);
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
			this->viewBtn->Location = System::Drawing::Point(777, 778);
			this->viewBtn->Name = L"viewBtn";
			this->viewBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->viewBtn->Size = System::Drawing::Size(297, 74);
			this->viewBtn->TabIndex = 4;
			this->viewBtn->Text = L"View";
			this->viewBtn->UseVisualStyleBackColor = true;
			this->viewBtn->Click += gcnew System::EventHandler(this, &MyForm::viewBtn_Click);
			// 
			// secondText
			// 
			this->secondText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->secondText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->secondText->Location = System::Drawing::Point(19, 162);
			this->secondText->Multiline = true;
			this->secondText->Name = L"secondText";
			this->secondText->ReadOnly = true;
			this->secondText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->secondText->Size = System::Drawing::Size(1055, 507);
			this->secondText->TabIndex = 5;
			// 
			// writeBtn
			// 
			this->writeBtn->Enabled = false;
			this->writeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->writeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->writeBtn->Location = System::Drawing::Point(406, 687);
			this->writeBtn->Name = L"writeBtn";
			this->writeBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->writeBtn->Size = System::Drawing::Size(305, 74);
			this->writeBtn->TabIndex = 6;
			this->writeBtn->Text = L"Write";
			this->writeBtn->UseVisualStyleBackColor = true;
			this->writeBtn->Click += gcnew System::EventHandler(this, &MyForm::writeBtn_Click);
			// 
			// checkWrite
			// 
			this->checkWrite->AccessibleDescription = L"Allow to edit a file entered in the main input.";
			this->checkWrite->AccessibleName = L"Write to text";
			this->checkWrite->AccessibleRole = System::Windows::Forms::AccessibleRole::MenuPopup;
			this->checkWrite->AutoSize = true;
			this->checkWrite->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkWrite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkWrite->Location = System::Drawing::Point(19, 695);
			this->checkWrite->Name = L"checkWrite";
			this->checkWrite->Size = System::Drawing::Size(231, 55);
			this->checkWrite->TabIndex = 7;
			this->checkWrite->Text = L"Write text";
			this->checkWrite->UseVisualStyleBackColor = true;
			this->checkWrite->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkWrite_CheckedChanged);
			// 
			// clearBtn
			// 
			this->clearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearBtn->Location = System::Drawing::Point(777, 687);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->clearBtn->Size = System::Drawing::Size(297, 74);
			this->clearBtn->TabIndex = 8;
			this->clearBtn->Text = L"Clear Text";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MyForm::clearBtn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->homeToolStripMenuItem,
					this->fileToolMenu, this->shortcutsMenu, this->securityToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1097, 57);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->changeLogSub,
					this->sourceToolSub, this->creatorToolStripMenuItem, this->exitToolStripMenuItem
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
			// creatorToolStripMenuItem
			// 
			this->creatorToolStripMenuItem->Name = L"creatorToolStripMenuItem";
			this->creatorToolStripMenuItem->Size = System::Drawing::Size(322, 54);
			this->creatorToolStripMenuItem->Text = L"Creator";
			this->creatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::creatorToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(322, 54);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// fileToolMenu
			// 
			this->fileToolMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->generateFileToolStripMenuItem,
					this->deleteFileToolStripMenuItem, this->createFileToolStripMenuItem
			});
			this->fileToolMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fileToolMenu->Name = L"fileToolMenu";
			this->fileToolMenu->Size = System::Drawing::Size(89, 53);
			this->fileToolMenu->Text = L"File";
			// 
			// generateFileToolStripMenuItem
			// 
			this->generateFileToolStripMenuItem->Name = L"generateFileToolStripMenuItem";
			this->generateFileToolStripMenuItem->Size = System::Drawing::Size(359, 54);
			this->generateFileToolStripMenuItem->Text = L"Generate file";
			this->generateFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generateFileToolStripMenuItem_Click);
			// 
			// deleteFileToolStripMenuItem
			// 
			this->deleteFileToolStripMenuItem->Name = L"deleteFileToolStripMenuItem";
			this->deleteFileToolStripMenuItem->Size = System::Drawing::Size(359, 54);
			this->deleteFileToolStripMenuItem->Text = L"Delete file";
			this->deleteFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteFileToolStripMenuItem_Click);
			// 
			// createFileToolStripMenuItem
			// 
			this->createFileToolStripMenuItem->Name = L"createFileToolStripMenuItem";
			this->createFileToolStripMenuItem->Size = System::Drawing::Size(359, 54);
			this->createFileToolStripMenuItem->Text = L"Create file";
			this->createFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::createFileToolStripMenuItem_Click);
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
			// securityToolStripMenuItem
			// 
			this->securityToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->snExtensionToolStripMenuItem,
					this->setLocalPasswordToolStripMenuItem, this->changePasswordToolStripMenuItem, this->deletePasswordToolStripMenuItem, this->backupPasswordToolStripMenuItem,
					this->generatePasswordToolStripMenuItem
			});
			this->securityToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->securityToolStripMenuItem->Name = L"securityToolStripMenuItem";
			this->securityToolStripMenuItem->Size = System::Drawing::Size(152, 53);
			this->securityToolStripMenuItem->Text = L"Security";
			// 
			// snExtensionToolStripMenuItem
			// 
			this->snExtensionToolStripMenuItem->Name = L"snExtensionToolStripMenuItem";
			this->snExtensionToolStripMenuItem->Size = System::Drawing::Size(432, 54);
			this->snExtensionToolStripMenuItem->Text = L".sn extension";
			this->snExtensionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::snExtensionToolStripMenuItem_Click);
			// 
			// setLocalPasswordToolStripMenuItem
			// 
			this->setLocalPasswordToolStripMenuItem->Name = L"setLocalPasswordToolStripMenuItem";
			this->setLocalPasswordToolStripMenuItem->Size = System::Drawing::Size(432, 54);
			this->setLocalPasswordToolStripMenuItem->Text = L"Set local password";
			this->setLocalPasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::setLocalPasswordToolStripMenuItem_Click);
			// 
			// changePasswordToolStripMenuItem
			// 
			this->changePasswordToolStripMenuItem->Name = L"changePasswordToolStripMenuItem";
			this->changePasswordToolStripMenuItem->Size = System::Drawing::Size(432, 54);
			this->changePasswordToolStripMenuItem->Text = L"Change password";
			this->changePasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::changePasswordToolStripMenuItem_Click);
			// 
			// deletePasswordToolStripMenuItem
			// 
			this->deletePasswordToolStripMenuItem->Name = L"deletePasswordToolStripMenuItem";
			this->deletePasswordToolStripMenuItem->Size = System::Drawing::Size(432, 54);
			this->deletePasswordToolStripMenuItem->Text = L"Delete password";
			this->deletePasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deletePasswordToolStripMenuItem_Click);
			// 
			// backupPasswordToolStripMenuItem
			// 
			this->backupPasswordToolStripMenuItem->Name = L"backupPasswordToolStripMenuItem";
			this->backupPasswordToolStripMenuItem->Size = System::Drawing::Size(432, 54);
			this->backupPasswordToolStripMenuItem->Text = L"Backup password";
			this->backupPasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::backupPasswordToolStripMenuItem_Click);
			// 
			// generatePasswordToolStripMenuItem
			// 
			this->generatePasswordToolStripMenuItem->Name = L"generatePasswordToolStripMenuItem";
			this->generatePasswordToolStripMenuItem->Size = System::Drawing::Size(432, 54);
			this->generatePasswordToolStripMenuItem->Text = L"Generate password";
			this->generatePasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generatePasswordToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 879);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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

		if (String::IsNullOrEmpty(inputMain->Text)) {

			MessageBox::Show("Enter the file name first!", "Save Net");
			return;

		}
		else {

			String^ file_name = inputMain->Text;
			std::string file_name_convert = ConvertString(file_name);
			EncryptFileNet(file_name_convert);

		}

		

	}
	private: System::Void decryptBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (String::IsNullOrEmpty(inputMain->Text)) {

			MessageBox::Show("Enter the file name first!", "Save Net");
			return;

		}
		else {

			String^ file_name = inputMain->Text;
			std::string file_name_convert = ConvertString(file_name);
			DecryptFileNet(file_name_convert);

		}

		

	}
	private: System::Void viewBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (String::IsNullOrEmpty(inputMain->Text)) {

			MessageBox::Show("Enter the file name first!", "Save Net");
			return;

		}
		else {

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

	private: System::Void setPass_Click(System::Object^ sender, System::EventArgs^ e) {

		std::ifstream check("password.txt");

		bool result = check.good();

		if (result == true) {

			MessageBox::Show("Password already setted!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;

		}
		else {

			String^ filename = inputMain->Text;
			std::string filename_convert = ConvertString(filename);

			if (String::IsNullOrEmpty(filename)) {

				MessageBox::Show("Enter the password first!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
			else {

				System::Windows::Forms::DialogResult result = MessageBox::Show(
					"Are you sure you want to set local password from the input?",
					"SaveNet",
					MessageBoxButtons::YesNo,
					MessageBoxIcon::Question);

				if (result == System::Windows::Forms::DialogResult::Yes) {

					WritePassword(filename_convert);
					EncryptPassword();

				}
				else {

				}

			}

		}



	}
	private: System::Void generateFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		inputMain->Text = gcnew String(GenerateNameFile().c_str());

	}
	private: System::Void deleteFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

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
	private: System::Void snExtensionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ filename = inputMain->Text;
		secondText->Clear();
		std::string filename_convert = ConvertString(filename);

		UseExtension(filename_convert);

	}
	private: System::Void setLocalPasswordToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		std::ifstream check("password.txt");

		bool result = check.good();

		if (result == true) {

			MessageBox::Show("Password already setted!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;

		}
		else {

			SetPassword^ newSetPassword = gcnew SetPassword();
			newSetPassword->Show();

		}

	}
	private: System::Void createFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ text = inputMain->Text;
		std::string text_convert = ConvertString(text);

		CreateUserFile(text_convert + ".txt");

	}
	private: System::Void creatorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		creator();

	}
	private: System::Void deletePasswordToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checkpassfile() == true) {

			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"Are you sure you want to delete the local password?",
				"SaveNet",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {

				DeletePassword();

			}
			else {

			}

		}
		else {

			MessageBox::Show("Password don't exist!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}


	}
	private: System::Void changePasswordToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ new_pass = inputMain->Text;
		std::string new_pass_convert = ConvertString(new_pass);

		if (checkpassfile() == true) {

			if (String::IsNullOrEmpty(new_pass)) {

				MessageBox::Show("Enter the new password in the input first!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;

			}
			else {

				ChangePassword(new_pass_convert);
				MessageBox::Show("New password setted!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}

		}
		else {

			MessageBox::Show("Password don't exist!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

	}
	private: System::Void backupPasswordToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checkpassfile() == true) {

			BackUpPassword();

		}
		else {

			MessageBox::Show("Password don't exist!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

	}
	private: System::Void generatePasswordToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checkpassfile() == true) {

			MessageBox::Show("Password already exist!", "SaveNet", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
		else {

			std::string input_text = PasswordGenerator();
			String^ input_text_convert = gcnew String(input_text.c_str());

			inputMain->Text = input_text_convert;

			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"Are you sure you want to set the generated local password?",
				"SaveNet",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {

				std::ofstream writetopassfile("password.txt");

				writetopassfile << input_text;

				writetopassfile.close();

				SetFileAttributesA("password.txt", FILE_ATTRIBUTE_HIDDEN);

				EncryptPassword();

			}
			else {


			}

		}

	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
private: System::Void testToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	SetPassword^ newSetPassword = gcnew SetPassword();
	newSetPassword->Show();

}
};
}