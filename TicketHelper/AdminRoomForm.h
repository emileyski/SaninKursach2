#pragma once
#include "Admin.h"
#include "Event.h"
#include "Theatre.h"
#include "RegController.h"
#include "AllEventViewerForm.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <string>

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
			//
			//TODO: добавьте код конструктора
			//
			lbName->Text = gcnew String(("Hello, " + admin.name + " " + admin.surname).data());
			currentEventVector = new vector<Event>(0);
			isEmptyEventListPanel->Visible = true;
			dgEventList->AllowUserToAddRows = false;
			dgTheatreList->AllowUserToAddRows = false;
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
	private: System::Windows::Forms::TabPage^ tpEventList;
	private: System::Windows::Forms::TextBox^ tbTheatreCity;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbTheatreName;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbTheatreNum;

	private: System::Windows::Forms::TextBox^ tbTheatreStreet;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbEventName;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ cbEventYear;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ cbEventMonth;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cbEventDay;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ cbEndTimeMinute;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ cbEndTimeHour;

	private: System::Windows::Forms::ComboBox^ cbStartTimeMinute;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ cbStartTimeHour;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnShowAllEvents;

	private: System::Windows::Forms::Button^ btnAddTheatreToList;

	private: System::Windows::Forms::Button^ btnAddEventToList;
	private: System::Windows::Forms::DataGridView^ dgEventList;





	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EventNameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EventDateColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StartEventTimeColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EndEventTime;
	private: System::Windows::Forms::Button^ btnDeleteSelectedEvent;
	private: System::Windows::Forms::Panel^ isEmptyEventListPanel;

	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TabPage^ tpViewAllTheatres;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Button^ btnCheckAllEvents;


