#include "wndForm.h"
#include <thread>

using namespace LoadCPU;

bool isRuning = false;

void startThreaders()
{
	while (isRuning);
}

System::Void wndForm::btnBegin_Click(System::Object^ sender, System::EventArgs^ e)
{
	btnBegin->Enabled = false;
	btnEnd->Enabled = true;

	btnBegin->BackColor = System::Drawing::SystemColors::Control;
	btnEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));

	isRuning = true;
	
	for (size_t i = 0; i < static_cast<size_t>(cntThreaders->Value); i++)
	{
		std::thread threadStart(startThreaders);
		threadStart.detach();
	}
};

System::Void wndForm::btnEnd_Click(System::Object^ sender, System::EventArgs^ e)
{
	isRuning = false;
	
	btnBegin->Enabled = true;
	btnEnd->Enabled = false;

	btnBegin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	btnEnd->BackColor = System::Drawing::SystemColors::Control;
};