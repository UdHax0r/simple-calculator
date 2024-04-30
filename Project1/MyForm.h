#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;

	public ref class MyForm : public System::Windows::Forms::Form {

#pragma region Constructor and destructor.
	public:
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		~MyForm() {
			if (components) {
				delete components;
			}
		}
#pragma endregion

#pragma region WinForm Fields.
	private: System::Windows::Forms::Label ^operationLabel;
	private: System::Windows::Forms::Button ^btnAdd;
	protected:


	protected:


	private: System::Windows::Forms::Label ^resultLabel;
	private: System::Windows::Forms::Button ^btnMultiply;










	private: System::Windows::Forms::Button ^btnDivide;
	private: System::Windows::Forms::Button ^btnSub;

	private: System::Windows::Forms::TextBox ^firstValueTextBox;
	private: System::Windows::Forms::TextBox ^secondValueTextBox;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			this->operationLabel = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->firstValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->secondValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// operationLabel
			// 
			this->operationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operationLabel->Location = System::Drawing::Point(314, 81);
			this->operationLabel->Name = L"operationLabel";
			this->operationLabel->Size = System::Drawing::Size(61, 41);
			this->operationLabel->TabIndex = 1;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Green;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(110, 226);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(117, 87);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultLabel->Location = System::Drawing::Point(553, 83);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(0, 31);
			this->resultLabel->TabIndex = 9;
			this->resultLabel->Click += gcnew System::EventHandler(this, &MyForm::resultLabel_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::Color::Green;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(356, 226);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(117, 87);
			this->btnMultiply->TabIndex = 5;
			this->btnMultiply->Text = L"x";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::btnMulti_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::Green;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(479, 226);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(117, 87);
			this->btnDivide->TabIndex = 6;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->UseWaitCursor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
			// 
			// btnSub
			// 
			this->btnSub->BackColor = System::Drawing::Color::Green;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(233, 226);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(117, 87);
			this->btnSub->TabIndex = 4;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::btnSub_Click);
			// 
			// firstValueTextBox
			// 
			this->firstValueTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->firstValueTextBox->Location = System::Drawing::Point(139, 81);
			this->firstValueTextBox->Name = L"firstValueTextBox";
			this->firstValueTextBox->Size = System::Drawing::Size(153, 33);
			this->firstValueTextBox->TabIndex = 1;
			this->firstValueTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::firstValueTextBox_TextChanged);
			// 
			// secondValueTextBox
			// 
			this->secondValueTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->secondValueTextBox->Location = System::Drawing::Point(381, 81);
			this->secondValueTextBox->Name = L"secondValueTextBox";
			this->secondValueTextBox->Size = System::Drawing::Size(153, 33);
			this->secondValueTextBox->TabIndex = 2;
			this->secondValueTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::secondValueTextBox_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSalmon;
			this->ClientSize = System::Drawing::Size(710, 447);
			this->Controls->Add(this->secondValueTextBox);
			this->Controls->Add(this->firstValueTextBox);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->operationLabel);
			this->Name = L"MyForm";
			this->Text = L"Simple Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Methods.
		//private: System::Void resultLabel_SetText(System::String ^text) {
		//	resultLabel->Text = L"= " + text;
		//}

		//private: System::Void resultLabel_SetText(const double value) {
		//	resultLabel->Text = L"= " + value
		//}

	private: System::Void ResetLabels() {
		resultLabel->Text = L"";
		operationLabel->Text = L"";
	}

	private: System::Void ResultLabelEvent(System::Object ^source, System::Timers::ElapsedEventArgs ^args) {

	}

	private: System::Void resultLabel_Click(System::Object ^sender, System::EventArgs ^e) {
		if (resultLabel->Text != L"") {
			//System::Timers::Timer ^t = gcnew System::Timers::Timer(5000);
			//t->Elapsed += ResultLabelEvent;
			Clipboard::SetText(resultLabel->Text->Substring(2));
		}
	}

	private: System::Void btnAdd_Click(System::Object ^sender, System::EventArgs ^e) {
		try {
			operationLabel->Text = L"+";
			const double result =
				System::Convert::ToDouble(firstValueTextBox->Text)
				+ System::Convert::ToDouble(secondValueTextBox->Text);
			resultLabel->Text = L"= " + result;
		} catch (System::FormatException ^e) {
			ResetLabels();
		}
	}

	private: System::Void btnSub_Click(System::Object ^sender, System::EventArgs ^e) {
		try {
			operationLabel->Text = L"-";
			const double result =
				System::Convert::ToDouble(firstValueTextBox->Text)
				- System::Convert::ToDouble(secondValueTextBox->Text);
			resultLabel->Text = L"= " + result;
		} catch (System::FormatException ^e) {
			ResetLabels();
		}
	}

	private: System::Void btnMulti_Click(System::Object ^sender, System::EventArgs ^e) {
		try {
			operationLabel->Text = L"x";
			const double result =
				System::Convert::ToDouble(firstValueTextBox->Text)
				* System::Convert::ToDouble(secondValueTextBox->Text);
			resultLabel->Text = L"= " + result;
		} catch (System::FormatException ^e) {
			ResetLabels();
		}
	}

	private: System::Void btnDivide_Click(System::Object ^sender, System::EventArgs ^e) {
		try {
			operationLabel->Text = L"/";
			const double first = System::Convert::ToDouble(firstValueTextBox->Text);
			const double second = System::Convert::ToDouble(secondValueTextBox->Text);

			if (first == 0 || second == 0)
				throw gcnew System::FormatException();

			resultLabel->Text = L"= " + first / second;
		} catch (System::FormatException ^e) {
			ResetLabels();
		}
	}

	private: System::Void secondValueTextBox_TextChanged(System::Object ^sender, System::EventArgs ^e) {
		if (secondValueTextBox->Text == L"") {
			ResetLabels();
		}
	}

	private: System::Void firstValueTextBox_TextChanged(System::Object ^sender, System::EventArgs ^e) {
		if (firstValueTextBox->Text == L"") {
			ResetLabels();
		}
	}

	private: System::Void MyForm_Load(System::Object ^sender, System::EventArgs ^e) {
	}

	};
#pragma endregion

}
