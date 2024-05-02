#pragma once

namespace Project1 {

                using namespace System;
                using namespace System::Data;
                using namespace System::Drawing;
                using namespace System::Collections;
                using namespace System::ComponentModel;
                using namespace System::Windows::Forms;
                using namespace System::Collections::Generic;

                public ref class CalculatorOperationChars {
                public:

	            static bool Contains(char c) {
		        return CalculatorOperationChars::instance->opChars->Contains(c);
	            }

                private:
	            static CalculatorOperationChars^ instance; // Singleton instance.

	            // Class fields:
	            List<char>^ opChars = gcnew List<char>();

	            CalculatorOperationChars() {
		        this->opChars->Add('+');
		        this->opChars->Add('-');
		        this->opChars->Add('x');
		        this->opChars->Add('/');
	            }
                };

                /// <summary>
                /// Summary for MyForm
                /// </summary>
                public ref class MyForm : public System::Windows::Forms::Form
                {
                public:
	            MyForm(void)
	            {
		        InitializeComponent();
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


                protected:

                private: System::Windows::Forms::Button^ btnadd;









                private: System::Windows::Forms::Button^ btnMulti;
                private: System::Windows::Forms::Button^ btnDivide;
                private: System::Windows::Forms::Button^ btnsub;
                private: System::Windows::Forms::TextBox^ textBox1;

                private: System::Windows::Forms::Button^ button1;
                private: System::Windows::Forms::Panel^ panel1;
                private: System::Windows::Forms::Button^ button8;
                private: System::Windows::Forms::Button^ button7;
                private: System::Windows::Forms::Button^ button5;
                private: System::Windows::Forms::Button^ button4;


                private: System::Windows::Forms::Button^ button6;


                private: System::Windows::Forms::Button^ button3;
                private: System::Windows::Forms::Button^ button2;
                private: System::Windows::Forms::Button^ buttonEqual;
                private: System::Windows::Forms::Button^ buttonCLEAR;




                private: System::Windows::Forms::Button^ button0;

                private: System::Windows::Forms::Button^ button9;




                protected:

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
		        this->btnadd = (gcnew System::Windows::Forms::Button());
		        this->btnMulti = (gcnew System::Windows::Forms::Button());
		        this->btnDivide = (gcnew System::Windows::Forms::Button());
		        this->btnsub = (gcnew System::Windows::Forms::Button());
		        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		        this->button1 = (gcnew System::Windows::Forms::Button());
		        this->panel1 = (gcnew System::Windows::Forms::Panel());
		        this->buttonEqual = (gcnew System::Windows::Forms::Button());
		        this->buttonCLEAR = (gcnew System::Windows::Forms::Button());
		        this->button0 = (gcnew System::Windows::Forms::Button());
		        this->button9 = (gcnew System::Windows::Forms::Button());
		        this->button8 = (gcnew System::Windows::Forms::Button());
		        this->button7 = (gcnew System::Windows::Forms::Button());
		        this->button5 = (gcnew System::Windows::Forms::Button());
		        this->button4 = (gcnew System::Windows::Forms::Button());
		        this->button6 = (gcnew System::Windows::Forms::Button());
		        this->button3 = (gcnew System::Windows::Forms::Button());
		        this->button2 = (gcnew System::Windows::Forms::Button());
		        this->panel1->SuspendLayout();
		        this->SuspendLayout();
		        // 
		        // btnadd
		        // 
		        this->btnadd->BackColor = System::Drawing::Color::Green;
		        this->btnadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->btnadd->Location = System::Drawing::Point(289, 30);
		        this->btnadd->Name = L"btnadd";
		        this->btnadd->Size = System::Drawing::Size(86, 66);
		        this->btnadd->TabIndex = 2;
		        this->btnadd->Text = L"+";
		        this->btnadd->UseVisualStyleBackColor = false;
		        this->btnadd->Click += gcnew System::EventHandler(this, &MyForm::btnadd_Click);
		        // 
		        // btnMulti
		        // 
		        this->btnMulti->BackColor = System::Drawing::Color::Green;
		        this->btnMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->btnMulti->Location = System::Drawing::Point(289, 178);
		        this->btnMulti->Name = L"btnMulti";
		        this->btnMulti->Size = System::Drawing::Size(86, 66);
		        this->btnMulti->TabIndex = 10;
		        this->btnMulti->Text = L"x";
		        this->btnMulti->UseVisualStyleBackColor = false;
		        this->btnMulti->Click += gcnew System::EventHandler(this, &MyForm::btnMulti_Click);
		        // 
		        // btnDivide
		        // 
		        this->btnDivide->BackColor = System::Drawing::Color::Green;
		        this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->btnDivide->Location = System::Drawing::Point(284, 250);
		        this->btnDivide->Name = L"btnDivide";
		        this->btnDivide->Size = System::Drawing::Size(86, 66);
		        this->btnDivide->TabIndex = 11;
		        this->btnDivide->Text = L"/";
		        this->btnDivide->UseVisualStyleBackColor = false;
		        this->btnDivide->UseWaitCursor = true;
		        this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
		        // 
		        // btnsub
		        // 
		        this->btnsub->BackColor = System::Drawing::Color::Green;
		        this->btnsub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->btnsub->Location = System::Drawing::Point(289, 102);
		        this->btnsub->Name = L"btnsub";
		        this->btnsub->Size = System::Drawing::Size(86, 66);
		        this->btnsub->TabIndex = 12;
		        this->btnsub->Text = L"-";
		        this->btnsub->UseVisualStyleBackColor = false;
		        this->btnsub->Click += gcnew System::EventHandler(this, &MyForm::btnsub_Click);
		        // 
		        // textBox1
		        // 
		        this->textBox1->Cursor = System::Windows::Forms::Cursors::No;
		        this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->textBox1->Location = System::Drawing::Point(16, 29);
		        this->textBox1->Name = L"textBox1";
		        this->textBox1->ReadOnly = true;
		        this->textBox1->Size = System::Drawing::Size(386, 38);
		        this->textBox1->TabIndex = 0;
		        this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
		        this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
		        // 
		        // button1
		        // 
		        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button1->Location = System::Drawing::Point(8, 30);
		        this->button1->Name = L"button1";
		        this->button1->Size = System::Drawing::Size(86, 66);
		        this->button1->TabIndex = 3;
		        this->button1->Text = L"1";
		        this->button1->UseVisualStyleBackColor = true;
		        this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		        // 
		        // panel1
		        // 
		        this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
		        this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
		        this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		        this->panel1->Controls->Add(this->buttonEqual);
		        this->panel1->Controls->Add(this->buttonCLEAR);
		        this->panel1->Controls->Add(this->button0);
		        this->panel1->Controls->Add(this->button9);
		        this->panel1->Controls->Add(this->button8);
		        this->panel1->Controls->Add(this->button7);
		        this->panel1->Controls->Add(this->btnadd);
		        this->panel1->Controls->Add(this->btnMulti);
		        this->panel1->Controls->Add(this->btnDivide);
		        this->panel1->Controls->Add(this->btnsub);
		        this->panel1->Controls->Add(this->button5);
		        this->panel1->Controls->Add(this->button4);
		        this->panel1->Controls->Add(this->button6);
		        this->panel1->Controls->Add(this->button3);
		        this->panel1->Controls->Add(this->button2);
		        this->panel1->Controls->Add(this->button1);
		        this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
		        this->panel1->Location = System::Drawing::Point(12, 97);
		        this->panel1->Name = L"panel1";
		        this->panel1->Size = System::Drawing::Size(386, 332);
		        this->panel1->TabIndex = 16;
		        // 
		        // buttonEqual
		        // 
		        this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->buttonEqual->Location = System::Drawing::Point(192, 250);
		        this->buttonEqual->Name = L"buttonEqual";
		        this->buttonEqual->Size = System::Drawing::Size(86, 66);
		        this->buttonEqual->TabIndex = 16;
		        this->buttonEqual->Text = L"=";
		        this->buttonEqual->UseVisualStyleBackColor = true;
		        this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
		        // 
		        // buttonCLEAR
		        // 
		        this->buttonCLEAR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->buttonCLEAR->Location = System::Drawing::Point(100, 250);
		        this->buttonCLEAR->Name = L"buttonCLEAR";
		        this->buttonCLEAR->Size = System::Drawing::Size(86, 66);
		        this->buttonCLEAR->TabIndex = 15;
		        this->buttonCLEAR->Text = L"CE";
		        this->buttonCLEAR->UseVisualStyleBackColor = true;
		        this->buttonCLEAR->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
		        // 
		        // button0
		        // 
		        this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button0->Location = System::Drawing::Point(8, 250);
		        this->button0->Name = L"button0";
		        this->button0->Size = System::Drawing::Size(86, 66);
		        this->button0->TabIndex = 14;
		        this->button0->Text = L"0";
		        this->button0->UseVisualStyleBackColor = true;
		        this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
		        // 
		        // button9
		        // 
		        this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button9->Location = System::Drawing::Point(192, 178);
		        this->button9->Name = L"button9";
		        this->button9->Size = System::Drawing::Size(86, 66);
		        this->button9->TabIndex = 13;
		        this->button9->Text = L"9";
		        this->button9->UseVisualStyleBackColor = true;
		        this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
		        // 
		        // button8
		        // 
		        this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button8->Location = System::Drawing::Point(100, 178);
		        this->button8->Name = L"button8";
		        this->button8->Size = System::Drawing::Size(86, 66);
		        this->button8->TabIndex = 10;
		        this->button8->Text = L"8";
		        this->button8->UseVisualStyleBackColor = true;
		        this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
		        // 
		        // button7
		        // 
		        this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button7->Location = System::Drawing::Point(8, 178);
		        this->button7->Name = L"button7";
		        this->button7->Size = System::Drawing::Size(86, 66);
		        this->button7->TabIndex = 9;
		        this->button7->Text = L"7";
		        this->button7->UseVisualStyleBackColor = true;
		        this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
		        // 
		        // button5
		        // 
		        this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button5->Location = System::Drawing::Point(100, 106);
		        this->button5->Name = L"button5";
		        this->button5->Size = System::Drawing::Size(86, 66);
		        this->button5->TabIndex = 8;
		        this->button5->Text = L"5";
		        this->button5->UseVisualStyleBackColor = true;
		        this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
		        // 
		        // button4
		        // 
		        this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button4->Location = System::Drawing::Point(8, 106);
		        this->button4->Name = L"button4";
		        this->button4->Size = System::Drawing::Size(86, 66);
		        this->button4->TabIndex = 7;
		        this->button4->Text = L"4";
		        this->button4->UseVisualStyleBackColor = true;
		        this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
		        // 
		        // button6
		        // 
		        this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button6->Location = System::Drawing::Point(192, 105);
		        this->button6->Name = L"button6";
		        this->button6->Size = System::Drawing::Size(86, 66);
		        this->button6->TabIndex = 6;
		        this->button6->Text = L"6";
		        this->button6->UseVisualStyleBackColor = true;
		        this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
		        // 
		        // button3
		        // 
		        this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button3->Location = System::Drawing::Point(192, 30);
		        this->button3->Name = L"button3";
		        this->button3->Size = System::Drawing::Size(86, 66);
		        this->button3->TabIndex = 5;
		        this->button3->Text = L"3";
		        this->button3->UseVisualStyleBackColor = true;
		        this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
		        // 
		        // button2
		        // 
		        this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			    static_cast<System::Byte>(0)));
		        this->button2->Location = System::Drawing::Point(100, 30);
		        this->button2->Name = L"button2";
		        this->button2->Size = System::Drawing::Size(86, 66);
		        this->button2->TabIndex = 4;
		        this->button2->Text = L"2";
		        this->button2->UseVisualStyleBackColor = true;
		        this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
		        // 
		        // MyForm
		        // 
		        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		        this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
		        this->ClientSize = System::Drawing::Size(414, 441);
		        this->Controls->Add(this->panel1);
		        this->Controls->Add(this->textBox1);
		        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		        this->Name = L"MyForm";
		        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		        this->Text = L"Calculator";
		        this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
		        this->panel1->ResumeLayout(false);
		        this->ResumeLayout(false);
		        this->PerformLayout();

	            }
