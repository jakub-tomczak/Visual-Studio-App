#include "MyForm.h"


using namespace System;
using namespace System::Windows;
using namespace System::Windows::Forms;
//array<String^>^ args
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WindowAppTest::MyForm form;
	Application::Run(%form);


}

