// Online_Exam.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "Database.h"
#include "StudentForm.h"
#include "ProfForm.h"
#include "GlobalVar.h"
#include "Form1.h"

using namespace Online_Exam;
using namespace Global_Var;
//using namespace Database;
//using namespace StudentForm;
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it

	Application::Run(gcnew Form1());

	return 0;
}
