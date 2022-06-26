#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	//Запуск форми (графічного інтерфейсу)
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PasswordGenerator::MyForm());
}