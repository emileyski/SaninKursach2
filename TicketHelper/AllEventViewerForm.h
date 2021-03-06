#pragma once
#include "Theatre.h"
#include "RegController.h"

namespace TicketHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AllEventViewerForm
	/// </summary>
	public ref class AllEventViewerForm : public System::Windows::Forms::Form
	{
	private:
		int theatreIndex;
	public:
		AllEventViewerForm(int theatreIndex)
		{
			InitializeComponent();

			this->theatreIndex = theatreIndex;

			dgEventList->AllowUserToAddRows = false;

			RefreshEventsBaseAtTheatre();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AllEventViewerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::DataGridView^ dgEventList;




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnGoBack;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EventNameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EventDateColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StartEventTimeColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EndEventTime;
	private: System::Windows::Forms::Button^ btnDeleteEvent;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AllEventViewerForm::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->dgEventList = (gcnew System::Windows::Forms::DataGridView());
			this->EventNameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EventDateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StartEventTimeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EndEventTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnDeleteEvent = (gcnew System::Windows::Forms::Button());
			this->btnGoBack = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgEventList))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Red;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 15, System::Drawing::FontStyle::Bold));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnExit->Location = System::Drawing::Point(494, 0);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(69, 69);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &AllEventViewerForm::btnExit_Click);
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
			this->dgEventList->Location = System::Drawing::Point(0, 70);
			this->dgEventList->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dgEventList->MultiSelect = false;
			this->dgEventList->Name = L"dgEventList";
			this->dgEventList->ReadOnly = true;
			this->dgEventList->RowHeadersVisible = false;
			this->dgEventList->RowHeadersWidth = 51;
			this->dgEventList->RowTemplate->Height = 24;
			this->dgEventList->Size = System::Drawing::Size(563, 430);
			this->dgEventList->TabIndex = 31;
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
			// panel1
			// 
			this->panel1->Controls->Add(this->btnDeleteEvent);
			this->panel1->Controls->Add(this->btnGoBack);
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(563, 69);
			this->panel1->TabIndex = 32;
			// 
			// btnDeleteEvent
			// 
			this->btnDeleteEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnDeleteEvent->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnDeleteEvent->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnDeleteEvent->ForeColor = System::Drawing::Color::White;
			this->btnDeleteEvent->Location = System::Drawing::Point(98, 0);
			this->btnDeleteEvent->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDeleteEvent->Name = L"btnDeleteEvent";
			this->btnDeleteEvent->Size = System::Drawing::Size(198, 69);
			this->btnDeleteEvent->TabIndex = 7;
			this->btnDeleteEvent->Text = L"Delete event";
			this->btnDeleteEvent->UseVisualStyleBackColor = false;
			this->btnDeleteEvent->Click += gcnew System::EventHandler(this, &AllEventViewerForm::btnDeleteEvent_Click);
			// 
			// btnGoBack
			// 
			this->btnGoBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnGoBack->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnGoBack->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12.5F));
			this->btnGoBack->ForeColor = System::Drawing::Color::White;
			this->btnGoBack->Location = System::Drawing::Point(296, 0);
			this->btnGoBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnGoBack->Name = L"btnGoBack";
			this->btnGoBack->Size = System::Drawing::Size(198, 69);
			this->btnGoBack->TabIndex = 6;
			this->btnGoBack->Text = L"Back";
			this->btnGoBack->UseVisualStyleBackColor = false;
			this->btnGoBack->Click += gcnew System::EventHandler(this, &AllEventViewerForm::btnGoBack_Click);
			// 
			// AllEventViewerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(563, 500);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dgEventList);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 11));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AllEventViewerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Всі події";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgEventList))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnGoBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnDeleteEvent_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{

			int eventIndex = this->dgEventList->CurrentCell->RowIndex;

			RegController().removeEventFromTheatre(theatreIndex, eventIndex);

			RefreshEventsBaseAtTheatre();
		}
		catch (const std::exception&)
		{
			MessageBox::Show("gfrt");
		}

	}
	private: Void RefreshEventsBaseAtTheatre()
	{
		Theatre theatre = RegController().GetTheatreAtIndex(theatreIndex);
		dgEventList->Rows->Clear();
		for (int i = 0; i < theatre.events.size(); i++) {
			dgEventList->Rows->Add(
				gcnew String(theatre.events[i].eventName.data()),
				gcnew String(theatre.events[i].date.ToString().data()),
				gcnew String(theatre.events[i].startTime.ToString().data()),
				gcnew String(theatre.events[i].endTime.ToString().data()));
		}
	}
};
}
