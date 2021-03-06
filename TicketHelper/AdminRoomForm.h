#pragma once
#include "Admin.h"
#include "Event.h"
#include "Theatre.h"
#include "RegController.h"
#include "AllEventViewerForm.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <string>
#include "EditTheatreForm.h"
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
	/// Сводка для AdminRoomForm
	/// </summary>
	public ref class AdminRoomForm : public System::Windows::Forms::Form
	{
	private:
		vector<Event>* currentEventVector;
	public:
		AdminRoomForm(Admin admin)
		{
			InitializeComponent();
			

			lbName->Text = gcnew String(("Hello, " + admin.name + " " + admin.surname).data());
			currentEventVector = new vector<Event>(0);
			dgTheatreList->AllowUserToAddRows = false;
			dgVisitorsList->AllowUserToAddRows = false;

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AdminRoomForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExit;
	protected:
	private: System::Windows::Forms::Button^ btnToAuthPan;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TabControl^ MainTabControl;
	private: System::Windows::Forms::TabPage^ tpAddTheatre;
	private: System::Windows::Forms::TabPage^ tpVisitorsList;

	private: System::Windows::Forms::TextBox^ tbTheatreCity;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbTheatreName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbTheatreNum;
	private: System::Windows::Forms::TextBox^ tbTheatreStreet;

	private: System::Windows::Forms::Button^ btnAddTheatreToList;
	private: System::Windows::Forms::DataGridView^ dgVisitorsList;


	private: System::Windows::Forms::Panel^ panel5;








private: System::Windows::Forms::TabPage^ tpViewAllTheatres;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Button^ btnCheckAllEvents;
private: System::Windows::Forms::DataGridView^ dgTheatreList;
private: System::Windows::Forms::Button^ btnDeleteThisTheatre;
private: System::Windows::Forms::Button^ btnEditSelectedTheatre;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TabPage^ tpAddEvent;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnShowAllVisitors;

	private: System::Windows::Forms::Button^ btnAddEventToList;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cbEndTimeMinute;
	private: System::Windows::Forms::TextBox^ tbEventName;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ cbEndTimeHour;
	private: System::Windows::Forms::ComboBox^ cbEventDay;
	private: System::Windows::Forms::ComboBox^ cbStartTimeMinute;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ cbEventMonth;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ cbEventYear;
	private: System::Windows::Forms::ComboBox^ cbStartTimeHour;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::ComboBox^ cbTheatreForEvent;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colVisitor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEvent;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTheatre;
	private: System::Windows::Forms::Button^ InfoButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminRoomForm::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnToAuthPan = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->InfoButton = (gcnew System::Windows::Forms::Button());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->MainTabControl = (gcnew System::Windows::Forms::TabControl());
			this->tpAddTheatre = (gcnew System::Windows::Forms::TabPage());
			this->btnAddTheatreToList = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbTheatreName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbTheatreCity = (gcnew System::Windows::Forms::TextBox());
			this->tbTheatreStreet = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbTheatreNum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tpAddEvent = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->cbTheatreForEvent = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnShowAllVisitors = (gcnew System::Windows::Forms::Button());
			this->btnAddEventToList = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbEndTimeMinute = (gcnew System::Windows::Forms::ComboBox());
			this->tbEventName = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cbEndTimeHour = (gcnew System::Windows::Forms::ComboBox());
			this->cbEventDay = (gcnew System::Windows::Forms::ComboBox());
			this->cbStartTimeMinute = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->cbEventMonth = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->cbEventYear = (gcnew System::Windows::Forms::ComboBox());
			this->cbStartTimeHour = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tpViewAllTheatres = (gcnew System::Windows::Forms::TabPage());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnEditSelectedTheatre = (gcnew System::Windows::Forms::Button());
			this->btnDeleteThisTheatre = (gcnew System::Windows::Forms::Button());
			this->btnCheckAllEvents = (gcnew System::Windows::Forms::Button());
			this->dgTheatreList = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tpVisitorsList = (gcnew System::Windows::Forms::TabPage());
			this->dgVisitorsList = (gcnew System::Windows::Forms::DataGridView());
			this->colVisitor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEvent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTheatre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->MainTabControl->SuspendLayout();
			this->tpAddTheatre->SuspendLayout();
			this->panel8->SuspendLayout();
			this->tpAddEvent->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tpViewAllTheatres->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgTheatreList))->BeginInit();
			this->tpVisitorsList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgVisitorsList))->BeginInit();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Red;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 15, System::Drawing::FontStyle::Bold));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnExit->Location = System::Drawing::Point(446, 0);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(54, 50);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnExit_Click);
			// 
			// btnToAuthPan
			// 
			this->btnToAuthPan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnToAuthPan->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnToAuthPan->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnToAuthPan->ForeColor = System::Drawing::Color::White;
			this->btnToAuthPan->Location = System::Drawing::Point(371, 0);
			this->btnToAuthPan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnToAuthPan->Name = L"btnToAuthPan";
			this->btnToAuthPan->Size = System::Drawing::Size(75, 50);
			this->btnToAuthPan->TabIndex = 2;
			this->btnToAuthPan->Text = L"Back";
			this->btnToAuthPan->UseVisualStyleBackColor = false;
			this->btnToAuthPan->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnToAuthPan_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->InfoButton);
			this->panel1->Controls->Add(this->lbName);
			this->panel1->Controls->Add(this->btnToAuthPan);
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 50);
			this->panel1->TabIndex = 0;
			// 
			// InfoButton
			// 
			this->InfoButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->InfoButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->InfoButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 17, System::Drawing::FontStyle::Bold));
			this->InfoButton->ForeColor = System::Drawing::Color::White;
			this->InfoButton->Location = System::Drawing::Point(321, 0);
			this->InfoButton->Name = L"InfoButton";
			this->InfoButton->Size = System::Drawing::Size(50, 50);
			this->InfoButton->TabIndex = 8;
			this->InfoButton->Text = L"🛈";
			this->InfoButton->UseVisualStyleBackColor = false;
			this->InfoButton->Click += gcnew System::EventHandler(this, &AdminRoomForm::InfoButton_Click);
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lbName->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->ForeColor = System::Drawing::Color::White;
			this->lbName->Location = System::Drawing::Point(12, 13);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(69, 28);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"label1";
			// 
			// MainTabControl
			// 
			this->MainTabControl->Controls->Add(this->tpAddTheatre);
			this->MainTabControl->Controls->Add(this->tpAddEvent);
			this->MainTabControl->Controls->Add(this->tpViewAllTheatres);
			this->MainTabControl->Controls->Add(this->tpVisitorsList);
			this->MainTabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainTabControl->Location = System::Drawing::Point(0, 50);
			this->MainTabControl->Name = L"MainTabControl";
			this->MainTabControl->SelectedIndex = 0;
			this->MainTabControl->Size = System::Drawing::Size(500, 550);
			this->MainTabControl->TabIndex = 7;
			this->MainTabControl->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminRoomForm::MainTabControl_SelectionChanged);
			// 
			// tpAddTheatre
			// 
			this->tpAddTheatre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tpAddTheatre->Controls->Add(this->btnAddTheatreToList);
			this->tpAddTheatre->Controls->Add(this->panel8);
			this->tpAddTheatre->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 11));
			this->tpAddTheatre->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tpAddTheatre->Location = System::Drawing::Point(4, 34);
			this->tpAddTheatre->Name = L"tpAddTheatre";
			this->tpAddTheatre->Padding = System::Windows::Forms::Padding(3);
			this->tpAddTheatre->Size = System::Drawing::Size(492, 512);
			this->tpAddTheatre->TabIndex = 0;
			this->tpAddTheatre->Text = L"Add theatre";
			// 
			// btnAddTheatreToList
			// 
			this->btnAddTheatreToList->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnAddTheatreToList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAddTheatreToList->Location = System::Drawing::Point(82, 425);
			this->btnAddTheatreToList->Name = L"btnAddTheatreToList";
			this->btnAddTheatreToList->Size = System::Drawing::Size(325, 68);
			this->btnAddTheatreToList->TabIndex = 27;
			this->btnAddTheatreToList->Text = L"Add/Save theatre";
			this->btnAddTheatreToList->UseVisualStyleBackColor = true;
			this->btnAddTheatreToList->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnAddTheatreToList_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label1);
			this->panel8->Controls->Add(this->tbTheatreName);
			this->panel8->Controls->Add(this->label2);
			this->panel8->Controls->Add(this->tbTheatreCity);
			this->panel8->Controls->Add(this->tbTheatreStreet);
			this->panel8->Controls->Add(this->label5);
			this->panel8->Controls->Add(this->tbTheatreNum);
			this->panel8->Controls->Add(this->label3);
			this->panel8->Controls->Add(this->label4);
			this->panel8->Location = System::Drawing::Point(0, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(492, 179);
			this->panel8->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Theatre name:";
			// 
			// tbTheatreName
			// 
			this->tbTheatreName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreName->Location = System::Drawing::Point(245, 13);
			this->tbTheatreName->Name = L"tbTheatreName";
			this->tbTheatreName->Size = System::Drawing::Size(240, 32);
			this->tbTheatreName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Adress:";
			// 
			// tbTheatreCity
			// 
			this->tbTheatreCity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreCity->Location = System::Drawing::Point(250, 72);
			this->tbTheatreCity->Name = L"tbTheatreCity";
			this->tbTheatreCity->Size = System::Drawing::Size(235, 32);
			this->tbTheatreCity->TabIndex = 1;
			// 
			// tbTheatreStreet
			// 
			this->tbTheatreStreet->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreStreet->Location = System::Drawing::Point(250, 108);
			this->tbTheatreStreet->Name = L"tbTheatreStreet";
			this->tbTheatreStreet->Size = System::Drawing::Size(235, 32);
			this->tbTheatreStreet->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(159, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 25);
			this->label5->TabIndex = 2;
			this->label5->Text = L"number:";
			// 
			// tbTheatreNum
			// 
			this->tbTheatreNum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreNum->Location = System::Drawing::Point(250, 144);
			this->tbTheatreNum->Name = L"tbTheatreNum";
			this->tbTheatreNum->Size = System::Drawing::Size(235, 32);
			this->tbTheatreNum->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(163, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"street:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(163, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"city:";
			// 
			// tpAddEvent
			// 
			this->tpAddEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tpAddEvent->Controls->Add(this->panel7);
			this->tpAddEvent->Location = System::Drawing::Point(4, 34);
			this->tpAddEvent->Name = L"tpAddEvent";
			this->tpAddEvent->Size = System::Drawing::Size(492, 512);
			this->tpAddEvent->TabIndex = 3;
			this->tpAddEvent->Text = L"Add Event";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label18);
			this->panel7->Controls->Add(this->cbTheatreForEvent);
			this->panel7->Controls->Add(this->panel2);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->cbEndTimeMinute);
			this->panel7->Controls->Add(this->tbEventName);
			this->panel7->Controls->Add(this->label16);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->cbEndTimeHour);
			this->panel7->Controls->Add(this->cbEventDay);
			this->panel7->Controls->Add(this->cbStartTimeMinute);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->cbEventMonth);
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->cbEventYear);
			this->panel7->Controls->Add(this->cbStartTimeHour);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Location = System::Drawing::Point(0, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(492, 488);
			this->panel7->TabIndex = 27;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(94, 229);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(87, 28);
			this->label18->TabIndex = 32;
			this->label18->Text = L"Theatre";
			// 
			// cbTheatreForEvent
			// 
			this->cbTheatreForEvent->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbTheatreForEvent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbTheatreForEvent->FormattingEnabled = true;
			this->cbTheatreForEvent->Location = System::Drawing::Point(187, 226);
			this->cbTheatreForEvent->Name = L"cbTheatreForEvent";
			this->cbTheatreForEvent->Size = System::Drawing::Size(176, 36);
			this->cbTheatreForEvent->TabIndex = 31;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnShowAllVisitors);
			this->panel2->Controls->Add(this->btnAddEventToList);
			this->panel2->Location = System::Drawing::Point(10, 388);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(470, 100);
			this->panel2->TabIndex = 30;
			// 
			// btnShowAllVisitors
			// 
			this->btnShowAllVisitors->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnShowAllVisitors->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnShowAllVisitors->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnShowAllVisitors->Location = System::Drawing::Point(230, 0);
			this->btnShowAllVisitors->Name = L"btnShowAllVisitors";
			this->btnShowAllVisitors->Size = System::Drawing::Size(240, 100);
			this->btnShowAllVisitors->TabIndex = 29;
			this->btnShowAllVisitors->Text = L"Take a look at visitor list";
			this->btnShowAllVisitors->UseVisualStyleBackColor = true;
			this->btnShowAllVisitors->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnShowAllVisitors_Click);
			// 
			// btnAddEventToList
			// 
			this->btnAddEventToList->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnAddEventToList->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnAddEventToList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAddEventToList->Location = System::Drawing::Point(0, 0);
			this->btnAddEventToList->Name = L"btnAddEventToList";
			this->btnAddEventToList->Size = System::Drawing::Size(231, 100);
			this->btnAddEventToList->TabIndex = 28;
			this->btnAddEventToList->Text = L"Add Event";
			this->btnAddEventToList->UseVisualStyleBackColor = true;
			this->btnAddEventToList->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnAddEventToList_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(173, 1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 28);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Add event";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(5, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 28);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Event name";
			// 
			// cbEndTimeMinute
			// 
			this->cbEndTimeMinute->DropDownHeight = 100;
			this->cbEndTimeMinute->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbEndTimeMinute->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbEndTimeMinute->FormattingEnabled = true;
			this->cbEndTimeMinute->IntegralHeight = false;
			this->cbEndTimeMinute->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23",
					L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41",
					L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->cbEndTimeMinute->Location = System::Drawing::Point(383, 164);
			this->cbEndTimeMinute->Name = L"cbEndTimeMinute";
			this->cbEndTimeMinute->Size = System::Drawing::Size(70, 36);
			this->cbEndTimeMinute->TabIndex = 25;
			this->cbEndTimeMinute->Text = L"min.";
			// 
			// tbEventName
			// 
			this->tbEventName->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEventName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbEventName->Location = System::Drawing::Point(243, 29);
			this->tbEventName->Name = L"tbEventName";
			this->tbEventName->Size = System::Drawing::Size(240, 35);
			this->tbEventName->TabIndex = 5;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(358, 167);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(18, 28);
			this->label16->TabIndex = 24;
			this->label16->Text = L":";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(204, 64);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 28);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Date";
			// 
			// cbEndTimeHour
			// 
			this->cbEndTimeHour->DropDownHeight = 100;
			this->cbEndTimeHour->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbEndTimeHour->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbEndTimeHour->FormattingEnabled = true;
			this->cbEndTimeHour->IntegralHeight = false;
			this->cbEndTimeHour->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->cbEndTimeHour->Location = System::Drawing::Point(282, 164);
			this->cbEndTimeHour->Name = L"cbEndTimeHour";
			this->cbEndTimeHour->Size = System::Drawing::Size(70, 36);
			this->cbEndTimeHour->TabIndex = 23;
			this->cbEndTimeHour->Text = L"hour";
			// 
			// cbEventDay
			// 
			this->cbEventDay->DropDownHeight = 100;
			this->cbEventDay->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbEventDay->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbEventDay->FormattingEnabled = true;
			this->cbEventDay->IntegralHeight = false;
			this->cbEventDay->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->cbEventDay->Location = System::Drawing::Point(58, 95);
			this->cbEventDay->Name = L"cbEventDay";
			this->cbEventDay->Size = System::Drawing::Size(76, 36);
			this->cbEventDay->TabIndex = 7;
			// 
			// cbStartTimeMinute
			// 
			this->cbStartTimeMinute->DropDownHeight = 100;
			this->cbStartTimeMinute->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbStartTimeMinute->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbStartTimeMinute->FormattingEnabled = true;
			this->cbStartTimeMinute->IntegralHeight = false;
			this->cbStartTimeMinute->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23",
					L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41",
					L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->cbStartTimeMinute->Location = System::Drawing::Point(166, 164);
			this->cbStartTimeMinute->Name = L"cbStartTimeMinute";
			this->cbStartTimeMinute->Size = System::Drawing::Size(70, 36);
			this->cbStartTimeMinute->TabIndex = 22;
			this->cbStartTimeMinute->Text = L"min.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(7, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 28);
			this->label9->TabIndex = 8;
			this->label9->Text = L"DD";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(141, 167);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(18, 28);
			this->label14->TabIndex = 21;
			this->label14->Text = L":";
			// 
			// cbEventMonth
			// 
			this->cbEventMonth->DropDownHeight = 100;
			this->cbEventMonth->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbEventMonth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbEventMonth->FormattingEnabled = true;
			this->cbEventMonth->IntegralHeight = false;
			this->cbEventMonth->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->cbEventMonth->Location = System::Drawing::Point(209, 95);
			this->cbEventMonth->Name = L"cbEventMonth";
			this->cbEventMonth->Size = System::Drawing::Size(76, 36);
			this->cbEventMonth->TabIndex = 9;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(2, 167);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(62, 28);
			this->label15->TabIndex = 20;
			this->label15->Text = L"from";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(142, 98);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 28);
			this->label10->TabIndex = 10;
			this->label10->Text = L"MM";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(242, 167);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 28);
			this->label13->TabIndex = 17;
			this->label13->Text = L"till";
			// 
			// cbEventYear
			// 
			this->cbEventYear->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbEventYear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbEventYear->FormattingEnabled = true;
			this->cbEventYear->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"2022", L"2023", L"2024", L"2025", L"2026",
					L"2027", L"2028", L"2029", L"2030"
			});
			this->cbEventYear->Location = System::Drawing::Point(365, 95);
			this->cbEventYear->Name = L"cbEventYear";
			this->cbEventYear->Size = System::Drawing::Size(118, 36);
			this->cbEventYear->TabIndex = 11;
			// 
			// cbStartTimeHour
			// 
			this->cbStartTimeHour->DropDownHeight = 100;
			this->cbStartTimeHour->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbStartTimeHour->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbStartTimeHour->FormattingEnabled = true;
			this->cbStartTimeHour->IntegralHeight = false;
			this->cbStartTimeHour->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->cbStartTimeHour->Location = System::Drawing::Point(65, 164);
			this->cbStartTimeHour->Name = L"cbStartTimeHour";
			this->cbStartTimeHour->Size = System::Drawing::Size(70, 36);
			this->cbStartTimeHour->TabIndex = 16;
			this->cbStartTimeHour->Text = L"hour";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(299, 98);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 28);
			this->label11->TabIndex = 12;
			this->label11->Text = L"YYYY";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(204, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 28);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Time";
			// 
			// tpViewAllTheatres
			// 
			this->tpViewAllTheatres->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tpViewAllTheatres->Controls->Add(this->panel6);
			this->tpViewAllTheatres->Controls->Add(this->dgTheatreList);
			this->tpViewAllTheatres->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 11));
			this->tpViewAllTheatres->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tpViewAllTheatres->Location = System::Drawing::Point(4, 34);
			this->tpViewAllTheatres->Name = L"tpViewAllTheatres";
			this->tpViewAllTheatres->Size = System::Drawing::Size(492, 512);
			this->tpViewAllTheatres->TabIndex = 2;
			this->tpViewAllTheatres->Text = L"Theatres";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->btnEditSelectedTheatre);
			this->panel6->Controls->Add(this->btnDeleteThisTheatre);
			this->panel6->Controls->Add(this->btnCheckAllEvents);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel6->Location = System::Drawing::Point(0, 412);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(492, 100);
			this->panel6->TabIndex = 32;
			// 
			// btnEditSelectedTheatre
			// 
			this->btnEditSelectedTheatre->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnEditSelectedTheatre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnEditSelectedTheatre->Location = System::Drawing::Point(333, 0);
			this->btnEditSelectedTheatre->Name = L"btnEditSelectedTheatre";
			this->btnEditSelectedTheatre->Size = System::Drawing::Size(159, 100);
			this->btnEditSelectedTheatre->TabIndex = 2;
			this->btnEditSelectedTheatre->Text = L"Edit selected theatre";
			this->btnEditSelectedTheatre->UseVisualStyleBackColor = true;
			this->btnEditSelectedTheatre->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnEditSelectedTheatre_Click);
			// 
			// btnDeleteThisTheatre
			// 
			this->btnDeleteThisTheatre->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnDeleteThisTheatre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnDeleteThisTheatre->Location = System::Drawing::Point(154, 0);
			this->btnDeleteThisTheatre->Name = L"btnDeleteThisTheatre";
			this->btnDeleteThisTheatre->Size = System::Drawing::Size(179, 100);
			this->btnDeleteThisTheatre->TabIndex = 1;
			this->btnDeleteThisTheatre->Text = L"Delete selected theatre";
			this->btnDeleteThisTheatre->UseVisualStyleBackColor = true;
			this->btnDeleteThisTheatre->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnDeleteThisTheatre_Click);
			// 
			// btnCheckAllEvents
			// 
			this->btnCheckAllEvents->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnCheckAllEvents->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnCheckAllEvents->Location = System::Drawing::Point(0, 0);
			this->btnCheckAllEvents->Name = L"btnCheckAllEvents";
			this->btnCheckAllEvents->Size = System::Drawing::Size(154, 100);
			this->btnCheckAllEvents->TabIndex = 0;
			this->btnCheckAllEvents->Text = L"All Events";
			this->btnCheckAllEvents->UseVisualStyleBackColor = true;
			this->btnCheckAllEvents->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnCheckAllEvents_Click);
			// 
			// dgTheatreList
			// 
			this->dgTheatreList->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dgTheatreList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgTheatreList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->dgTheatreList->Location = System::Drawing::Point(0, 0);
			this->dgTheatreList->MultiSelect = false;
			this->dgTheatreList->Name = L"dgTheatreList";
			this->dgTheatreList->ReadOnly = true;
			this->dgTheatreList->RowHeadersVisible = false;
			this->dgTheatreList->RowHeadersWidth = 51;
			this->dgTheatreList->RowTemplate->Height = 24;
			this->dgTheatreList->Size = System::Drawing::Size(492, 406);
			this->dgTheatreList->TabIndex = 31;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 246;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Adress";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 246;
			// 
			// tpVisitorsList
			// 
			this->tpVisitorsList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tpVisitorsList->Controls->Add(this->dgVisitorsList);
			this->tpVisitorsList->Controls->Add(this->panel5);
			this->tpVisitorsList->Location = System::Drawing::Point(4, 34);
			this->tpVisitorsList->Name = L"tpVisitorsList";
			this->tpVisitorsList->Padding = System::Windows::Forms::Padding(3);
			this->tpVisitorsList->Size = System::Drawing::Size(492, 512);
			this->tpVisitorsList->TabIndex = 1;
			this->tpVisitorsList->Text = L"Visitors List";
			// 
			// dgVisitorsList
			// 
			this->dgVisitorsList->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dgVisitorsList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgVisitorsList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colVisitor,
					this->colEvent, this->colTheatre
			});
			this->dgVisitorsList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgVisitorsList->Location = System::Drawing::Point(3, 3);
			this->dgVisitorsList->MultiSelect = false;
			this->dgVisitorsList->Name = L"dgVisitorsList";
			this->dgVisitorsList->ReadOnly = true;
			this->dgVisitorsList->RowHeadersVisible = false;
			this->dgVisitorsList->RowHeadersWidth = 51;
			this->dgVisitorsList->RowTemplate->Height = 24;
			this->dgVisitorsList->Size = System::Drawing::Size(486, 496);
			this->dgVisitorsList->TabIndex = 30;
			// 
			// colVisitor
			// 
			this->colVisitor->HeaderText = L"Visitor";
			this->colVisitor->MinimumWidth = 6;
			this->colVisitor->Name = L"colVisitor";
			this->colVisitor->ReadOnly = true;
			this->colVisitor->Width = 150;
			// 
			// colEvent
			// 
			this->colEvent->HeaderText = L"Event";
			this->colEvent->MinimumWidth = 6;
			this->colEvent->Name = L"colEvent";
			this->colEvent->ReadOnly = true;
			this->colEvent->Width = 150;
			// 
			// colTheatre
			// 
			this->colTheatre->HeaderText = L"Theatre";
			this->colTheatre->MinimumWidth = 6;
			this->colTheatre->Name = L"colTheatre";
			this->colTheatre->ReadOnly = true;
			this->colTheatre->Width = 150;
			// 
			// panel5
			// 
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(3, 499);
			this->panel5->Margin = System::Windows::Forms::Padding(0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(486, 10);
			this->panel5->TabIndex = 28;
			// 
			// AdminRoomForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(500, 600);
			this->Controls->Add(this->MainTabControl);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AdminRoomForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminRoomForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->MainTabControl->ResumeLayout(false);
			this->tpAddTheatre->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->tpAddEvent->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->tpViewAllTheatres->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgTheatreList))->EndInit();
			this->tpVisitorsList->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgVisitorsList))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		Application::Exit();
	}