private: System::Windows::Forms::DataGridView^ dgTheatreList;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::Button^ btnDeleteThisTheatre;
private: System::Windows::Forms::Button^ btnEditSelectedTheatre;























	protected:



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
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnToAuthPan = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->MainTabControl = (gcnew System::Windows::Forms::TabControl());
			this->tpAddTheatre = (gcnew System::Windows::Forms::TabPage());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnShowAllEvents = (gcnew System::Windows::Forms::Button());
			this->btnAddTheatreToList = (gcnew System::Windows::Forms::Button());
			this->btnAddEventToList = (gcnew System::Windows::Forms::Button());
			this->cbEndTimeMinute = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->cbEndTimeHour = (gcnew System::Windows::Forms::ComboBox());
			this->cbStartTimeMinute = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->cbStartTimeHour = (gcnew System::Windows::Forms::ComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->cbEventYear = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cbEventMonth = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cbEventDay = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbEventName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbTheatreNum = (gcnew System::Windows::Forms::TextBox());
			this->tbTheatreStreet = (gcnew System::Windows::Forms::TextBox());
			this->tbTheatreCity = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbTheatreName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tpEventList = (gcnew System::Windows::Forms::TabPage());
			this->isEmptyEventListPanel = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->dgEventList = (gcnew System::Windows::Forms::DataGridView());
			this->EventNameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EventDateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StartEventTimeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EndEventTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnDeleteSelectedEvent = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tpViewAllTheatres = (gcnew System::Windows::Forms::TabPage());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnEditSelectedTheatre = (gcnew System::Windows::Forms::Button());
			this->btnDeleteThisTheatre = (gcnew System::Windows::Forms::Button());
			this->btnCheckAllEvents = (gcnew System::Windows::Forms::Button());
			this->dgTheatreList = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->MainTabControl->SuspendLayout();
			this->tpAddTheatre->SuspendLayout();
			this->panel4->SuspendLayout();
			this->tpEventList->SuspendLayout();
			this->isEmptyEventListPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgEventList))->BeginInit();
			this->panel5->SuspendLayout();
			this->tpViewAllTheatres->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgTheatreList))->BeginInit();
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
			this->btnToAuthPan->Location = System::Drawing::Point(248, 0);
			this->btnToAuthPan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnToAuthPan->Name = L"btnToAuthPan";
			this->btnToAuthPan->Size = System::Drawing::Size(198, 50);
			this->btnToAuthPan->TabIndex = 2;
			this->btnToAuthPan->Text = L"На головну";
			this->btnToAuthPan->UseVisualStyleBackColor = false;
			this->btnToAuthPan->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnToAuthPan_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
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
			this->MainTabControl->Controls->Add(this->tpEventList);
			this->MainTabControl->Controls->Add(this->tpViewAllTheatres);
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
			this->tpAddTheatre->Controls->Add(this->panel4);
			this->tpAddTheatre->Controls->Add(this->cbEndTimeMinute);
			this->tpAddTheatre->Controls->Add(this->label16);
			this->tpAddTheatre->Controls->Add(this->cbEndTimeHour);
			this->tpAddTheatre->Controls->Add(this->cbStartTimeMinute);
			this->tpAddTheatre->Controls->Add(this->label14);
			this->tpAddTheatre->Controls->Add(this->label15);
			this->tpAddTheatre->Controls->Add(this->label13);
			this->tpAddTheatre->Controls->Add(this->cbStartTimeHour);
			this->tpAddTheatre->Controls->Add(this->panel3);
			this->tpAddTheatre->Controls->Add(this->panel2);
			this->tpAddTheatre->Controls->Add(this->label12);
			this->tpAddTheatre->Controls->Add(this->label11);
			this->tpAddTheatre->Controls->Add(this->cbEventYear);
			this->tpAddTheatre->Controls->Add(this->label10);
			this->tpAddTheatre->Controls->Add(this->cbEventMonth);
			this->tpAddTheatre->Controls->Add(this->label9);
			this->tpAddTheatre->Controls->Add(this->cbEventDay);
			this->tpAddTheatre->Controls->Add(this->label8);
			this->tpAddTheatre->Controls->Add(this->tbEventName);
			this->tpAddTheatre->Controls->Add(this->label7);
			this->tpAddTheatre->Controls->Add(this->label6);
			this->tpAddTheatre->Controls->Add(this->label5);
			this->tpAddTheatre->Controls->Add(this->label3);
			this->tpAddTheatre->Controls->Add(this->label4);
			this->tpAddTheatre->Controls->Add(this->tbTheatreNum);
			this->tpAddTheatre->Controls->Add(this->tbTheatreStreet);
			this->tpAddTheatre->Controls->Add(this->tbTheatreCity);
			this->tpAddTheatre->Controls->Add(this->label2);
			this->tpAddTheatre->Controls->Add(this->tbTheatreName);
			this->tpAddTheatre->Controls->Add(this->label1);
			this->tpAddTheatre->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 11));
			this->tpAddTheatre->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tpAddTheatre->Location = System::Drawing::Point(4, 34);
			this->tpAddTheatre->Name = L"tpAddTheatre";
			this->tpAddTheatre->Padding = System::Windows::Forms::Padding(3);
			this->tpAddTheatre->Size = System::Drawing::Size(492, 512);
			this->tpAddTheatre->TabIndex = 0;
			this->tpAddTheatre->Text = L"Додати театр";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel4->Controls->Add(this->btnShowAllEvents);
			this->panel4->Controls->Add(this->btnAddTheatreToList);
			this->panel4->Controls->Add(this->btnAddEventToList);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(3, 402);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(486, 107);
			this->panel4->TabIndex = 16;
			// 
			// btnShowAllEvents
			// 
			this->btnShowAllEvents->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnShowAllEvents->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnShowAllEvents->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnShowAllEvents->Location = System::Drawing::Point(112, 0);
			this->btnShowAllEvents->Name = L"btnShowAllEvents";
			this->btnShowAllEvents->Size = System::Drawing::Size(168, 107);
			this->btnShowAllEvents->TabIndex = 28;
			this->btnShowAllEvents->Text = L"Переглянути список подій";
			this->btnShowAllEvents->UseVisualStyleBackColor = true;
			this->btnShowAllEvents->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnShowAllEvents_Click);
			// 
			// btnAddTheatreToList
			// 
			this->btnAddTheatreToList->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnAddTheatreToList->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnAddTheatreToList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAddTheatreToList->Location = System::Drawing::Point(280, 0);
			this->btnAddTheatreToList->Name = L"btnAddTheatreToList";
			this->btnAddTheatreToList->Size = System::Drawing::Size(206, 107);
			this->btnAddTheatreToList->TabIndex = 27;
			this->btnAddTheatreToList->Text = L"Додати/зберегти театр";
			this->btnAddTheatreToList->UseVisualStyleBackColor = true;
			this->btnAddTheatreToList->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnAddTheatreToList_Click);
			// 
			// btnAddEventToList
			// 
			this->btnAddEventToList->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnAddEventToList->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnAddEventToList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAddEventToList->Location = System::Drawing::Point(0, 0);
			this->btnAddEventToList->Name = L"btnAddEventToList";
			this->btnAddEventToList->Size = System::Drawing::Size(112, 107);
			this->btnAddEventToList->TabIndex = 26;
			this->btnAddEventToList->Text = L"Додати подію";
			this->btnAddEventToList->UseVisualStyleBackColor = true;
			this->btnAddEventToList->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnAddEventToList_Click);
			// 
			// cbEndTimeMinute
			// 
			this->cbEndTimeMinute->DropDownHeight = 100;
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
			this->cbEndTimeMinute->Location = System::Drawing::Point(384, 345);
			this->cbEndTimeMinute->Name = L"cbEndTimeMinute";
			this->cbEndTimeMinute->Size = System::Drawing::Size(70, 33);
			this->cbEndTimeMinute->TabIndex = 25;
			this->cbEndTimeMinute->Text = L"хв.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(359, 348);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(18, 25);
			this->label16->TabIndex = 24;
			this->label16->Text = L":";
			// 
			// cbEndTimeHour
			// 
			this->cbEndTimeHour->DropDownHeight = 100;
			this->cbEndTimeHour->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbEndTimeHour->FormattingEnabled = true;
			this->cbEndTimeHour->IntegralHeight = false;
			this->cbEndTimeHour->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->cbEndTimeHour->Location = System::Drawing::Point(283, 345);
			this->cbEndTimeHour->Name = L"cbEndTimeHour";
			this->cbEndTimeHour->Size = System::Drawing::Size(70, 33);
			this->cbEndTimeHour->TabIndex = 23;
			this->cbEndTimeHour->Text = L"год.";
			// 
			// cbStartTimeMinute
			// 
			this->cbStartTimeMinute->DropDownHeight = 100;
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
			this->cbStartTimeMinute->Location = System::Drawing::Point(167, 345);
			this->cbStartTimeMinute->Name = L"cbStartTimeMinute";
			this->cbStartTimeMinute->Size = System::Drawing::Size(70, 33);
			this->cbStartTimeMinute->TabIndex = 22;
			this->cbStartTimeMinute->Text = L"хв.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(142, 348);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(18, 25);
			this->label14->TabIndex = 21;
			this->label14->Text = L":";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(36, 348);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 25);
			this->label15->TabIndex = 20;
			this->label15->Text = L"з";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(245, 348);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 25);
			this->label13->TabIndex = 17;
			this->label13->Text = L"до";
			// 
			// cbStartTimeHour
			// 
			this->cbStartTimeHour->DropDownHeight = 100;
			this->cbStartTimeHour->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbStartTimeHour->FormattingEnabled = true;
			this->cbStartTimeHour->IntegralHeight = false;
			this->cbStartTimeHour->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->cbStartTimeHour->Location = System::Drawing::Point(66, 345);
			this->cbStartTimeHour->Name = L"cbStartTimeHour";
			this->cbStartTimeHour->Size = System::Drawing::Size(70, 33);
			this->cbStartTimeHour->TabIndex = 16;
			this->cbStartTimeHour->Text = L"год.";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel3->Location = System::Drawing::Point(0, 384);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(500, 12);
			this->panel3->TabIndex = 15;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Location = System::Drawing::Point(0, 170);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(496, 12);
			this->panel2->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(136, 312);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(178, 25);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Введіть час події";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(296, 282);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 25);
			this->label11->TabIndex = 12;
			this->label11->Text = L"ГГГГ";
			// 
			// cbEventYear
			// 
			this->cbEventYear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbEventYear->FormattingEnabled = true;
			this->cbEventYear->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"2022", L"2023", L"2024", L"2025", L"2026",
					L"2027", L"2028", L"2029", L"2030"
			});
			this->cbEventYear->Location = System::Drawing::Point(366, 276);
			this->cbEventYear->Name = L"cbEventYear";
			this->cbEventYear->Size = System::Drawing::Size(118, 33);
			this->cbEventYear->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(143, 279);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 25);
			this->label10->TabIndex = 10;
			this->label10->Text = L"ММ";
			// 
			// cbEventMonth
			// 
			this->cbEventMonth->DropDownHeight = 100;
			this->cbEventMonth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbEventMonth->FormattingEnabled = true;
			this->cbEventMonth->IntegralHeight = false;
			this->cbEventMonth->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->cbEventMonth->Location = System::Drawing::Point(210, 276);
			this->cbEventMonth->Name = L"cbEventMonth";
			this->cbEventMonth->Size = System::Drawing::Size(76, 33);
			this->cbEventMonth->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 279);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"ДД";
			// 
			// cbEventDay
			// 
			this->cbEventDay->DropDownHeight = 100;
			this->cbEventDay->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbEventDay->FormattingEnabled = true;
			this->cbEventDay->IntegralHeight = false;
			this->cbEventDay->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->cbEventDay->Location = System::Drawing::Point(59, 276);
			this->cbEventDay->Name = L"cbEventDay";
			this->cbEventDay->Size = System::Drawing::Size(76, 33);
			this->cbEventDay->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(136, 243);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(190, 25);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Введіть дату події";
			// 
			// tbEventName
			// 
			this->tbEventName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbEventName->Location = System::Drawing::Point(244, 210);
			this->tbEventName->Name = L"tbEventName";
			this->tbEventName->Size = System::Drawing::Size(240, 32);
			this->tbEventName->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 210);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(202, 25);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Введіть назву події";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(153, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 25);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Додати подію:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(158, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 25);
			this->label5->TabIndex = 2;
			this->label5->Text = L"номер:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(153, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"вулиця:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(165, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"місто:";
			// 
			// tbTheatreNum
			// 
			this->tbTheatreNum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreNum->Location = System::Drawing::Point(249, 134);
			this->tbTheatreNum->Name = L"tbTheatreNum";
			this->tbTheatreNum->Size = System::Drawing::Size(235, 32);
			this->tbTheatreNum->TabIndex = 1;
			// 
			// tbTheatreStreet
			// 
			this->tbTheatreStreet->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreStreet->Location = System::Drawing::Point(249, 98);
			this->tbTheatreStreet->Name = L"tbTheatreStreet";
			this->tbTheatreStreet->Size = System::Drawing::Size(235, 32);
			this->tbTheatreStreet->TabIndex = 1;
			// 
			// tbTheatreCity
			// 
			this->tbTheatreCity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreCity->Location = System::Drawing::Point(249, 62);
			this->tbTheatreCity->Name = L"tbTheatreCity";
			this->tbTheatreCity->Size = System::Drawing::Size(235, 32);
			this->tbTheatreCity->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Введіть адресу:";
			// 
			// tbTheatreName
			// 
			this->tbTheatreName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tbTheatreName->Location = System::Drawing::Point(244, 3);
			this->tbTheatreName->Name = L"tbTheatreName";
			this->tbTheatreName->Size = System::Drawing::Size(240, 32);
			this->tbTheatreName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть назву театру";
			// 
			// tpEventList
			// 
			this->tpEventList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tpEventList->Controls->Add(this->isEmptyEventListPanel);
			this->tpEventList->Controls->Add(this->dgEventList);
			this->tpEventList->Controls->Add(this->panel5);
			this->tpEventList->Location = System::Drawing::Point(4, 34);
			this->tpEventList->Name = L"tpEventList";
			this->tpEventList->Padding = System::Windows::Forms::Padding(3);
			this->tpEventList->Size = System::Drawing::Size(492, 512);
			this->tpEventList->TabIndex = 1;
			this->tpEventList->Text = L"Редагувати список подій";
			// 
			// isEmptyEventListPanel
			// 
			this->isEmptyEventListPanel->Controls->Add(this->label17);
			this->isEmptyEventListPanel->Location = System::Drawing::Point(0, 0);
			this->isEmptyEventListPanel->Name = L"isEmptyEventListPanel";
			this->isEmptyEventListPanel->Size = System::Drawing::Size(489, 516);
			this->isEmptyEventListPanel->TabIndex = 31;
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 18));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(24, 141);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(436, 205);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Вибачте, але список \r\nподій пустий\r\nВін буде доступний, \r\nколи Ви будете редагува"
				L"ти\r\nінформацію про театри";
			this->label17->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dgEventList
			// 
			this->dgEventList->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dgEventList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgEventList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->EventNameColumn,
					this->EventDateColumn, this->StartEventTimeColumn, this->EndEventTime
			});
			this->dgEventList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgEventList->Location = System::Drawing::Point(3, 3);
			this->dgEventList->MultiSelect = false;
			this->dgEventList->Name = L"dgEventList";
			this->dgEventList->ReadOnly = true;
			this->dgEventList->RowHeadersVisible = false;
			this->dgEventList->RowHeadersWidth = 51;
			this->dgEventList->RowTemplate->Height = 24;
			this->dgEventList->Size = System::Drawing::Size(486, 429);
			this->dgEventList->TabIndex = 30;
			// 
			// EventNameColumn
			// 
			this->EventNameColumn->HeaderText = L"Назва події";
			this->EventNameColumn->MinimumWidth = 6;
			this->EventNameColumn->Name = L"EventNameColumn";
			this->EventNameColumn->ReadOnly = true;
			this->EventNameColumn->Width = 183;
			// 
			// EventDateColumn
			// 
			this->EventDateColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EventDateColumn->HeaderText = L"Дата події";
			this->EventDateColumn->MinimumWidth = 6;
			this->EventDateColumn->Name = L"EventDateColumn";
			this->EventDateColumn->ReadOnly = true;
			this->EventDateColumn->Width = 125;
			// 
			// StartEventTimeColumn
			// 
			this->StartEventTimeColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->StartEventTimeColumn->HeaderText = L"Початок події";
			this->StartEventTimeColumn->MinimumWidth = 6;
			this->StartEventTimeColumn->Name = L"StartEventTimeColumn";
			this->StartEventTimeColumn->ReadOnly = true;
			this->StartEventTimeColumn->Width = 125;
			// 
			// EndEventTime
			// 
			this->EndEventTime->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EndEventTime->HeaderText = L"Кінець події";
			this->EndEventTime->MinimumWidth = 6;
			this->EndEventTime->Name = L"EndEventTime";
			this->EndEventTime->ReadOnly = true;
			this->EndEventTime->Width = 125;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->btnDeleteSelectedEvent);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(3, 432);
			this->panel5->Margin = System::Windows::Forms::Padding(0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(486, 77);
			this->panel5->TabIndex = 28;
			// 
			// btnDeleteSelectedEvent
			// 
			this->btnDeleteSelectedEvent->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnDeleteSelectedEvent->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnDeleteSelectedEvent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnDeleteSelectedEvent->Location = System::Drawing::Point(287, 0);
			this->btnDeleteSelectedEvent->Name = L"btnDeleteSelectedEvent";
			this->btnDeleteSelectedEvent->Size = System::Drawing::Size(199, 77);
			this->btnDeleteSelectedEvent->TabIndex = 28;
			this->btnDeleteSelectedEvent->Text = L"Видалити вибрану подію";
			this->btnDeleteSelectedEvent->UseVisualStyleBackColor = true;
			this->btnDeleteSelectedEvent->Click += gcnew System::EventHandler(this, &AdminRoomForm::btnDeleteSelectedEvent_Click);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Left;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 77);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
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
			this->tpViewAllTheatres->Text = L"Переглянути театри";
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
			this->btnEditSelectedTheatre->Text = L"Редагувати вибраний театр";
			this->btnEditSelectedTheatre->UseVisualStyleBackColor = true;
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
			this->btnDeleteThisTheatre->Text = L"Видалити вибраний театр";
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
			this->btnCheckAllEvents->Text = L"Переглянути всі події";
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
			this->dgTheatreList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgTheatreList->Location = System::Drawing::Point(0, 0);
			this->dgTheatreList->MultiSelect = false;
			this->dgTheatreList->Name = L"dgTheatreList";
			this->dgTheatreList->ReadOnly = true;
			this->dgTheatreList->RowHeadersVisible = false;
			this->dgTheatreList->RowHeadersWidth = 51;
			this->dgTheatreList->RowTemplate->Height = 24;
			this->dgTheatreList->Size = System::Drawing::Size(492, 512);
			this->dgTheatreList->TabIndex = 31;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Назва театру";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 246;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Адреса театру";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 246;
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
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AdminRoomForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminRoomForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->MainTabControl->ResumeLayout(false);
			this->tpAddTheatre->ResumeLayout(false);
			this->tpAddTheatre->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->tpEventList->ResumeLayout(false);
			this->isEmptyEventListPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgEventList))->EndInit();
			this->panel5->ResumeLayout(false);
			this->tpViewAllTheatres->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgTheatreList))->EndInit();
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
			Date(cbEventDay->SelectedIndex + 1, cbEventMonth->SelectedIndex + 1, stoi(context.marshal_as<std::string>(cbEventYear->SelectedItem->ToString()))),
			Time(cbStartTimeHour->SelectedIndex, cbStartTimeMinute->SelectedIndex),
			Time(cbEndTimeHour->SelectedIndex, cbEndTimeMinute->SelectedIndex));

		currentEventVector->push_back(currentEvent);
		dgEventList->Rows->Add(
			gcnew String(currentEvent.eventName.data()),
			gcnew String(currentEvent.date.ToString().data()),
			gcnew String(currentEvent.startTime.ToString().data()),
			gcnew String(currentEvent.endTime.ToString().data()));
		isEmptyEventListPanel->Visible = false;

		}
		catch (const std::exception&)
		{
			MessageBox::Show("Theater not listed. Check the correctness of the entered data", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		//MessageBox::Show(gcnew String(currentEvent.startTime.ToString().data()));
		//MessageBox::Show(gcnew String(currentEvent.date.ToString().data()));
	}
	private: System::Void btnShowAllEvents_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentEventVector->size() > 0) {
			MainTabControl->SelectTab(1);
		}
		else
		{
			MessageBox::Show("Event list is empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void btnDeleteSelectedEvent_Click(System::Object^ sender, System::EventArgs^ e) {
		dgEventList->Rows->RemoveAt(dgEventList->CurrentCell->RowIndex);
		//добавить удаление из вектора
		currentEventVector->erase(currentEventVector->begin() + dgEventList->CurrentCell->RowIndex);
	}
	private: System::Void btnAddTheatreToList_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			msclr::interop::marshal_context context;

			if (currentEventVector->size() > 0) {
				Theatre currentTheatre(context.marshal_as<std::string>(this->tbTheatreName->Text),
					Adress(stoi(context.marshal_as<std::string>(tbTheatreNum->Text->ToString())), context.marshal_as<std::string>(tbTheatreStreet->Text), context.marshal_as<std::string>(tbTheatreCity->Text)),
					*currentEventVector);

				RegController regCtrl;
				regCtrl.jsonWriteTheatre(currentTheatre);
				MessageBox::Show("Theater information was successfully recorded!", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				ClearFields();
			}
			else
			{
				MessageBox::Show("Event list is empty!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (const std::exception&)
		{
			MessageBox::Show("Check the correctness of the entered data!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private:
		System::Void ClearFields(){
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

			dgEventList->Rows->Clear();
			currentEventVector->clear();
			isEmptyEventListPanel->Visible = true;
		}

private: System::Void MainTabControl_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	if (MainTabControl->SelectedIndex == 2) {
		vector<Theatre> theatres = RegController().GetTheatresVector();
		dgTheatreList->Rows->Clear();
		for (int i = 0; i < theatres.size(); i++) {
			dgTheatreList->Rows->Add(gcnew String(theatres[i].theatreName.data()), gcnew String(theatres[i].adress.ToString().data()));
		}
	}
}
private: System::Void btnDeleteThisTheatre_Click(System::Object^ sender, System::EventArgs^ e) {
	dgTheatreList->Rows->RemoveAt(dgTheatreList->CurrentCell->RowIndex);
	RegController().removeThetreAtIndex(dgTheatreList->CurrentCell->RowIndex);
}
private: System::Void btnCheckAllEvents_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	TicketHelper::AllEventViewerForm form(RegController().GetTheatresVector()[dgTheatreList->CurrentCell->RowIndex]);
	form.ShowDialog();
	this->Show();
}
};
}
