#pragma once
#include "Visitor.h"
#include "RegController.h"
#include "FindController.h"
#include "Event.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <algorithm>
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
	/// Сводка для VisitorRoomForm
	/// </summary>
	/// 
	public ref class VisitorRoomForm : public System::Windows::Forms::Form
	{
	private: Visitor* currentVisitor;
	public:
		VisitorRoomForm(Visitor* visitor)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			currentVisitor = visitor;

			string a = visitor->name;
			string b = visitor->surname;
			lbVisitorName->Text = gcnew String(("Hello, " + a + " " + b).data());

			dgEventList->AllowUserToAddRows = false;
			dgSearchResult->AllowUserToAddRows = false;

			cbSelectCity->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			cbSelectDate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			cbDuration->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			cbSelectDayTime->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;

			vector<Event> evs = RegController().GetAllEvents();
			for (int i = 0; i < visitor->tickets.size(); i++) {
				dgEventList->Rows->Add(
					gcnew String(visitor->tickets[i].eventName.data()),
					gcnew String(visitor->tickets[i].date.ToString().data()),
					gcnew String(visitor->tickets[i].startTime.ToString().data()),
					gcnew String(visitor->tickets[i].endTime.ToString().data()));

			}
			vector<Theatre> theatres = RegController().GetTheatresVector();
			for (int i = 0; i < theatres.size(); i++) {
				if (!cbSelectCity->Items->Contains(gcnew String(theatres[i].adress.city.data()))) {
					cbSelectCity->Items->Add(gcnew String(theatres[i].adress.city.data()));
				}
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~VisitorRoomForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::TabControl^ MainTabControl;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ lbVisitorName;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ btnGoBack;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ReturnSelectedTicket;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ dgEventList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EventNameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EventDateColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StartEventTimeColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EndEventTime;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ tbSearchEventName;


	private: System::Windows::Forms::Button^ btnSearch;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ ResultPanel;


	private: System::Windows::Forms::Button^ btnClearSearchResult;
	private: System::Windows::Forms::Button^ btnBuySelectedTicket;
	private: System::Windows::Forms::ComboBox^ cbSelectDayTime;
	private: System::Windows::Forms::ComboBox^ cbDuration;









	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbSelectDate;

	private: System::Windows::Forms::ComboBox^ cbSelectCity;
	private: System::Windows::Forms::DataGridView^ dgSearchResult;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TheatreNameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EventColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AdressColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StartColumn;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VisitorRoomForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->InfoButton = (gcnew System::Windows::Forms::Button());
			this->btnGoBack = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->MainTabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->ReturnSelectedTicket = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbVisitorName = (gcnew System::Windows::Forms::Label());
			this->dgEventList = (gcnew System::Windows::Forms::DataGridView());
			this->EventNameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EventDateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StartEventTimeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EndEventTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dgSearchResult = (gcnew System::Windows::Forms::DataGridView());
			this->TheatreNameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EventColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AdressColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StartColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ResultPanel = (gcnew System::Windows::Forms::Panel());
			this->btnBuySelectedTicket = (gcnew System::Windows::Forms::Button());
			this->btnClearSearchResult = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbSelectDayTime = (gcnew System::Windows::Forms::ComboBox());
			this->cbDuration = (gcnew System::Windows::Forms::ComboBox());
			this->cbSelectDate = (gcnew System::Windows::Forms::ComboBox());
			this->cbSelectCity = (gcnew System::Windows::Forms::ComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbSearchEventName = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->MainTabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgEventList))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgSearchResult))->BeginInit();
			this->ResultPanel->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->InfoButton);
			this->panel1->Controls->Add(this->btnGoBack);
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 73);
			this->panel1->TabIndex = 0;
			// 
			// InfoButton
			// 
			this->InfoButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->InfoButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 17, System::Drawing::FontStyle::Bold));
			this->InfoButton->ForeColor = System::Drawing::Color::White;
			this->InfoButton->Location = System::Drawing::Point(12, 12);
			this->InfoButton->Name = L"InfoButton";
			this->InfoButton->Size = System::Drawing::Size(50, 50);
			this->InfoButton->TabIndex = 9;
			this->InfoButton->Text = L"🛈";
			this->InfoButton->UseVisualStyleBackColor = false;
			this->InfoButton->Click += gcnew System::EventHandler(this, &VisitorRoomForm::InfoButton_Click);
			// 
			// btnGoBack
			// 
			this->btnGoBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnGoBack->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnGoBack->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnGoBack->ForeColor = System::Drawing::Color::White;
			this->btnGoBack->Location = System::Drawing::Point(229, 0);
			this->btnGoBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnGoBack->Name = L"btnGoBack";
			this->btnGoBack->Size = System::Drawing::Size(198, 73);
			this->btnGoBack->TabIndex = 8;
			this->btnGoBack->Text = L"Back";
			this->btnGoBack->UseVisualStyleBackColor = false;
			this->btnGoBack->Click += gcnew System::EventHandler(this, &VisitorRoomForm::btnGoBack_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Red;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 15, System::Drawing::FontStyle::Bold));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnExit->Location = System::Drawing::Point(427, 0);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(73, 73);
			this->btnExit->TabIndex = 7;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &VisitorRoomForm::btnExit_Click);
			// 
			// MainTabControl
			// 
			this->MainTabControl->Controls->Add(this->tabPage1);
			this->MainTabControl->Controls->Add(this->tabPage2);
			this->MainTabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainTabControl->Location = System::Drawing::Point(0, 73);
			this->MainTabControl->Name = L"MainTabControl";
			this->MainTabControl->SelectedIndex = 0;
			this->MainTabControl->Size = System::Drawing::Size(500, 549);
			this->MainTabControl->TabIndex = 2;
			this->MainTabControl->SelectedIndexChanged += gcnew System::EventHandler(this, &VisitorRoomForm::MainTabControl_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tabPage1->Controls->Add(this->ReturnSelectedTicket);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->dgEventList);
			this->tabPage1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tabPage1->Location = System::Drawing::Point(4, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(492, 506);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Visitor account info";
			// 
			// ReturnSelectedTicket
			// 
			this->ReturnSelectedTicket->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ReturnSelectedTicket->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->ReturnSelectedTicket->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->ReturnSelectedTicket->ForeColor = System::Drawing::Color::White;
			this->ReturnSelectedTicket->Location = System::Drawing::Point(3, 430);
			this->ReturnSelectedTicket->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ReturnSelectedTicket->Name = L"ReturnSelectedTicket";
			this->ReturnSelectedTicket->Size = System::Drawing::Size(486, 73);
			this->ReturnSelectedTicket->TabIndex = 34;
			this->ReturnSelectedTicket->Text = L"Return the selected ticket to the box office";
			this->ReturnSelectedTicket->UseVisualStyleBackColor = false;
			this->ReturnSelectedTicket->Click += gcnew System::EventHandler(this, &VisitorRoomForm::ReturnSelectedTicket_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->lbVisitorName);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(486, 63);
			this->panel2->TabIndex = 33;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(59, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(361, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"List of tickets you have purchased";
			// 
			// lbVisitorName
			// 
			this->lbVisitorName->AutoSize = true;
			this->lbVisitorName->ForeColor = System::Drawing::Color::White;
			this->lbVisitorName->Location = System::Drawing::Point(3, 0);
			this->lbVisitorName->Name = L"lbVisitorName";
			this->lbVisitorName->Size = System::Drawing::Size(72, 30);
			this->lbVisitorName->TabIndex = 0;
			this->lbVisitorName->Text = L"label1";
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
			this->dgEventList->Location = System::Drawing::Point(-3, 68);
			this->dgEventList->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dgEventList->MultiSelect = false;
			this->dgEventList->Name = L"dgEventList";
			this->dgEventList->ReadOnly = true;
			this->dgEventList->RowHeadersVisible = false;
			this->dgEventList->RowHeadersWidth = 51;
			this->dgEventList->RowTemplate->Height = 24;
			this->dgEventList->Size = System::Drawing::Size(499, 342);
			this->dgEventList->TabIndex = 32;
			// 
			// EventNameColumn
			// 
			this->EventNameColumn->HeaderText = L"Name";
			this->EventNameColumn->MinimumWidth = 6;
			this->EventNameColumn->Name = L"EventNameColumn";
			this->EventNameColumn->ReadOnly = true;
			this->EventNameColumn->Width = 183;
			// 
			// EventDateColumn
			// 
			this->EventDateColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EventDateColumn->HeaderText = L"Date";
			this->EventDateColumn->MinimumWidth = 6;
			this->EventDateColumn->Name = L"EventDateColumn";
			this->EventDateColumn->ReadOnly = true;
			this->EventDateColumn->Width = 125;
			// 
			// StartEventTimeColumn
			// 
			this->StartEventTimeColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->StartEventTimeColumn->HeaderText = L"Starts at";
			this->StartEventTimeColumn->MinimumWidth = 6;
			this->StartEventTimeColumn->Name = L"StartEventTimeColumn";
			this->StartEventTimeColumn->ReadOnly = true;
			this->StartEventTimeColumn->Width = 125;
			// 
			// EndEventTime
			// 
			this->EndEventTime->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EndEventTime->HeaderText = L"Ends at";
			this->EndEventTime->MinimumWidth = 6;
			this->EndEventTime->Name = L"EndEventTime";
			this->EndEventTime->ReadOnly = true;
			this->EndEventTime->Width = 125;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tabPage2->Controls->Add(this->dgSearchResult);
			this->tabPage2->Controls->Add(this->ResultPanel);
			this->tabPage2->Controls->Add(this->panel4);
			this->tabPage2->Controls->Add(this->panel3);
			this->tabPage2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tabPage2->Location = System::Drawing::Point(4, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(492, 506);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Search tickets";
			// 
			// dgSearchResult
			// 
			this->dgSearchResult->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dgSearchResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgSearchResult->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->TheatreNameColumn,
					this->EventColumn, this->AdressColumn, this->DateColumn, this->StartColumn
			});
			this->dgSearchResult->Dock = System::Windows::Forms::DockStyle::Top;
			this->dgSearchResult->Location = System::Drawing::Point(3, 40);
			this->dgSearchResult->MultiSelect = false;
			this->dgSearchResult->Name = L"dgSearchResult";
			this->dgSearchResult->ReadOnly = true;
			this->dgSearchResult->RowHeadersVisible = false;
			this->dgSearchResult->RowHeadersWidth = 51;
			this->dgSearchResult->RowTemplate->Height = 24;
			this->dgSearchResult->Size = System::Drawing::Size(328, 397);
			this->dgSearchResult->TabIndex = 4;
			// 
			// TheatreNameColumn
			// 
			this->TheatreNameColumn->HeaderText = L"Theatre name";
			this->TheatreNameColumn->MinimumWidth = 6;
			this->TheatreNameColumn->Name = L"TheatreNameColumn";
			this->TheatreNameColumn->ReadOnly = true;
			this->TheatreNameColumn->Width = 125;
			// 
			// EventColumn
			// 
			this->EventColumn->HeaderText = L"Event name";
			this->EventColumn->MinimumWidth = 6;
			this->EventColumn->Name = L"EventColumn";
			this->EventColumn->ReadOnly = true;
			this->EventColumn->Width = 125;
			// 
			// AdressColumn
			// 
			this->AdressColumn->HeaderText = L"Adress";
			this->AdressColumn->MinimumWidth = 6;
			this->AdressColumn->Name = L"AdressColumn";
			this->AdressColumn->ReadOnly = true;
			this->AdressColumn->Width = 125;
			// 
			// DateColumn
			// 
			this->DateColumn->HeaderText = L"Date";
			this->DateColumn->MinimumWidth = 6;
			this->DateColumn->Name = L"DateColumn";
			this->DateColumn->ReadOnly = true;
			this->DateColumn->Width = 125;
			// 
			// StartColumn
			// 
			this->StartColumn->HeaderText = L"Start time";
			this->StartColumn->MinimumWidth = 6;
			this->StartColumn->Name = L"StartColumn";
			this->StartColumn->ReadOnly = true;
			this->StartColumn->Width = 125;
			// 
			// ResultPanel
			// 
			this->ResultPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ResultPanel->Controls->Add(this->btnBuySelectedTicket);
			this->ResultPanel->Controls->Add(this->btnClearSearchResult);
			this->ResultPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->ResultPanel->Location = System::Drawing::Point(3, 435);
			this->ResultPanel->Name = L"ResultPanel";
			this->ResultPanel->Size = System::Drawing::Size(328, 68);
			this->ResultPanel->TabIndex = 1;
			// 
			// btnBuySelectedTicket
			// 
			this->btnBuySelectedTicket->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnBuySelectedTicket->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnBuySelectedTicket->Location = System::Drawing::Point(176, 0);
			this->btnBuySelectedTicket->Name = L"btnBuySelectedTicket";
			this->btnBuySelectedTicket->Size = System::Drawing::Size(152, 68);
			this->btnBuySelectedTicket->TabIndex = 3;
			this->btnBuySelectedTicket->Text = L"buy selected ticket";
			this->btnBuySelectedTicket->UseVisualStyleBackColor = true;
			this->btnBuySelectedTicket->Click += gcnew System::EventHandler(this, &VisitorRoomForm::btnBuySelectedTicket_Click);
			// 
			// btnClearSearchResult
			// 
			this->btnClearSearchResult->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnClearSearchResult->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnClearSearchResult->Location = System::Drawing::Point(0, 0);
			this->btnClearSearchResult->Name = L"btnClearSearchResult";
			this->btnClearSearchResult->Size = System::Drawing::Size(157, 68);
			this->btnClearSearchResult->TabIndex = 2;
			this->btnClearSearchResult->Text = L"clear search list";
			this->btnClearSearchResult->UseVisualStyleBackColor = true;
			this->btnClearSearchResult->Click += gcnew System::EventHandler(this, &VisitorRoomForm::btnClearSearchResult_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->cbSelectDayTime);
			this->panel4->Controls->Add(this->cbDuration);
			this->panel4->Controls->Add(this->cbSelectDate);
			this->panel4->Controls->Add(this->cbSelectCity);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel4->Location = System::Drawing::Point(331, 40);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(158, 463);
			this->panel4->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(13, 258);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 60);
			this->label5->TabIndex = 10;
			this->label5->Text = L"preferred\r\ntime of day";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(14, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 60);
			this->label4->TabIndex = 9;
			this->label4->Text = L"select event\r\nduration";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(20, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 30);
			this->label3->TabIndex = 8;
			this->label3->Text = L"select date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(29, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 30);
			this->label2->TabIndex = 0;
			this->label2->Text = L"select city";
			// 
			// cbSelectDayTime
			// 
			this->cbSelectDayTime->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbSelectDayTime->FormattingEnabled = true;
			this->cbSelectDayTime->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"morning", L"evening" });
			this->cbSelectDayTime->Location = System::Drawing::Point(3, 321);
			this->cbSelectDayTime->Name = L"cbSelectDayTime";
			this->cbSelectDayTime->Size = System::Drawing::Size(158, 38);
			this->cbSelectDayTime->TabIndex = 7;
			this->cbSelectDayTime->Text = L"select time of day";
			this->cbSelectDayTime->SelectedIndexChanged += gcnew System::EventHandler(this, &VisitorRoomForm::cbSelectDayTime_SelectedIndexChanged);
			// 
			// cbDuration
			// 
			this->cbDuration->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbDuration->FormattingEnabled = true;
			this->cbDuration->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"<1 hour", L"<2 hour", L"<3 hour", L"<4 hour",
					L"<5 hour"
			});
			this->cbDuration->Location = System::Drawing::Point(3, 217);
			this->cbDuration->Name = L"cbDuration";
			this->cbDuration->Size = System::Drawing::Size(158, 38);
			this->cbDuration->TabIndex = 6;
			this->cbDuration->Text = L"select duration";
			this->cbDuration->SelectedIndexChanged += gcnew System::EventHandler(this, &VisitorRoomForm::cbDuration_SelectedIndexChanged);
			// 
			// cbSelectDate
			// 
			this->cbSelectDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbSelectDate->FormattingEnabled = true;
			this->cbSelectDate->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"today", L"this month", L"next month", L"this year" });
			this->cbSelectDate->Location = System::Drawing::Point(0, 110);
			this->cbSelectDate->Name = L"cbSelectDate";
			this->cbSelectDate->Size = System::Drawing::Size(158, 38);
			this->cbSelectDate->TabIndex = 4;
			this->cbSelectDate->Text = L"select date";
			this->cbSelectDate->SelectedIndexChanged += gcnew System::EventHandler(this, &VisitorRoomForm::cbSelectDate_SelectedIndexChanged);
			// 
			// cbSelectCity
			// 
			this->cbSelectCity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cbSelectCity->FormattingEnabled = true;
			this->cbSelectCity->Location = System::Drawing::Point(0, 36);
			this->cbSelectCity->Name = L"cbSelectCity";
			this->cbSelectCity->Size = System::Drawing::Size(158, 38);
			this->cbSelectCity->TabIndex = 3;
			this->cbSelectCity->Text = L"select city";
			this->cbSelectCity->SelectionChangeCommitted += gcnew System::EventHandler(this, &VisitorRoomForm::citySelectionChanged);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->tbSearchEventName);
			this->panel3->Controls->Add(this->btnSearch);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(486, 37);
			this->panel3->TabIndex = 2;
			// 
			// tbSearchEventName
			// 
			this->tbSearchEventName->Dock = System::Windows::Forms::DockStyle::Left;
			this->tbSearchEventName->Location = System::Drawing::Point(0, 0);
			this->tbSearchEventName->Name = L"tbSearchEventName";
			this->tbSearchEventName->Size = System::Drawing::Size(341, 36);
			this->tbSearchEventName->TabIndex = 0;
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::Blue;
			this->btnSearch->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnSearch->ForeColor = System::Drawing::Color::White;
			this->btnSearch->Location = System::Drawing::Point(347, 0);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(139, 37);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"search 🔍";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &VisitorRoomForm::btnSearch_Click);
			// 
			// VisitorRoomForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(500, 622);
			this->Controls->Add(this->MainTabControl);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"VisitorRoomForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VisitorRoomForm";
			this->panel1->ResumeLayout(false);
			this->MainTabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgEventList))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgSearchResult))->EndInit();
			this->ResultPanel->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		Application::Exit();
	}
	private: System::Void btnGoBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void ReturnSelectedTicket_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgEventList->RowCount < 1)
		{
			MessageBox::Show("Ticket List is empty!", "Warming!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			int eventIndex = dgEventList->CurrentCell->RowIndex;
			dgEventList->Rows->RemoveAt(eventIndex);
			RegController().removeEventFromVisitor(eventIndex, *currentVisitor);
		}
		

		
	}

	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowSearchResult();

	}
	private: System::Void btnClearSearchResult_Click(System::Object^ sender, System::EventArgs^ e) {
		cbSelectCity->SelectedIndex = -1;
		cbSelectDate->SelectedIndex = -1;
		cbDuration->SelectedIndex = -1;
		cbSelectDayTime->SelectedIndex = -1;
		dgSearchResult->Rows->Clear();

	}
	private: vector<Event> FindEvents() {
		vector<Event> events = RegController().GetAllEvents();
		msclr::interop::marshal_context context;//ця штука необхідна для конвертації із std::string в System::String

		if (cbSelectCity->SelectedIndex != -1) {
			events = FindController().GetEventVectorByCity(events, context.marshal_as<std::string>(cbSelectCity->Text));
		}
		if (tbSearchEventName->Text->Length > 0) {
			events = FindController().GetEventVectorByEventName(events, context.marshal_as<std::string>(tbSearchEventName->Text));
		}
		if (cbDuration->SelectedIndex > -1) {
			int MaxMinutes = cbDuration->SelectedIndex * 60 + 60;
			//MessageBox::Show(MaxMinutes.ToString());
			events = FindController().GetEventVectorByDuration(events, MaxMinutes);
		}
		if (cbSelectDayTime->SelectedIndex > -1) {
			events = FindController().GetEventVectorByDayTime(events, cbSelectDayTime->SelectedIndex);
		}
		if (cbSelectDate->SelectedIndex > -1) {
			events = FindController().GetEventVectorByDate(events, cbSelectDate->SelectedIndex);
		}
		return events;
	}
	private: System::Void btnBuySelectedTicket_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgSearchResult->Rows->Count > 0) {
			vector<Event> events = FindEvents();
			string log = currentVisitor->login;
			RegController().addEventToVisitor(log, events[dgSearchResult->CurrentCell->RowIndex]);
			dgEventList->Rows->Add(
				gcnew String(events[dgSearchResult->CurrentCell->RowIndex].eventName.data()),
				gcnew String(events[dgSearchResult->CurrentCell->RowIndex].date.ToString().data()),
				gcnew String(events[dgSearchResult->CurrentCell->RowIndex].startTime.ToString().data()),
				gcnew String(events[dgSearchResult->CurrentCell->RowIndex].endTime.ToString().data()));
		}
		else
		{
			MessageBox::Show("You have not chosen a ticket", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void citySelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		dgSearchResult->Rows->Clear();
	}
	private: System::Void cbSelectDate_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		dgSearchResult->Rows->Clear();
	}
	private: System::Void cbDuration_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		dgSearchResult->Rows->Clear();
	}
	private: System::Void cbSelectDayTime_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		dgSearchResult->Rows->Clear();
	}
	private: System::Void MainTabControl_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (MainTabControl->SelectedIndex == 1)
		{
			ShowSearchResult();
		}
	}

	//виводить результати пошуку
	private: Void ShowSearchResult()
		   {
			   msclr::interop::marshal_context context;//ця штука необхідна для конвертації із std::string в System::String

			   dgSearchResult->Rows->Clear();

			   vector<Event> events = FindEvents();

			   for (int i = 0; i < events.size(); i++) {
				   vector<Theatre> theatres = RegController().GetTheatresVector();
				   for (int j = 0; j < theatres.size(); j++) {
					   if (events[i].theatreName == theatres[j].theatreName) {
						   dgSearchResult->Rows->Add(gcnew String((theatres[j].theatreName).data()),
							   gcnew String((events[i].eventName).data()),
							   gcnew String((theatres[j].adress.ToString()).data()),
							   gcnew String((events[i].date.ToString()).data()),
							   gcnew String((events[i].startTime.ToString()).data()));
					   }
				   }
			   }
		   }
private: System::Void InfoButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	TicketHelper::InfoForm InfoForm(2);
	InfoForm.ShowDialog();
	this->Show();
}
};
}