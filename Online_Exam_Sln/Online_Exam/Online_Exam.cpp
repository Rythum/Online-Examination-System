// Online_Exam.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "Database.h"
#include "StudentForm.h"
#include "ProfForm.h"

using namespace Online_Exam;
using namespace Database;
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew StudentForm());
	
	return 0;
}
