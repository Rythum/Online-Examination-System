#pragma once
namespace Questions{
	using namespace System;
	using namespace System::Data;
	using namespace System::Collections::Generic;
	public ref class Ques{
	public:
		String ^ q;
		List<String ^> ^lc;
		List<String ^> ^li;
		int tf;
		String ^ow;
		int type;
		Ques(){
			q = "";
			lc = gcnew List<String^>;
			li = gcnew List<String^>;
			tf = 1;
			ow = "";
			type = -1;//	0=MCQ;		1=T/F;		2=OneWord;
		}
	};
}