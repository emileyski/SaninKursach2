#include "RegAuthForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TicketHelper::RegAuthForm form;
	Application::Run(% form);
}