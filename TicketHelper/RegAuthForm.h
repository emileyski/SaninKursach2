#pragma once
#include <msclr\marshal_cppstd.h>
#include <vector>
#include "Admin.h"
#include "RegController.h"
#include "Event.h"
#include "AdminRoomForm.h"
#include "VisitorRoomForm.h"
#include "InfoForm.h"

using namespace std;

namespace TicketHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RegAuthForm
	/// </summary>
	public ref class RegAuthForm : public System::Windows::Forms::Form
	{
	public:
		RegAuthForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegAuthForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReg;
	protected:

	private: System::Windows::Forms::Button^ btnAuth;
	private: System::Windows::Forms::Panel^ panLog;
	protected:


	private: System::Windows::Forms::TextBox^ tbLogPass;


	private: System::Windows::Forms::TextBox^ tbLogLogin;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnTryAuth;
	private: System::Windows::Forms::Panel^ panPass;
	private: System::Windows::Forms::Button^ btnTryReg;
	private: System::Windows::Forms::TextBox^ tbRegLog;


	private: System::Windows::Forms::TextBox^ tbRegName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbRegPass;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbRegSurname;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::ComboBox^ cbUserType;
	private: System::Windows::Forms::Button^ InfoButton;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegAuthForm::typeid));
			this->btnReg = (gcnew System::Windows::Forms::Button());
			this->btnAuth = (gcnew System::Windows::Forms::Button());
			this->panLog = (gcnew System::Windows::Forms::Panel());
			this->btnTryAuth = (gcnew System::Windows::Forms::Button());
			this->tbLogPass = (gcnew System::Windows::Forms::TextBox());
			this->tbLogLogin = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panPass = (gcnew System::Windows::Forms::Panel());
			this->cbUserType = (gcnew System::Windows::Forms::ComboBox());
			this->tbRegPass = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbRegSurname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnTryReg = (gcnew System::Windows::Forms::Button());
			this->tbRegLog = (gcnew System::Windows::Forms::TextBox());
			this->tbRegName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->InfoButton = (gcnew System::Windows::Forms::Button());
			this->panLog->SuspendLayout();
			this->panPass->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnReg
			// 
			this->btnReg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnReg->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnReg->ForeColor = System::Drawing::Color::White;
			this->btnReg->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnReg->Location = System::Drawing::Point(294, 11);
			this->btnReg->Name = L"btnReg";
			this->btnReg->Size = System::Drawing::Size(225, 63);
			this->btnReg->TabIndex = 1;
			this->btnReg->Text = L"Sign up";
			this->btnReg->UseVisualStyleBackColor = false;
			this->btnReg->Click += gcnew System::EventHandler(this, &RegAuthForm::btnReg_Click);
			// 
			// btnAuth
			// 
			this->btnAuth->BackColor = System::Drawing::Color::White;
			this->btnAuth->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnAuth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAuth->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnAuth->Location = System::Drawing::Point(63, 11);
			this->btnAuth->Name = L"btnAuth";
			this->btnAuth->Size = System::Drawing::Size(225, 63);
			this->btnAuth->TabIndex = 2;
			this->btnAuth->Text = L"Log in";
			this->btnAuth->UseVisualStyleBackColor = false;
			this->btnAuth->Click += gcnew System::EventHandler(this, &RegAuthForm::btnAuth_Click);
			// 
			// panLog
			// 
			this->panLog->Controls->Add(this->btnTryAuth);
			this->panLog->Controls->Add(this->tbLogPass);
			this->panLog->Controls->Add(this->tbLogLogin);
			this->panLog->Controls->Add(this->label2);
			this->panLog->Controls->Add(this->label1);
			this->panLog->Location = System::Drawing::Point(44, 121);
			this->panLog->Name = L"panLog";
			this->panLog->Size = System::Drawing::Size(509, 455);
			this->panLog->TabIndex = 3;
			// 
			// btnTryAuth
			// 
			this->btnTryAuth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnTryAuth->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnTryAuth->ForeColor = System::Drawing::Color::White;
			this->btnTryAuth->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnTryAuth->Location = System::Drawing::Point(174, 308);
			this->btnTryAuth->Name = L"btnTryAuth";
			this->btnTryAuth->Size = System::Drawing::Size(138, 63);
			this->btnTryAuth->TabIndex = 4;
			this->btnTryAuth->Text = L"Log in";
			this->btnTryAuth->UseVisualStyleBackColor = false;
			this->btnTryAuth->Click += gcnew System::EventHandler(this, &RegAuthForm::btnTryAuth_Click);
			// 
			// tbLogPass
			// 
			this->tbLogPass->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->tbLogPass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbLogPass->Location = System::Drawing::Point(113, 202);
			this->tbLogPass->Multiline = true;
			this->tbLogPass->Name = L"tbLogPass";
			this->tbLogPass->PasswordChar = '*';
			this->tbLogPass->Size = System::Drawing::Size(262, 50);
			this->tbLogPass->TabIndex = 1;
			// 
			// tbLogLogin
			// 
			this->tbLogLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->tbLogLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbLogLogin->Location = System::Drawing::Point(113, 75);
			this->tbLogLogin->Multiline = true;
			this->tbLogLogin->Name = L"tbLogLogin";
			this->tbLogLogin->Size = System::Drawing::Size(262, 50);
			this->tbLogLogin->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(187, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 30);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(212, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// panPass
			// 
			this->panPass->Controls->Add(this->cbUserType);
			this->panPass->Controls->Add(this->tbRegPass);
			this->panPass->Controls->Add(this->label6);
			this->panPass->Controls->Add(this->tbRegSurname);
			this->panPass->Controls->Add(this->label5);
			this->panPass->Controls->Add(this->btnTryReg);
			this->panPass->Controls->Add(this->tbRegLog);
			this->panPass->Controls->Add(this->tbRegName);
			this->panPass->Controls->Add(this->label3);
			this->panPass->Controls->Add(this->label4);
			this->panPass->Location = System::Drawing::Point(41, 118);
			this->panPass->Name = L"panPass";
			this->panPass->Size = System::Drawing::Size(509, 455);
			this->panPass->TabIndex = 5;
			this->panPass->Visible = false;
			// 
			// cbUserType
			// 
			this->cbUserType->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->cbUserType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbUserType->FormattingEnabled = true;
			this->cbUserType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"Visitor" });
			this->cbUserType->Location = System::Drawing::Point(136, 24);
			this->cbUserType->Name = L"cbUserType";
			this->cbUserType->Size = System::Drawing::Size(260, 38);
			this->cbUserType->TabIndex = 9;
			this->cbUserType->Text = L"Choose account type";
			// 
			// tbRegPass
			// 
			this->tbRegPass->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->tbRegPass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbRegPass->Location = System::Drawing::Point(49, 297);
			this->tbRegPass->Multiline = true;
			this->tbRegPass->Name = L"tbRegPass";
			this->tbRegPass->PasswordChar = '*';
			this->tbRegPass->Size = System::Drawing::Size(401, 50);
			this->tbRegPass->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(200, 264);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 30);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Password";
			// 
			// tbRegSurname
			// 
			this->tbRegSurname->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->tbRegSurname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbRegSurname->Location = System::Drawing::Point(274, 117);
			this->tbRegSurname->Multiline = true;
			this->tbRegSurname->Name = L"tbRegSurname";
			this->tbRegSurname->Size = System::Drawing::Size(176, 50);
			this->tbRegSurname->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(304, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 30);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Last name";
			// 
			// btnTryReg
			// 
			this->btnTryReg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnTryReg->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnTryReg->ForeColor = System::Drawing::Color::White;
			this->btnTryReg->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnTryReg->Location = System::Drawing::Point(136, 371);
			this->btnTryReg->Name = L"btnTryReg";
			this->btnTryReg->Size = System::Drawing::Size(218, 63);
			this->btnTryReg->TabIndex = 4;
			this->btnTryReg->Text = L"Sign up";
			this->btnTryReg->UseVisualStyleBackColor = false;
			this->btnTryReg->Click += gcnew System::EventHandler(this, &RegAuthForm::btnTryReg_Click);
			// 
			// tbRegLog
			// 
			this->tbRegLog->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->tbRegLog->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbRegLog->Location = System::Drawing::Point(49, 211);
			this->tbRegLog->Multiline = true;
			this->tbRegLog->Name = L"tbRegLog";
			this->tbRegLog->Size = System::Drawing::Size(401, 50);
			this->tbRegLog->TabIndex = 1;
			// 
			// tbRegName
			// 
			this->tbRegName->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->tbRegName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbRegName->Location = System::Drawing::Point(49, 117);
			this->tbRegName->Multiline = true;
			this->tbRegName->Name = L"tbRegName";
			this->tbRegName->Size = System::Drawing::Size(176, 50);
			this->tbRegName->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(216, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 30);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Login";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(80, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 30);
			this->label4->TabIndex = 0;
			this->label4->Text = L"First name";
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Red;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 15, System::Drawing::FontStyle::Bold));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnExit->Location = System::Drawing::Point(527, 15);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(50, 50);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &RegAuthForm::btnExit_Click);
			// 
			// InfoButton
			// 
			this->InfoButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->InfoButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 17, System::Drawing::FontStyle::Bold));
			this->InfoButton->ForeColor = System::Drawing::Color::White;
			this->InfoButton->Location = System::Drawing::Point(7, 15);
			this->InfoButton->Name = L"InfoButton";
			this->InfoButton->Size = System::Drawing::Size(50, 50);
			this->InfoButton->TabIndex = 6;
			this->InfoButton->Text = L"🛈";
			this->InfoButton->UseVisualStyleBackColor = false;
			this->InfoButton->Click += gcnew System::EventHandler(this, &RegAuthForm::InfoButton_Click);
			// 
			// RegAuthForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(582, 574);
			this->Controls->Add(this->InfoButton);
			this->Controls->Add(this->panPass);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->panLog);
			this->Controls->Add(this->btnAuth);
			this->Controls->Add(this->btnReg);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RegAuthForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизація/реєстрація";
			this->panLog->ResumeLayout(false);
			this->panLog->PerformLayout();
			this->panPass->ResumeLayout(false);
			this->panPass->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAuth_Click(System::Object^ sender, System::EventArgs^ e) {//registration
		btnReg->BackColor = System::Drawing::Color::FromArgb(255, 128, 255);
		btnReg->ForeColor = System::Drawing::Color::White;
		btnAuth->BackColor = System::Drawing::Color::White;// bg
		btnAuth->ForeColor = System::Drawing::Color::FromArgb(255, 128, 255);

		panPass->Visible = false;
	}
	private: System::Void btnReg_Click(System::Object^ sender, System::EventArgs^ e) {//authorization
		btnAuth->BackColor = System::Drawing::Color::FromArgb(255, 128, 255);// bg
		btnAuth->ForeColor = System::Drawing::Color::White;//fore
		btnReg->BackColor = System::Drawing::Color::White;// bg
		btnReg->ForeColor = System::Drawing::Color::FromArgb(255, 128, 255);//fore

		panPass->Visible = true;
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnTryReg_Click(System::Object^ sender, System::EventArgs^ e) {

		msclr::interop::marshal_context context;

		string name = context.marshal_as<std::string>(this->tbRegName->Text);
		string surname = context.marshal_as<std::string>(this->tbRegSurname->Text);
		string login = context.marshal_as<std::string>(this->tbRegLog->Text);
		string password = context.marshal_as<std::string>(this->tbRegPass->Text);


		if (cbUserType->SelectedIndex < 0) {
			MessageBox::Show("You have not selected an account type.", "Be careful!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			RegController regCtrl;

			if (cbUserType->SelectedIndex == 0) {
				Admin admin(name, surname, login, password);
				regCtrl.jsonWriteAccount(admin);

				this->Hide();
				TicketHelper::AdminRoomForm adminRoomForm(admin);
				adminRoomForm.ShowDialog();
				clearFields();
				this->Show();
			}
			if (cbUserType->SelectedIndex == 1) {
				Visitor visitor(name, surname, login, password);
				regCtrl.jsonWriteAccount(visitor);

				vector<Visitor> visitors = RegController().GetVisitorAccountsVector();
				int index = visitors.size() - 1;
				this->Hide();
				TicketHelper::VisitorRoomForm visitorRoomForm(&visitor);
				visitorRoomForm.ShowDialog();
				clearFields();
				this->Show();
			}
		}
	}
	private: System::Void btnTryAuth_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;

		string login = context.marshal_as<std::string>(this->tbLogLogin->Text);
		string password = context.marshal_as<std::string>(this->tbLogPass->Text);

		vector<Admin> admins = RegController().GetAdminAccountsVector(); bool isAccess = false;
		for (int i = 0; i < admins.size(); i++) {
			if (admins[i].login == login) {
				isAccess = true;
				if (admins[i].password == password) {
					this->Hide();
					TicketHelper::AdminRoomForm adminRoomForm(admins[i]);
					adminRoomForm.ShowDialog();
					clearFields();
					this->Show();
					break;
				}
				else
				{
					MessageBox::Show("Password is wrong.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					break;
				}
			}
		}
		if (!isAccess) {
			vector<Visitor> visitors = RegController().GetVisitorAccountsVector();
			for (int i = 0; i < visitors.size(); i++) {
				if (visitors[i].login == login) {
					isAccess = true;
					if (visitors[i].password == password) {
						this->Hide();
						TicketHelper::VisitorRoomForm visitorRoomForm(&visitors[i]);
						visitorRoomForm.ShowDialog();
						clearFields();
						this->Show();
						break;

					}
					else
					{
						MessageBox::Show("Password is wrong.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
						break;
					}
				}
			}
		}
		if (!isAccess)
			MessageBox::Show("Login is wrong.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void InfoButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		TicketHelper::InfoForm InfoForm(0);
		InfoForm.ShowDialog();
		this->Show();
	}
	private:Void clearFields() {
		cbUserType->SelectedIndex = -1;
		tbRegName->Clear();
		tbRegSurname->Clear();
		tbRegLog->Clear();
		tbRegPass->Clear();
		tbLogLogin->Clear();
		tbRegLog->Clear();
	}
	};

}
