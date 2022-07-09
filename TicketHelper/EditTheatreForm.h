#pragma once
#include "Theatre.h"
#include <msclr\marshal_cppstd.h>
#include "RegController.h"
#include "Theatre.h"
namespace TicketHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditTheatreForm
	/// </summary>
	public ref class EditTheatreForm : public System::Windows::Forms::Form
	{
	private:
		int index;
	public:
		EditTheatreForm(int index)
		{
			InitializeComponent();
			this->index = index;
			vector<Theatre> theatres = RegController().GetTheatresVector();
			tbTheatreName->Text = gcnew String(theatres[index].theatreName.data());
			tbTheatreCity->Text = gcnew String(theatres[index].adress.city.data());
			tbTheatreStreet->Text = gcnew String(theatres[index].adress.street.data());
			tbTheatreNum->Text = gcnew String(theatres[index].adress.number.ToString());
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditTheatreForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnGoBack;
	private: System::Windows::Forms::Button^ btnExit;



	private: System::Windows::Forms::TextBox^ tbTheatreNum;
	private: System::Windows::Forms::TextBox^ tbTheatreStreet;
	private: System::Windows::Forms::TextBox^ tbTheatreCity;

	private: System::Windows::Forms::TextBox^ tbTheatreName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnConfirm;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditTheatreForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnGoBack = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->tbTheatreNum = (gcnew System::Windows::Forms::TextBox());
			this->tbTheatreStreet = (gcnew System::Windows::Forms::TextBox());
			this->tbTheatreCity = (gcnew System::Windows::Forms::TextBox());
			this->tbTheatreName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnConfirm = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->Controls->Add(this->btnGoBack);
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 69);
			this->panel1->TabIndex = 34;
			// 
			// btnGoBack
			// 
			this->btnGoBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnGoBack->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnGoBack->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnGoBack->ForeColor = System::Drawing::Color::White;
			this->btnGoBack->Location = System::Drawing::Point(333, 0);
			this->btnGoBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnGoBack->Name = L"btnGoBack";
			this->btnGoBack->Size = System::Drawing::Size(198, 69);
			this->btnGoBack->TabIndex = 6;
			this->btnGoBack->Text = L"Back";
			this->btnGoBack->UseVisualStyleBackColor = false;
			this->btnGoBack->Click += gcnew System::EventHandler(this, &EditTheatreForm::btnGoBack_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Red;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 15, System::Drawing::FontStyle::Bold));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnExit->Location = System::Drawing::Point(531, 0);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(69, 69);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &EditTheatreForm::btnExit_Click);
			// 
			// tbTheatreNum
			// 
			this->tbTheatreNum->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.8F, System::Drawing::FontStyle::Bold));
			this->tbTheatreNum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreNum->Location = System::Drawing::Point(222, 260);
			this->tbTheatreNum->Name = L"tbTheatreNum";
			this->tbTheatreNum->Size = System::Drawing::Size(235, 32);
			this->tbTheatreNum->TabIndex = 4;
			// 
			// tbTheatreStreet
			// 
			this->tbTheatreStreet->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.8F, System::Drawing::FontStyle::Bold));
			this->tbTheatreStreet->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreStreet->Location = System::Drawing::Point(222, 223);
			this->tbTheatreStreet->Name = L"tbTheatreStreet";
			this->tbTheatreStreet->Size = System::Drawing::Size(235, 32);
			this->tbTheatreStreet->TabIndex = 3;
			// 
			// tbTheatreCity
			// 
			this->tbTheatreCity->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.8F, System::Drawing::FontStyle::Bold));
			this->tbTheatreCity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreCity->Location = System::Drawing::Point(222, 186);
			this->tbTheatreCity->Name = L"tbTheatreCity";
			this->tbTheatreCity->Size = System::Drawing::Size(235, 32);
			this->tbTheatreCity->TabIndex = 2;
			// 
			// tbTheatreName
			// 
			this->tbTheatreName->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTheatreName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreName->Location = System::Drawing::Point(222, 117);
			this->tbTheatreName->Name = L"tbTheatreName";
			this->tbTheatreName->Size = System::Drawing::Size(235, 32);
			this->tbTheatreName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(33, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 28);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Theatre name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(44, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 28);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Adress:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(123, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 28);
			this->label4->TabIndex = 43;
			this->label4->Text = L"city:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(123, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 28);
			this->label3->TabIndex = 42;
			this->label3->Text = L"street:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(120, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 28);
			this->label5->TabIndex = 41;
			this->label5->Text = L"number:";
			// 
			// btnConfirm
			// 
			this->btnConfirm->BackColor = System::Drawing::Color::White;
			this->btnConfirm->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnConfirm->Location = System::Drawing::Point(222, 314);
			this->btnConfirm->Name = L"btnConfirm";
			this->btnConfirm->Size = System::Drawing::Size(168, 39);
			this->btnConfirm->TabIndex = 5;
			this->btnConfirm->Text = L"Confirm";
			this->btnConfirm->UseVisualStyleBackColor = false;
			this->btnConfirm->Click += gcnew System::EventHandler(this, &EditTheatreForm::btnConfirm_Click);
			// 
			// EditTheatreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(600, 365);
			this->Controls->Add(this->btnConfirm);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbTheatreNum);
			this->Controls->Add(this->tbTheatreStreet);
			this->Controls->Add(this->tbTheatreCity);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbTheatreName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditTheatreForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditTheatreForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGoBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}


	private: System::Void btnConfirm_Click(System::Object^ sender, System::EventArgs^ e) {

		msclr::interop::marshal_context context;
		vector<Theatre> theatres = RegController().GetTheatresVector();
	
		Theatre currentTheatre(context.marshal_as<std::string>(this->tbTheatreName->Text),
			Adress(stoi(context.marshal_as<std::string>(tbTheatreNum->Text->ToString())), context.marshal_as<std::string>(tbTheatreStreet->Text), context.marshal_as<std::string>(tbTheatreCity->Text)),
			theatres[index].events);

		RegController().replaceTheatreAtIndex(currentTheatre, index);
		this->Close();
	}
};
}
