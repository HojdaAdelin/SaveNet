#pragma once
#include "../Include.h"
#include "../Password.h"

namespace SaveNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChangeLocalPassword
	/// </summary>
	public ref class ChangeLocalPassword : public System::Windows::Forms::Form
	{
	public:
		ChangeLocalPassword(void)
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
		~ChangeLocalPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ newPass;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->newPass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(419, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter password:";
			// 
			// newPass
			// 
			this->newPass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->newPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newPass->Location = System::Drawing::Point(247, 268);
			this->newPass->Name = L"newPass";
			this->newPass->Size = System::Drawing::Size(610, 44);
			this->newPass->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(588, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 79);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChangeLocalPassword::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(247, 362);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(269, 79);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ChangeLocalPassword::button2_Click);
			// 
			// ChangeLocalPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1098, 781);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->newPass);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximumSize = System::Drawing::Size(1124, 852);
			this->MinimumSize = System::Drawing::Size(1124, 852);
			this->Name = L"ChangeLocalPassword";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ChangeLocalPassword";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (String::IsNullOrEmpty(newPass->Text)) {

		MessageBox::Show("Enter the new password first!", "Save Net");
		return;

	}
	else {

		String^ getPassword = newPass->Text;
		std::string convertPassword = ConvertString(getPassword);
		ChangePassword(convertPassword);
		MessageBox::Show("Your new password: " + getPassword, "Save Net");
		this->Close();
	}

}
};
}