#pragma endregion	

                private:

	            double num1, num2;
	            bool canCalculate;
	            String^ sign;

                private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
                }

                private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = textBox1->Text + "1";
                }
                private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = textBox1->Text + "2";
                }
                private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = textBox1->Text + "3";
                }
                private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = textBox1->Text + "4";
                }
                private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = textBox1->Text + "5";
                }
                private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = textBox1->Text + "6";
                }
                private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	            textBox1->Text = textBox1->Text + "7";
                }
                private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = textBox1->Text + "8";
                }
                private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = textBox1->Text + "9";

                }
                private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = textBox1->Text + "0";

                }

                private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
	            textBox1->Text = "";
	            num1 = 0;
	            num2 = 0;
	            sign = "";
                }
                private: System::Void btnadd_Click(System::Object^ sender, System::EventArgs^ e) {
	            if (textBox1->Text != "") {
		        num1 = System::Convert::ToDouble(textBox1->Text);
		        textBox1->Text = "+";
		        sign = "+";
	            }
                }
                private: System::Void btnsub_Click(System::Object^ sender, System::EventArgs^ e) {
	            if (textBox1->Text != "") {
		        num1 = System::Convert::ToDouble(textBox1->Text);
		        textBox1->Text = "-";
		        sign = "-";
	            }
                }
                private: System::Void btnMulti_Click(System::Object^ sender, System::EventArgs^ e) {
	            if (textBox1->Text != "") {
		        num1 = System::Convert::ToDouble(textBox1->Text);
		        textBox1->Text = "*";
		        sign = "*";
	            }
                }
                private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	            if (textBox1->Text != "") {
		        num1 = System::Convert::ToDouble(textBox1->Text);
		        textBox1->Text = "/";
		        sign = "/";

	            }
                }
                private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	            double result;
	            if (sign == "+" && textBox1->Text != "") {

		        num2 = System::Convert::ToDouble(textBox1->Text);
		        result = num1 + num2;
		        textBox1->Text = System::Convert::ToString(result);

	            }
	            else if (sign == "-" && textBox1->Text != "") {

		        num2 = System::Convert::ToDouble(textBox1->Text);
		        result = num1 - num2;
		        textBox1->Text = System::Convert::ToString(result);

	            }
	            else if (sign == "*" && textBox1->Text != "") {

		        num2 = System::Convert::ToDouble(textBox1->Text);
		        result = num1 * num2;
		        textBox1->Text = System::Convert::ToString(result);

	            }
	            else if (sign == "/" && textBox1->Text != "") {

		        num2 = System::Convert::ToDouble(textBox1->Text);
		        result = num1 / num2;
		        textBox1->Text = System::Convert::ToString(result);

	            }
                }
                private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	            //         if (System::String::IsNullOrWhiteSpace(textBox1->Text))
		           //      return;

	            //         try {
		           //      num1 = System::Convert::ToDouble(textBox1->Text);
	            //         }
	            //         catch (System::FormatException^ e) {
		           //      bool foundOp = false;
		           //      for (int i = 0; i < textBox1->Text->Length; ++i) {
			          //   char c = textBox1->Text[i];
			          //   //if (System::Char::IsDigit(c))
			          //   //	;
			          //   /*else*/ if (opChars->Contains(c)) {
				         //if (foundOp) return;
				         //foundOp = true;
			          //   }
		           //      }
	            //         }
                }
                };
}