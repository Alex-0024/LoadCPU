#include "wndForm.h"

using namespace LoadCPU;

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	wndForm^ workObject = gcnew wndForm();
	Application::Run(workObject);
	
	return 0;
}