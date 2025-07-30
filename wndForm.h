#pragma once

namespace LoadCPU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for wndForm
	/// </summary>
	public ref class wndForm : public System::Windows::Forms::Form
	{
	public:
		wndForm(void)
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
		~wndForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBegin;
	private: System::Windows::Forms::Button^ btnEnd;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ cntThreaders;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(wndForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBegin = (gcnew System::Windows::Forms::Button());
			this->btnEnd = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cntThreaders = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cntThreaders))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(480, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Load CPU";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnBegin
			// 
			this->btnBegin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnBegin->Location = System::Drawing::Point(91, 120);
			this->btnBegin->Name = L"btnBegin";
			this->btnBegin->Size = System::Drawing::Size(129, 111);
			this->btnBegin->TabIndex = 1;
			this->btnBegin->Text = L"BEGIN";
			this->btnBegin->UseVisualStyleBackColor = false;
			this->btnBegin->Click += gcnew System::EventHandler(this, &wndForm::btnBegin_Click);
			// 
			// btnEnd
			// 
			this->btnEnd->BackColor = System::Drawing::SystemColors::Control;
			this->btnEnd->Enabled = false;
			this->btnEnd->Location = System::Drawing::Point(292, 120);
			this->btnEnd->Name = L"btnEnd";
			this->btnEnd->Size = System::Drawing::Size(129, 111);
			this->btnEnd->TabIndex = 2;
			this->btnEnd->Text = L"END";
			this->btnEnd->UseVisualStyleBackColor = false;
			this->btnEnd->Click += gcnew System::EventHandler(this, &wndForm::btnEnd_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Count threaders";
			// 
			// cntThreaders
			// 
			this->cntThreaders->Location = System::Drawing::Point(344, 288);
			this->cntThreaders->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 256, 0, 0, 0 });
			this->cntThreaders->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->cntThreaders->Name = L"cntThreaders";
			this->cntThreaders->Size = System::Drawing::Size(105, 44);
			this->cntThreaders->TabIndex = 4;
			this->cntThreaders->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->cntThreaders->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// wndForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(500, 400);
			this->Controls->Add(this->cntThreaders);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnEnd);
			this->Controls->Add(this->btnBegin);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->MaximizeBox = false;
			this->Name = L"wndForm";
			this->Text = L"Load CPU";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cntThreaders))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btnBegin_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btnEnd_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
