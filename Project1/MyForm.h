#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Label^ label1;

	protected:

	private: System::Windows::Forms::Button^ btnadd;








	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnMulti;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btnsub;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnMulti = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnsub = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(314, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N/A";
			// 
			// btnadd
			// 
			this->btnadd->BackColor = System::Drawing::Color::Green;
			this->btnadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnadd->Location = System::Drawing::Point(110, 226);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(117, 87);
			this->btnadd->TabIndex = 2;
			this->btnadd->Text = L"+";
			this->btnadd->UseVisualStyleBackColor = false;
			this->btnadd->Click += gcnew System::EventHandler(this, &MyForm::btnadd_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(553, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 32);
			this->label4->TabIndex = 9;
			this->label4->Text = L"=";
			// 
			// btnMulti
			// 
			this->btnMulti->BackColor = System::Drawing::Color::Green;
			this->btnMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMulti->Location = System::Drawing::Point(356, 226);
			this->btnMulti->Name = L"btnMulti";
			this->btnMulti->Size = System::Drawing::Size(117, 87);
			this->btnMulti->TabIndex = 10;
			this->btnMulti->Text = L"X";
			this->btnMulti->UseVisualStyleBackColor = false;
			this->btnMulti->Click += gcnew System::EventHandler(this, &MyForm::btnMulti_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::Green;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(479, 226);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(117, 87);
			this->btnDivide->TabIndex = 11;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->UseWaitCursor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
			// 
			// btnsub
			// 
			this->btnsub->BackColor = System::Drawing::Color::Green;
			this->btnsub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsub->Location = System::Drawing::Point(233, 226);
			this->btnsub->Name = L"btnsub";
			this->btnsub->Size = System::Drawing::Size(117, 87);
			this->btnsub->TabIndex = 12;
			this->btnsub->Text = L"-";
			this->btnsub->UseVisualStyleBackColor = false;
			this->btnsub->Click += gcnew System::EventHandler(this, &MyForm::btnsub_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(139, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 34);
			this->textBox1->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(381, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 34);
			this->textBox2->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSalmon;
			this->ClientSize = System::Drawing::Size(710, 447);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnsub);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMulti);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"s";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnadd_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "+";
	double result = System::Convert::ToDouble(textBox1->Text) + System::Convert::ToDouble(textBox2->Text);
	label4->Text = "=" + System::Convert::ToString(result);
}
private: System::Void btnsub_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "-";
	double result = System::Convert::ToDouble(textBox1->Text) - System::Convert::ToDouble(textBox2->Text);
	label4->Text = "=" + System::Convert::ToString(result);
}
private: System::Void btnMulti_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "X";
	double result = System::Convert::ToDouble(textBox1->Text) * System::Convert::ToDouble(textBox2->Text);
	label4->Text = "=" + System::Convert::ToString(result);
}
private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "/";
	double result = System::Convert::ToDouble(textBox1->Text) * System::Convert::ToDouble(textBox2->Text);
	label4->Text = "=" + System::Convert::ToString(result);
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

};

}
