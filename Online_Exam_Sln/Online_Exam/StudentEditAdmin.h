#pragma once
#include "Database.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;


namespace Online_Exam {

	/// <summary>
	/// Summary for StudentEditAdmin
	/// </summary>
	public ref class StudentEditAdmin : public System::Windows::Forms::UserControl
	{
	private:
		OES ^ Access;
		DataSet ^dsa;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox1;

			 OleDbCommandBuilder^ cmdb;
	private: System::Windows::Forms::Label^  label1;
			 String ^ designation = "Student";
	public:
		StudentEditAdmin(void)
		{
			InitializeComponent();
			//
			this->radioButton1->Checked = true;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentEditAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  profList;
	private: System::Windows::Forms::Button^  btnUpdate;
	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->profList = (gcnew System::Windows::Forms::DataGridView());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profList))->BeginInit();
			this->SuspendLayout();
			// 
			// profList
			// 
			this->profList->AllowUserToAddRows = false;
			this->profList->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			this->profList->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->profList->BackgroundColor = System::Drawing::Color::White;
			this->profList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(11)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->profList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->profList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->profList->DefaultCellStyle = dataGridViewCellStyle3;
			this->profList->Location = System::Drawing::Point(33, 146);
			this->profList->Name = L"profList";
			this->profList->RowTemplate->Height = 24;
			this->profList->Size = System::Drawing::Size(1056, 342);
			this->profList->TabIndex = 1;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnUpdate->Location = System::Drawing::Point(471, 513);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(181, 47);
			this->btnUpdate->TabIndex = 2;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StudentEditAdmin::btnUpdate_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(122, 62);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(126, 35);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Student";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &StudentEditAdmin::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(733, 62);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(152, 35);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Professors";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &StudentEditAdmin::radioButton2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(373, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(333, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &StudentEditAdmin::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(185, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Enter Name or Username";
			// 
			// StudentEditAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->profList);
			this->Name = L"StudentEditAdmin";
			this->Size = System::Drawing::Size(1122, 593);
			this->Load += gcnew System::EventHandler(this, &StudentEditAdmin::StudentEditAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentEditAdmin_Load(System::Object^  sender, System::EventArgs^  e) {
				 Access = gcnew OES();
				 Access->ExecQuery("SELECT Username, FullName, Email, PhoneNo, IITG, Branch, isApproved FROM Users WHERE(Designation = 'Student')");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa, "Users");
				 profList->DataSource = dsa->Tables[0];
	}
	private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
				 cmdb = gcnew OleDbCommandBuilder(Access->DBDA);
				 Access->DBDA->Update(dsa, "Users");
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Clear();
				 designation = "Student";
				 Access = gcnew OES();
				 Access->ExecQuery("SELECT Username, FullName, Email, PhoneNo, IITG, Branch, isApproved FROM Users WHERE(Designation = 'Student')");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa, "Users");
				 profList->DataSource = dsa->Tables[0];
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Clear();
				 designation = "Professor";
				 Access = gcnew OES();
				 Access->ExecQuery("SELECT Username, FullName, Email, PhoneNo, IITG, Branch, isApproved FROM Users WHERE(Designation = 'Professor')");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa, "Users");
				 profList->DataSource = dsa->Tables[0];
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				Access = gcnew OES();
				Access->ExecQuery("SELECT Username, FullName, Email, PhoneNo, IITG, Branch, isApproved FROM Users WHERE(Designation = '" + designation + "' AND (FullName like '%" + textBox1->Text + "%' OR Username like '%" + textBox1->Text + "%'))");
				dsa = gcnew DataSet();
				Access->DBDA->Fill(dsa, "Users");
				profList->DataSource = dsa->Tables[0];
	}
};
}