private: System::Void btnToAuthPan_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnAddEventToList_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;

		try
		{

		Event currentEvent(context.marshal_as<std::string>(this->tbEventName->Text),
			context.marshal_as<std::string>(this->cbTheatreForEvent->Text),
			Date(cbEventDay->SelectedIndex + 1, cbEventMonth->SelectedIndex + 1, stoi(context.marshal_as<std::string>(cbEventYear->SelectedItem->ToString()))),
			Time(cbStartTimeHour->SelectedIndex, cbStartTimeMinute->SelectedIndex),
			Time(cbEndTimeHour->SelectedIndex, cbEndTimeMinute->SelectedIndex));


		if (this->cbTheatreForEvent->SelectedIndex > -1)
		{
			RegController().addEventToTheatre(cbTheatreForEvent->SelectedIndex, currentEvent);
			MessageBox::Show("Event information was successfully recorded!", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Select a theatre", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		
		}
		catch (const System::Exception^)
		{
			MessageBox::Show("Theater not listed. Check the correctness of the entered data", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
private: System::Void btnShowAllVisitors_Click(System::Object^ sender, System::EventArgs^ e) {
		MainTabControl->SelectTab(3);
	}
private: System::Void btnAddTheatreToList_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			msclr::interop::marshal_context context;
			vector<Event> events;
			Theatre currentTheatre(context.marshal_as<std::string>(this->tbTheatreName->Text),
				Adress(stoi(context.marshal_as<std::string>(tbTheatreNum->Text->ToString())), context.marshal_as<std::string>(tbTheatreStreet->Text), context.marshal_as<std::string>(tbTheatreCity->Text)),
				events);

			RegController regCtrl;
			regCtrl.jsonWriteTheatre(currentTheatre);
			MessageBox::Show("Theater information was successfully recorded!", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			RefreshTheatresAtComboBox();
			ClearFields();
		}
		catch (const std::exception&)
		{
			MessageBox::Show("Check the correctness of the entered data!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void ClearFields(){
			tbTheatreName->Clear();

			tbTheatreCity->Clear();
			tbTheatreStreet->Clear();
			tbTheatreNum->Clear();

			tbEventName->Clear();

			cbEventDay->SelectedIndex = -1;
			cbEventMonth->SelectedIndex = -1;
			cbEventYear->SelectedIndex = -1;

			cbStartTimeHour->Text = "hour.";
			cbStartTimeMinute->Text = "min.";
			cbEndTimeHour->Text = "hour.";
			cbEndTimeMinute->Text = "min.";

			currentEventVector->clear();
		}
//поновлює інформацію про театри
private: Void RefreshTheatresInfo()
{
	vector<Theatre> theatres = RegController().GetTheatresVector();
	dgTheatreList->Rows->Clear();
	for (int i = 0; i < theatres.size(); i++) {
		dgTheatreList->Rows->Add(gcnew String(theatres[i].theatreName.data()), gcnew String(theatres[i].adress.ToString().data()));
	}
}
private: System::Void MainTabControl_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	if (MainTabControl->SelectedIndex == 2) {
		RefreshTheatresInfo();
	}
	if (MainTabControl->SelectedIndex == 1)
	{
		RefreshTheatresAtComboBox();
		vector<Theatre> theatres = RegController().GetTheatresVector();

		if (theatres.size() == 0)
		{
			MessageBox::Show("Before adding an event you shold add a theatre", "Warming!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			MainTabControl->SelectedIndex = 0;
		}
		

	}
	if (MainTabControl->SelectedIndex == 3)
	{
		RefreshVisitorsAtList();
	}
	
}
private: System::Void btnDeleteThisTheatre_Click(System::Object^ sender, System::EventArgs^ e) {
	dgTheatreList->Rows->RemoveAt(dgTheatreList->CurrentCell->RowIndex);
	RegController().removeTheatreAtIndex(dgTheatreList->CurrentCell->RowIndex);
}
private: System::Void btnCheckAllEvents_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	int theatreIndex = dgTheatreList->CurrentCell->RowIndex;
	TicketHelper::AllEventViewerForm allEventsForm(theatreIndex);
	allEventsForm.ShowDialog();
	this->Show();
}
private: System::Void btnEditSelectedTheatre_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	int index = dgTheatreList->CurrentCell->RowIndex;
	TicketHelper::EditTheatreForm editTheatreForm(index);
	editTheatreForm.ShowDialog();
	RefreshTheatresInfo();
	this->Show();
}
private: Void RefreshTheatresAtComboBox()
	{
		cbTheatreForEvent->Items->Clear();
		vector<Theatre> theatres = RegController().GetTheatresVector();

		for(Theatre theatre : theatres)
		{
			cbTheatreForEvent->Items->Add(gcnew String(theatre.theatreName.data()));
		}
	}
private: Void RefreshVisitorsAtList()
{
	vector<Visitor> visitors = RegController().GetVisitorAccountsVector();
	dgVisitorsList->Rows->Clear();
	for (int i = 0; i < visitors.size(); i++) {
		for (int j = 0; j < visitors[i].tickets.size(); j++)
		{
			dgVisitorsList->Rows->Add(gcnew String(visitors[i].login.data()), gcnew String(visitors[i].tickets[j].eventName.data()), gcnew String(visitors[i].tickets[j].theatreName.data()));
		}
	}
}
private: System::Void InfoButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	TicketHelper::InfoForm InfoForm(1);
	InfoForm.ShowDialog();
	this->Show();
}
};

}
