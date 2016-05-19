#pragma once
#include "OpenFileDialog1.h"
namespace WindowAppTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:	
	Double liczba, liczba1, liczba2;
	Double suma, roznica, iloczyn, iloraz;
	Double bufor;
	Char operacja;
	Boolean przecinek;
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ButtonNewWindow;
	protected:

	protected:


	private: System::Windows::Forms::Label^  LabelInput;

	private: System::Windows::Forms::Label^  LabelOutput;
	private: System::Windows::Forms::Label^  LabelMemoryMain;
	private: System::Windows::Forms::Label^  LabelMemory;
	private: System::Windows::Forms::TextBox^  BoxInput;
	private: System::Windows::Forms::TextBox^  BoxOutput;
	private: System::Windows::Forms::Button^  Button7;
	private: System::Windows::Forms::Button^  Button8;
	private: System::Windows::Forms::Button^  Button9;
	private: System::Windows::Forms::Button^  ButtonDivide;
	private: System::Windows::Forms::Button^  ButtonMR;
	private: System::Windows::Forms::Button^  ButtonMC;
	private: System::Windows::Forms::Button^  ButtonMultiply;
	private: System::Windows::Forms::Button^  Button6;
	private: System::Windows::Forms::Button^  Button5;
	private: System::Windows::Forms::Button^  Button4;
	private: System::Windows::Forms::Button^  ButtonEqual;
	private: System::Windows::Forms::Button^  ButtonAdd;
	private: System::Windows::Forms::Button^  ButtonDot;
	private: System::Windows::Forms::Button^  ButtonPosNeg;
	private: System::Windows::Forms::Button^  Button0;
	private: System::Windows::Forms::Button^  ButtonMPlus;
	private: System::Windows::Forms::Button^  ButtonMinus;
	private: System::Windows::Forms::Button^  Button3;
	private: System::Windows::Forms::Button^  Button2;
	private: System::Windows::Forms::Button^  Button1;

	private: System::Windows::Forms::TextBox^  TextBoxInfo;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Button^  ButtonToDo;
	private: System::Windows::Forms::Button^  ButtonChangeColor;
	private: System::Windows::Forms::Button^  ButtonChangeFont;


	private:
		
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ButtonNewWindow = (gcnew System::Windows::Forms::Button());
			this->LabelInput = (gcnew System::Windows::Forms::Label());
			this->LabelOutput = (gcnew System::Windows::Forms::Label());
			this->LabelMemoryMain = (gcnew System::Windows::Forms::Label());
			this->LabelMemory = (gcnew System::Windows::Forms::Label());
			this->BoxInput = (gcnew System::Windows::Forms::TextBox());
			this->BoxOutput = (gcnew System::Windows::Forms::TextBox());
			this->Button7 = (gcnew System::Windows::Forms::Button());
			this->Button8 = (gcnew System::Windows::Forms::Button());
			this->Button9 = (gcnew System::Windows::Forms::Button());
			this->ButtonDivide = (gcnew System::Windows::Forms::Button());
			this->ButtonMR = (gcnew System::Windows::Forms::Button());
			this->ButtonMC = (gcnew System::Windows::Forms::Button());
			this->ButtonMultiply = (gcnew System::Windows::Forms::Button());
			this->Button6 = (gcnew System::Windows::Forms::Button());
			this->Button5 = (gcnew System::Windows::Forms::Button());
			this->Button4 = (gcnew System::Windows::Forms::Button());
			this->ButtonEqual = (gcnew System::Windows::Forms::Button());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->ButtonDot = (gcnew System::Windows::Forms::Button());
			this->ButtonPosNeg = (gcnew System::Windows::Forms::Button());
			this->Button0 = (gcnew System::Windows::Forms::Button());
			this->ButtonMPlus = (gcnew System::Windows::Forms::Button());
			this->ButtonMinus = (gcnew System::Windows::Forms::Button());
			this->Button3 = (gcnew System::Windows::Forms::Button());
			this->Button2 = (gcnew System::Windows::Forms::Button());
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->TextBoxInfo = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->ButtonToDo = (gcnew System::Windows::Forms::Button());
			this->ButtonChangeColor = (gcnew System::Windows::Forms::Button());
			this->ButtonChangeFont = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ButtonNewWindow
			// 
			this->ButtonNewWindow->AutoEllipsis = true;
			this->ButtonNewWindow->Location = System::Drawing::Point(311, 345);
			this->ButtonNewWindow->Margin = System::Windows::Forms::Padding(4);
			this->ButtonNewWindow->Name = L"ButtonNewWindow";
			this->ButtonNewWindow->Size = System::Drawing::Size(109, 171);
			this->ButtonNewWindow->TabIndex = 2;
			this->ButtonNewWindow->Text = L"PrzejdŸ do drugiego okna";
			this->ButtonNewWindow->UseVisualStyleBackColor = true;
			this->ButtonNewWindow->Click += gcnew System::EventHandler(this, &MyForm::ButtonNewWindow_Click);
			// 
			// LabelInput
			// 
			this->LabelInput->AutoSize = true;
			this->LabelInput->Location = System::Drawing::Point(47, 31);
			this->LabelInput->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelInput->Name = L"LabelInput";
			this->LabelInput->Size = System::Drawing::Size(59, 19);
			this->LabelInput->TabIndex = 3;
			this->LabelInput->Text = L"INPUT";
			this->LabelInput->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// LabelOutput
			// 
			this->LabelOutput->AutoSize = true;
			this->LabelOutput->Location = System::Drawing::Point(47, 69);
			this->LabelOutput->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelOutput->Name = L"LabelOutput";
			this->LabelOutput->Size = System::Drawing::Size(74, 19);
			this->LabelOutput->TabIndex = 4;
			this->LabelOutput->Text = L"OUTPUT";
			// 
			// LabelMemoryMain
			// 
			this->LabelMemoryMain->AutoSize = true;
			this->LabelMemoryMain->Location = System::Drawing::Point(272, 24);
			this->LabelMemoryMain->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelMemoryMain->Name = L"LabelMemoryMain";
			this->LabelMemoryMain->Size = System::Drawing::Size(72, 19);
			this->LabelMemoryMain->TabIndex = 5;
			this->LabelMemoryMain->Text = L"Memory";
			// 
			// LabelMemory
			// 
			this->LabelMemory->AutoSize = true;
			this->LabelMemory->Location = System::Drawing::Point(359, 24);
			this->LabelMemory->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelMemory->Name = L"LabelMemory";
			this->LabelMemory->Size = System::Drawing::Size(19, 19);
			this->LabelMemory->TabIndex = 6;
			this->LabelMemory->Text = L"0";
			// 
			// BoxInput
			// 
			this->BoxInput->Location = System::Drawing::Point(128, 24);
			this->BoxInput->Margin = System::Windows::Forms::Padding(4);
			this->BoxInput->Name = L"BoxInput";
			this->BoxInput->Size = System::Drawing::Size(112, 27);
			this->BoxInput->TabIndex = 7;
			// 
			// BoxOutput
			// 
			this->BoxOutput->Location = System::Drawing::Point(128, 65);
			this->BoxOutput->Name = L"BoxOutput";
			this->BoxOutput->Size = System::Drawing::Size(112, 27);
			this->BoxOutput->TabIndex = 8;
			// 
			// Button7
			// 
			this->Button7->Location = System::Drawing::Point(51, 107);
			this->Button7->Name = L"Button7";
			this->Button7->Size = System::Drawing::Size(51, 23);
			this->Button7->TabIndex = 9;
			this->Button7->Text = L"7";
			this->Button7->UseVisualStyleBackColor = true;
			this->Button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// Button8
			// 
			this->Button8->Location = System::Drawing::Point(114, 107);
			this->Button8->Name = L"Button8";
			this->Button8->Size = System::Drawing::Size(51, 23);
			this->Button8->TabIndex = 10;
			this->Button8->Text = L"8";
			this->Button8->UseVisualStyleBackColor = true;
			this->Button8->Click += gcnew System::EventHandler(this, &MyForm::Button8_Click_1);
			// 
			// Button9
			// 
			this->Button9->Location = System::Drawing::Point(180, 107);
			this->Button9->Name = L"Button9";
			this->Button9->Size = System::Drawing::Size(51, 23);
			this->Button9->TabIndex = 11;
			this->Button9->Text = L"9";
			this->Button9->UseVisualStyleBackColor = true;
			this->Button9->Click += gcnew System::EventHandler(this, &MyForm::Button9_Click_1);
			// 
			// ButtonDivide
			// 
			this->ButtonDivide->Location = System::Drawing::Point(276, 107);
			this->ButtonDivide->Name = L"ButtonDivide";
			this->ButtonDivide->Size = System::Drawing::Size(62, 23);
			this->ButtonDivide->TabIndex = 12;
			this->ButtonDivide->Text = L"/";
			this->ButtonDivide->UseVisualStyleBackColor = true;
			// 
			// ButtonMR
			// 
			this->ButtonMR->Location = System::Drawing::Point(358, 107);
			this->ButtonMR->Name = L"ButtonMR";
			this->ButtonMR->Size = System::Drawing::Size(62, 23);
			this->ButtonMR->TabIndex = 13;
			this->ButtonMR->Text = L"MR";
			this->ButtonMR->UseVisualStyleBackColor = true;
			// 
			// ButtonMC
			// 
			this->ButtonMC->Location = System::Drawing::Point(358, 147);
			this->ButtonMC->Name = L"ButtonMC";
			this->ButtonMC->Size = System::Drawing::Size(62, 23);
			this->ButtonMC->TabIndex = 18;
			this->ButtonMC->Text = L"MC";
			this->ButtonMC->UseVisualStyleBackColor = true;
			// 
			// ButtonMultiply
			// 
			this->ButtonMultiply->Location = System::Drawing::Point(276, 147);
			this->ButtonMultiply->Name = L"ButtonMultiply";
			this->ButtonMultiply->Size = System::Drawing::Size(62, 23);
			this->ButtonMultiply->TabIndex = 17;
			this->ButtonMultiply->Text = L"*";
			this->ButtonMultiply->UseVisualStyleBackColor = true;
			// 
			// Button6
			// 
			this->Button6->Location = System::Drawing::Point(180, 147);
			this->Button6->Name = L"Button6";
			this->Button6->Size = System::Drawing::Size(51, 23);
			this->Button6->TabIndex = 16;
			this->Button6->Text = L"6";
			this->Button6->UseVisualStyleBackColor = true;
			this->Button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click_1);
			// 
			// Button5
			// 
			this->Button5->Location = System::Drawing::Point(114, 147);
			this->Button5->Name = L"Button5";
			this->Button5->Size = System::Drawing::Size(51, 23);
			this->Button5->TabIndex = 15;
			this->Button5->Text = L"5";
			this->Button5->UseVisualStyleBackColor = true;
			this->Button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click_1);
			// 
			// Button4
			// 
			this->Button4->Location = System::Drawing::Point(51, 147);
			this->Button4->Name = L"Button4";
			this->Button4->Size = System::Drawing::Size(51, 23);
			this->Button4->TabIndex = 14;
			this->Button4->Text = L"4";
			this->Button4->UseVisualStyleBackColor = true;
			this->Button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click_1);
			// 
			// ButtonEqual
			// 
			this->ButtonEqual->Location = System::Drawing::Point(358, 231);
			this->ButtonEqual->Name = L"ButtonEqual";
			this->ButtonEqual->Size = System::Drawing::Size(62, 23);
			this->ButtonEqual->TabIndex = 28;
			this->ButtonEqual->Text = L"=";
			this->ButtonEqual->UseVisualStyleBackColor = true;
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Location = System::Drawing::Point(276, 231);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(62, 23);
			this->ButtonAdd->TabIndex = 27;
			this->ButtonAdd->Text = L"+";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			// 
			// ButtonDot
			// 
			this->ButtonDot->Location = System::Drawing::Point(180, 231);
			this->ButtonDot->Name = L"ButtonDot";
			this->ButtonDot->Size = System::Drawing::Size(51, 23);
			this->ButtonDot->TabIndex = 26;
			this->ButtonDot->Text = L".";
			this->ButtonDot->UseVisualStyleBackColor = true;
			this->ButtonDot->Click += gcnew System::EventHandler(this, &MyForm::ButtonDot_Click);
			// 
			// ButtonPosNeg
			// 
			this->ButtonPosNeg->Location = System::Drawing::Point(114, 231);
			this->ButtonPosNeg->Name = L"ButtonPosNeg";
			this->ButtonPosNeg->Size = System::Drawing::Size(51, 23);
			this->ButtonPosNeg->TabIndex = 25;
			this->ButtonPosNeg->Text = L"+/-";
			this->ButtonPosNeg->UseVisualStyleBackColor = true;
			this->ButtonPosNeg->Click += gcnew System::EventHandler(this, &MyForm::ButtonPosNeg_Click);
			// 
			// Button0
			// 
			this->Button0->Location = System::Drawing::Point(51, 231);
			this->Button0->Name = L"Button0";
			this->Button0->Size = System::Drawing::Size(51, 23);
			this->Button0->TabIndex = 24;
			this->Button0->Text = L"0";
			this->Button0->UseVisualStyleBackColor = true;
			// 
			// ButtonMPlus
			// 
			this->ButtonMPlus->Location = System::Drawing::Point(358, 189);
			this->ButtonMPlus->Name = L"ButtonMPlus";
			this->ButtonMPlus->Size = System::Drawing::Size(62, 23);
			this->ButtonMPlus->TabIndex = 23;
			this->ButtonMPlus->Text = L"M+";
			this->ButtonMPlus->UseVisualStyleBackColor = true;
			// 
			// ButtonMinus
			// 
			this->ButtonMinus->Location = System::Drawing::Point(276, 189);
			this->ButtonMinus->Name = L"ButtonMinus";
			this->ButtonMinus->Size = System::Drawing::Size(62, 23);
			this->ButtonMinus->TabIndex = 22;
			this->ButtonMinus->Text = L"-";
			this->ButtonMinus->UseVisualStyleBackColor = true;
			// 
			// Button3
			// 
			this->Button3->Location = System::Drawing::Point(180, 189);
			this->Button3->Name = L"Button3";
			this->Button3->Size = System::Drawing::Size(51, 23);
			this->Button3->TabIndex = 21;
			this->Button3->Text = L"3";
			this->Button3->UseVisualStyleBackColor = true;
			this->Button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click_1);
			// 
			// Button2
			// 
			this->Button2->Location = System::Drawing::Point(114, 189);
			this->Button2->Name = L"Button2";
			this->Button2->Size = System::Drawing::Size(51, 23);
			this->Button2->TabIndex = 20;
			this->Button2->Text = L"2";
			this->Button2->UseVisualStyleBackColor = true;
			this->Button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click_1);
			// 
			// Button1
			// 
			this->Button1->Location = System::Drawing::Point(51, 189);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(51, 23);
			this->Button1->TabIndex = 19;
			this->Button1->Text = L"1";
			this->Button1->UseVisualStyleBackColor = true;
			this->Button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click_1);
			// 
			// TextBoxInfo
			// 
			this->TextBoxInfo->Location = System::Drawing::Point(51, 345);
			this->TextBoxInfo->Multiline = true;
			this->TextBoxInfo->Name = L"TextBoxInfo";
			this->TextBoxInfo->Size = System::Drawing::Size(246, 171);
			this->TextBoxInfo->TabIndex = 29;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(272, 65);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(96, 19);
			this->linkLabel1->TabIndex = 30;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"www.wp.pl";
			// 
			// ButtonToDo
			// 
			this->ButtonToDo->Location = System::Drawing::Point(51, 274);
			this->ButtonToDo->Name = L"ButtonToDo";
			this->ButtonToDo->Size = System::Drawing::Size(101, 35);
			this->ButtonToDo->TabIndex = 31;
			this->ButtonToDo->Text = L"ToDo";
			this->ButtonToDo->UseVisualStyleBackColor = true;
			this->ButtonToDo->Click += gcnew System::EventHandler(this, &MyForm::ButtonToDo_Click);
			// 
			// ButtonChangeColor
			// 
			this->ButtonChangeColor->Location = System::Drawing::Point(168, 274);
			this->ButtonChangeColor->Name = L"ButtonChangeColor";
			this->ButtonChangeColor->Size = System::Drawing::Size(118, 35);
			this->ButtonChangeColor->TabIndex = 32;
			this->ButtonChangeColor->Text = L"ChangeColor";
			this->ButtonChangeColor->UseVisualStyleBackColor = true;
			// 
			// ButtonChangeFont
			// 
			this->ButtonChangeFont->Location = System::Drawing::Point(311, 274);
			this->ButtonChangeFont->Name = L"ButtonChangeFont";
			this->ButtonChangeFont->Size = System::Drawing::Size(109, 36);
			this->ButtonChangeFont->TabIndex = 33;
			this->ButtonChangeFont->Text = L"ChangeFont";
			this->ButtonChangeFont->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(495, 558);
			this->Controls->Add(this->ButtonChangeFont);
			this->Controls->Add(this->ButtonChangeColor);
			this->Controls->Add(this->ButtonToDo);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->TextBoxInfo);
			this->Controls->Add(this->ButtonEqual);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->ButtonDot);
			this->Controls->Add(this->ButtonPosNeg);
			this->Controls->Add(this->Button0);
			this->Controls->Add(this->ButtonMPlus);
			this->Controls->Add(this->ButtonMinus);
			this->Controls->Add(this->Button3);
			this->Controls->Add(this->Button2);
			this->Controls->Add(this->Button1);
			this->Controls->Add(this->ButtonMC);
			this->Controls->Add(this->ButtonMultiply);
			this->Controls->Add(this->Button6);
			this->Controls->Add(this->Button5);
			this->Controls->Add(this->Button4);
			this->Controls->Add(this->ButtonMR);
			this->Controls->Add(this->ButtonDivide);
			this->Controls->Add(this->Button9);
			this->Controls->Add(this->Button8);
			this->Controls->Add(this->Button7);
			this->Controls->Add(this->BoxOutput);
			this->Controls->Add(this->BoxInput);
			this->Controls->Add(this->LabelMemory);
			this->Controls->Add(this->LabelMemoryMain);
			this->Controls->Add(this->LabelOutput);
			this->Controls->Add(this->LabelInput);
			this->Controls->Add(this->ButtonNewWindow);
			this->Font = (gcnew System::Drawing::Font(L"Apolonia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Kalkulator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//}
	private: System::Void ButtonNewWindow_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog1 ^form = gcnew OpenFileDialog1;
		form->ShowDialog();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	przecinek = false;
	bufor = 0;
}
private: System::Void ButtonToDo_Click(System::Object^  sender, System::EventArgs^  e) {
			 TextBoxInfo->Text = TextBoxInfo->Text + "ToDo";
		 }
private: System::Void ButtonDot_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!przecinek)
	{

		przecinek = true;
		TextBoxInfo->Text = TextBoxInfo->Text + "DOT added\n";
	}
	else {

		przecinek = false;
		TextBoxInfo->Text = TextBoxInfo->Text + "DOT deleted\n";

	}
	
}
	private: System::Void ButtonPosNeg_Click(System::Object^  sender, System::EventArgs^  e) {
		BoxInput->Text = BoxInput->"-"+Text;
	}


//Number Buttons
private: System::Void Button7_Click(System::Object^  sender, System::EventArgs^  e) {
	BoxInput->Text = BoxInput->Text + "7";
}
private: System::Void Button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
	BoxInput->Text = BoxInput->Text + "8";
}
private: System::Void Button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
	BoxInput->Text = BoxInput->Text + "9";
}
private: System::Void Button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	BoxInput->Text = BoxInput->Text + "4";
}
private: System::Void Button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	BoxInput->Text = BoxInput->Text + "5";
}
private: System::Void Button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	BoxInput->Text = BoxInput->Text + "6";
}
private: System::Void Button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	BoxInput->Text = BoxInput->Text + "1";
}
private: System::Void Button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	BoxInput->Text = BoxInput->Text + "2";
}
private: System::Void Button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	BoxInput->Text = BoxInput->Text + "3";
}
};
}
