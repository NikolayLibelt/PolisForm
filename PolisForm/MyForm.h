#pragma once
#include "ArithmetikEx.h"
#include <string>
#include <msclr\marshal_cppstd.h>

namespace PolisForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	Table variables;
	string str;
	ArithmetikEx A;
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ Textres;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Textres = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���������:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(137, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1105, 29);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(512, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(309, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"�������� ������� ����������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"������� ����������:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(27, 694);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 29);
			this->button2->TabIndex = 5;
			this->button2->Text = L"�������� �����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Textres
			// 
			this->Textres->AutoSize = true;
			this->Textres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Textres->Location = System::Drawing::Point(306, 415);
			this->Textres->Name = L"Textres";
			this->Textres->Size = System::Drawing::Size(124, 39);
			this->Textres->TabIndex = 6;
			this->Textres->Text = L"�����:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Desktop;
			this->dataGridView1->Location = System::Drawing::Point(12, 165);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 4;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.25F));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Size = System::Drawing::Size(240, 523);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(306, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 39);
			this->label3->TabIndex = 8;
			this->label3->Text = L"�����:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1278, 735);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Textres);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		bool is_num(String^ s) {
			int  i = 0;
			int l;
			if (i == 0 && s[i] == '-') {i = 1;}
			if (s->Length>i) {
				l = 0;
				for (int i = 0; i < s->Length; i++) {
					if (s[i] == ',') {
						if (l == 1) { return false; }
						l = 1;
					}
					else{
						if (!Char::IsNumber(s[i])) {
							return false;
						}
					}
					
				}
			}
			return true;
		}
		void cleardataGrid() {
			dataGridView1->RowCount = 0;
			dataGridView1->ColumnCount = 0;
		}
		void heightdataGrid(int k) {
			if (k > 0) {
				dataGridView1->RowTemplate->Height = 523 / k;
			}
			
		}
		void addTable(int k) {
			dataGridView1->RowCount = k;
			dataGridView1->ColumnCount = 2;
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		str = msclr::interop::marshal_as<std::string>(textBox1->Text);
		A = ArithmetikEx(str);
		int k = A.GetTablevarials().GetCount();
		cleardataGrid();
		heightdataGrid(k);
		addTable(k);
		for (int i = 0; i < k; i++) {
			string m = A.GetTablevarials()[i].Getname();
			dataGridView1->Rows[i]->Cells[0]->Value = gcnew String(m.c_str());
			if (m > "0" && m < "9") {
				dataGridView1->Rows[i]->Cells[1]->Value =Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value);
			}
		}
		string pol = A.GetA().GetStringPolis();
		label3->Text = "�����: " + gcnew String(pol.c_str());
	}
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int i = dataGridView1->CurrentRow->Index;
	int j = dataGridView1->CurrentCell->ColumnIndex;
	str = msclr::interop::marshal_as<std::string>(textBox1->Text);
	A = ArithmetikEx(str);
	variables = A.GetTablevarials();
	if (j == 0) {dataGridView1->Rows[i]->Cells[j]->Value = gcnew String(variables[i].Getname().c_str());}
	string m = variables[i].Getname();
	if (m[0] > '0' && m[0] < '9') {dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(variables[i].Getname().c_str());}
	if (j == 1) {
		float k=0;
		if (is_num(Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value))) {
			k = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		}
		A.SetVar(i,k);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < dataGridView1->RowCount; i++) {
		float k = 0;
		if (is_num(Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value))) {
			k = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		}
		A.SetVar(i, k);
	}
	float result = A.calculateEx();
	Textres->Text = "�����: " + Convert::ToString(result);
}
};
}
