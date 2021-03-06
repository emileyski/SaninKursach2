#pragma once

namespace TicketHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для InfoForm
	/// </summary>
	public ref class InfoForm : public System::Windows::Forms::Form
	{
	public:
		InfoForm(int tabIndex)
		{
			InitializeComponent();
			tabControl1->SelectedIndex = TabIndex;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~InfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ RegAuthWindowInfo;

	private: System::Windows::Forms::TabPage^ adminWindowInfo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label3;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoForm::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->RegAuthWindowInfo = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->adminWindowInfo = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1->SuspendLayout();
			this->RegAuthWindowInfo->SuspendLayout();
			this->adminWindowInfo->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Red;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 15, System::Drawing::FontStyle::Bold));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnExit->Location = System::Drawing::Point(446, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(50, 50);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &InfoForm::btnExit_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(12, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(247, 30);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Welcome to info page!";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->RegAuthWindowInfo);
			this->tabControl1->Controls->Add(this->adminWindowInfo);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12));
			this->tabControl1->Location = System::Drawing::Point(0, 68);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(500, 553);
			this->tabControl1->TabIndex = 8;
			// 
			// RegAuthWindowInfo
			// 
			this->RegAuthWindowInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->RegAuthWindowInfo->Controls->Add(this->label1);
			this->RegAuthWindowInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16));
			this->RegAuthWindowInfo->ForeColor = System::Drawing::Color::White;
			this->RegAuthWindowInfo->Location = System::Drawing::Point(4, 37);
			this->RegAuthWindowInfo->Name = L"RegAuthWindowInfo";
			this->RegAuthWindowInfo->Padding = System::Windows::Forms::Padding(3);
			this->RegAuthWindowInfo->Size = System::Drawing::Size(492, 512);
			this->RegAuthWindowInfo->TabIndex = 0;
			this->RegAuthWindowInfo->Text = L"Registration/authorization window";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(431, 185);
			this->label1->TabIndex = 8;
			this->label1->Text = L"In this window YOU can log in\r\nor sign up an account\r\nAlso you should use only La"
				L"tin \r\nletters because Cyrillic \r\nare not supported";
			// 
			// adminWindowInfo
			// 
			this->adminWindowInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->adminWindowInfo->Controls->Add(this->label2);
			this->adminWindowInfo->Location = System::Drawing::Point(4, 37);
			this->adminWindowInfo->Name = L"adminWindowInfo";
			this->adminWindowInfo->Padding = System::Windows::Forms::Padding(3);
			this->adminWindowInfo->Size = System::Drawing::Size(492, 512);
			this->adminWindowInfo->TabIndex = 1;
			this->adminWindowInfo->Text = L"Admin window";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(469, 185);
			this->label2->TabIndex = 0;
			this->label2->Text = L"On the administrator window, the\r\nuser can add and edit theaters, \r\nadd and remov"
				L"e events. The data \r\nthat the user saves can be used \r\nwhen reusing the applicat"
				L"ion.";
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16));
			this->tabPage1->ForeColor = System::Drawing::Color::White;
			this->tabPage1->Location = System::Drawing::Point(4, 37);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(492, 512);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Visitor window";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(497, 222);
			this->label3->TabIndex = 0;
			this->label3->Text = L"In this window, the visitor can view \r\nall his purchased tickets, find this \r\nor "
				L"that event using different filters,\r\nbuy a ticket for it, if desired, he \r\ncan r"
				L"eturn the ticket to the box \r\noffice.";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 62);
			this->panel1->TabIndex = 6;
			// 
			// InfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(500, 621);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"InfoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InfoForm";
			this->Load += gcnew System::EventHandler(this, &InfoForm::InfoForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->RegAuthWindowInfo->ResumeLayout(false);
			this->RegAuthWindowInfo->PerformLayout();
			this->adminWindowInfo->ResumeLayout(false);
			this->adminWindowInfo->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void InfoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
