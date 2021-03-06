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
		Boolean przecinek, firstNum;
		int dzialanieGlobal;

		void inputReset()
		{
			BoxInput->Text = "0";
		}	 //resetting input
		void outputReset()
		{
			BoxOutput->Text = "0";
		}	  //reseting output
		void operacja(int dzialanie)
		{
			dzialanieGlobal = dzialanie;
			if (firstNum)
			{
				liczba1 = Convert::ToDouble(BoxInput->Text);
				inputReset();
				przecinek = false;
				firstNum = false;
			}
			else
			{
				liczba2 = Convert::ToDouble(BoxInput->Text);
				inputReset();
				przecinek = false;
				firstNum = true;
				wynik(dzialanie);
				//koniec else
			}
		}

		void wynik(int dzialanie)
		{
			liczba2 = Convert::ToDouble(BoxInput->Text);
			if (dzialanie == -1)	//wywolany przez znak =
				dzialanie = dzialanieGlobal;
			liczba = 0.0;
			switch (dzialanie)
			{
			case 0:	//dodawanie
				liczba = liczba1 + liczba2;
				break;
			case 1: //odejmowanie
				liczba = liczba1 - liczba2;
				break;
			case 2: //mnozenie
				liczba = liczba1*liczba2;
				break;
			case 3: //dzielenie
				if (liczba2 != 0.0)
					liczba = liczba1 / liczba2;
				else
					TextBoxInfo->Text = L"[B��D] B��d dzielenia przez zero!\n\r";
				break;
			default:
				TextBoxInfo->Text = L"[B��D] Nieznana operacja!\n\r";
				break;
			}
			inputReset();
			BoxOutput->Text = liczba.ToString();

		}
		void MR()
		{
			BoxInput->Text = bufor.ToString();
		}
		void MC()
		{
			bufor = 0.0;
			LabelMemory->Text = L"0";
		}
		void Mplus ()
		{
			bufor = Convert::ToDouble(BoxInput->Text);
			LabelMemory->Text = bufor.ToString();
		}

		
	
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			resources->ApplyResources(this->ButtonNewWindow, L"ButtonNewWindow");
			this->ButtonNewWindow->AutoEllipsis = true;
			this->ButtonNewWindow->BackColor = System::Drawing::Color::DarkGray;
			this->ButtonNewWindow->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ButtonNewWindow->Name = L"ButtonNewWindow";
			this->ButtonNewWindow->UseVisualStyleBackColor = false;
			this->ButtonNewWindow->Click += gcnew System::EventHandler(this, &MyForm::ButtonNewWindow_Click);
			// 
			// LabelInput
			// 
			resources->ApplyResources(this->LabelInput, L"LabelInput");
			this->LabelInput->ForeColor = System::Drawing::SystemColors::Desktop;
			this->LabelInput->Name = L"LabelInput";
			this->LabelInput->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// LabelOutput
			// 
			resources->ApplyResources(this->LabelOutput, L"LabelOutput");
			this->LabelOutput->ForeColor = System::Drawing::SystemColors::Desktop;
			this->LabelOutput->Name = L"LabelOutput";
			// 
			// LabelMemoryMain
			// 
			resources->ApplyResources(this->LabelMemoryMain, L"LabelMemoryMain");
			this->LabelMemoryMain->ForeColor = System::Drawing::SystemColors::Desktop;
			this->LabelMemoryMain->Name = L"LabelMemoryMain";
			// 
			// LabelMemory
			// 
			resources->ApplyResources(this->LabelMemory, L"LabelMemory");
			this->LabelMemory->ForeColor = System::Drawing::SystemColors::Desktop;
			this->LabelMemory->Name = L"LabelMemory";
			// 
			// BoxInput
			// 
			resources->ApplyResources(this->BoxInput, L"BoxInput");
			this->BoxInput->BackColor = System::Drawing::SystemColors::Window;
			this->BoxInput->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->BoxInput->Name = L"BoxInput";
			// 
			// BoxOutput
			// 
			resources->ApplyResources(this->BoxOutput, L"BoxOutput");
			this->BoxOutput->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->BoxOutput->Name = L"BoxOutput";
			// 
			// Button7
			// 
			resources->ApplyResources(this->Button7, L"Button7");
			this->Button7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button7->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button7->Name = L"Button7";
			this->Button7->UseVisualStyleBackColor = false;
			this->Button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// Button8
			// 
			resources->ApplyResources(this->Button8, L"Button8");
			this->Button8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button8->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button8->Name = L"Button8";
			this->Button8->UseVisualStyleBackColor = false;
			this->Button8->Click += gcnew System::EventHandler(this, &MyForm::cos);
			// 
			// Button9
			// 
			resources->ApplyResources(this->Button9, L"Button9");
			this->Button9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button9->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button9->Name = L"Button9";
			this->Button9->UseVisualStyleBackColor = false;
			this->Button9->Click += gcnew System::EventHandler(this, &MyForm::cos);
			// 
			// ButtonDivide
			// 
			resources->ApplyResources(this->ButtonDivide, L"ButtonDivide");
			this->ButtonDivide->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonDivide->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonDivide->Name = L"ButtonDivide";
			this->ButtonDivide->UseVisualStyleBackColor = false;
			this->ButtonDivide->Click += gcnew System::EventHandler(this, &MyForm::ButtonDivide_Click);
			// 
			// ButtonMR
			// 
			resources->ApplyResources(this->ButtonMR, L"ButtonMR");
			this->ButtonMR->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonMR->ForeColor = System::Drawing::SystemColors::Desktop;
			this->ButtonMR->Name = L"ButtonMR";
			this->ButtonMR->UseVisualStyleBackColor = false;
			this->ButtonMR->Click += gcnew System::EventHandler(this, &MyForm::ButtonMR_Click);
			// 
			// ButtonMC
			// 
			resources->ApplyResources(this->ButtonMC, L"ButtonMC");
			this->ButtonMC->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonMC->ForeColor = System::Drawing::SystemColors::Desktop;
			this->ButtonMC->Name = L"ButtonMC";
			this->ButtonMC->UseVisualStyleBackColor = false;
			this->ButtonMC->Click += gcnew System::EventHandler(this, &MyForm::ButtonMC_Click);
			// 
			// ButtonMultiply
			// 
			resources->ApplyResources(this->ButtonMultiply, L"ButtonMultiply");
			this->ButtonMultiply->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonMultiply->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonMultiply->Name = L"ButtonMultiply";
			this->ButtonMultiply->UseVisualStyleBackColor = false;
			this->ButtonMultiply->Click += gcnew System::EventHandler(this, &MyForm::ButtonMultiply_Click);
			// 
			// Button6
			// 
			resources->ApplyResources(this->Button6, L"Button6");
			this->Button6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button6->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button6->Name = L"Button6";
			this->Button6->UseVisualStyleBackColor = false;
			this->Button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click_1);
			// 
			// Button5
			// 
			resources->ApplyResources(this->Button5, L"Button5");
			this->Button5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button5->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button5->Name = L"Button5";
			this->Button5->UseVisualStyleBackColor = false;
			this->Button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click_1);
			// 
			// Button4
			// 
			resources->ApplyResources(this->Button4, L"Button4");
			this->Button4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button4->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button4->Name = L"Button4";
			this->Button4->UseVisualStyleBackColor = false;
			this->Button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click_1);
			// 
			// ButtonEqual
			// 
			resources->ApplyResources(this->ButtonEqual, L"ButtonEqual");
			this->ButtonEqual->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonEqual->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonEqual->Name = L"ButtonEqual";
			this->ButtonEqual->UseVisualStyleBackColor = false;
			this->ButtonEqual->Click += gcnew System::EventHandler(this, &MyForm::ButtonEqual_Click);
			// 
			// ButtonAdd
			// 
			resources->ApplyResources(this->ButtonAdd, L"ButtonAdd");
			this->ButtonAdd->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonAdd->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->UseVisualStyleBackColor = false;
			this->ButtonAdd->Click += gcnew System::EventHandler(this, &MyForm::ButtonAdd_Click);
			// 
			// ButtonDot
			// 
			resources->ApplyResources(this->ButtonDot, L"ButtonDot");
			this->ButtonDot->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonDot->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonDot->Name = L"ButtonDot";
			this->ButtonDot->UseVisualStyleBackColor = false;
			this->ButtonDot->Click += gcnew System::EventHandler(this, &MyForm::ButtonDot_Click);
			// 
			// ButtonPosNeg
			// 
			resources->ApplyResources(this->ButtonPosNeg, L"ButtonPosNeg");
			this->ButtonPosNeg->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonPosNeg->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonPosNeg->Name = L"ButtonPosNeg";
			this->ButtonPosNeg->UseVisualStyleBackColor = false;
			this->ButtonPosNeg->Click += gcnew System::EventHandler(this, &MyForm::ButtonPosNeg_Click);
			// 
			// Button0
			// 
			resources->ApplyResources(this->Button0, L"Button0");
			this->Button0->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button0->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button0->Name = L"Button0";
			this->Button0->UseVisualStyleBackColor = false;
			// 
			// ButtonMPlus
			// 
			resources->ApplyResources(this->ButtonMPlus, L"ButtonMPlus");
			this->ButtonMPlus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonMPlus->ForeColor = System::Drawing::SystemColors::Desktop;
			this->ButtonMPlus->Name = L"ButtonMPlus";
			this->ButtonMPlus->UseVisualStyleBackColor = false;
			this->ButtonMPlus->Click += gcnew System::EventHandler(this, &MyForm::ButtonMPlus_Click);
			// 
			// ButtonMinus
			// 
			resources->ApplyResources(this->ButtonMinus, L"ButtonMinus");
			this->ButtonMinus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonMinus->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->ButtonMinus->Name = L"ButtonMinus";
			this->ButtonMinus->UseVisualStyleBackColor = false;
			this->ButtonMinus->Click += gcnew System::EventHandler(this, &MyForm::ButtonMinus_Click);
			// 
			// Button3
			// 
			resources->ApplyResources(this->Button3, L"Button3");
			this->Button3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button3->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button3->Name = L"Button3";
			this->Button3->UseVisualStyleBackColor = false;
			this->Button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click_1);
			// 
			// Button2
			// 
			resources->ApplyResources(this->Button2, L"Button2");
			this->Button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button2->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button2->Name = L"Button2";
			this->Button2->UseVisualStyleBackColor = false;
			this->Button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click_1);
			// 
			// Button1
			// 
			resources->ApplyResources(this->Button1, L"Button1");
			this->Button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Button1->ForeColor = System::Drawing::Color::AliceBlue;
			this->Button1->Name = L"Button1";
			this->Button1->UseVisualStyleBackColor = false;
			this->Button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click_1);
			// 
			// TextBoxInfo
			// 
			resources->ApplyResources(this->TextBoxInfo, L"TextBoxInfo");
			this->TextBoxInfo->Name = L"TextBoxInfo";
			// 
			// linkLabel1
			// 
			resources->ApplyResources(this->linkLabel1, L"linkLabel1");
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::Control;
			this->linkLabel1->LinkColor = System::Drawing::Color::WhiteSmoke;
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->TabStop = true;
			// 
			// ButtonToDo
			// 
			resources->ApplyResources(this->ButtonToDo, L"ButtonToDo");
			this->ButtonToDo->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonToDo->ForeColor = System::Drawing::SystemColors::Desktop;
			this->ButtonToDo->Name = L"ButtonToDo";
			this->ButtonToDo->UseVisualStyleBackColor = false;
			this->ButtonToDo->Click += gcnew System::EventHandler(this, &MyForm::ButtonToDo_Click);
			// 
			// ButtonChangeColor
			// 
			resources->ApplyResources(this->ButtonChangeColor, L"ButtonChangeColor");
			this->ButtonChangeColor->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonChangeColor->ForeColor = System::Drawing::SystemColors::Desktop;
			this->ButtonChangeColor->Name = L"ButtonChangeColor";
			this->ButtonChangeColor->UseVisualStyleBackColor = false;
			// 
			// ButtonChangeFont
			// 
			resources->ApplyResources(this->ButtonChangeFont, L"ButtonChangeFont");
			this->ButtonChangeFont->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ButtonChangeFont->ForeColor = System::Drawing::SystemColors::Desktop;
			this->ButtonChangeFont->Name = L"ButtonChangeFont";
			this->ButtonChangeFont->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
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
			this->Name = L"MyForm";
			this->Opacity = 0.9;
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
	firstNum = true;
	liczba = liczba1 = liczba2 = 0.0;
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
		 public: void Metoda(String ^s)
		 {

			 Console::WriteLine(s);
		 }


	private: System::Void ButtonPosNeg_Click(System::Object^  sender, System::EventArgs^  e) {
		//BoxInput->Text = BoxInput->"-"+Text;
	}


//Number Buttons
private: System::Void Button7_Click(System::Object^  sender, System::EventArgs^  e) {
	NumHandle(7);
}
private: System::Void Button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NumHandle(8);
}
private: System::Void Button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NumHandle(9);
}
private: System::Void Button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NumHandle(4);
}
private: System::Void Button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NumHandle(5);
}
private: System::Void Button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NumHandle(6);
}
private: System::Void Button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NumHandle(1);
}
private: System::Void Button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NumHandle(2);
}
private: System::Void Button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	NumHandle(3);
}
		 public:
			 void NumHandle(int number)
			 {
				 if (!firstNum)	//obsluga drugiej liczby
				 {
					 if (BoxInput->Text == "0")
					 {
						 BoxInput->Text = number.ToString();
					}
					 else
					 {
						 if (number >= 0 && number <= 9)
						 {
							 BoxInput->Text = BoxInput->Text + number.ToString();
						 }
						 outputReset();
					 }
				 }
				 else
				 {
					 BoxInput->Text = BoxInput->Text + number.ToString();
				 }
			 }

private: System::Void ButtonMR_Click(System::Object^  sender, System::EventArgs^  e) {
	MR();
}
private: System::Void ButtonMC_Click(System::Object^  sender, System::EventArgs^  e) {
	MC();
}
private: System::Void ButtonMPlus_Click(System::Object^  sender, System::EventArgs^  e) {
	Mplus();
}
private: System::Void ButtonDivide_Click(System::Object^  sender, System::EventArgs^  e) {
	operacja(3);
}
private: System::Void ButtonMultiply_Click(System::Object^  sender, System::EventArgs^  e) {
	operacja(2);
}
private: System::Void ButtonMinus_Click(System::Object^  sender, System::EventArgs^  e) {
	operacja(1);
	Console::WriteLine(sender->ToString());
	Metoda("-");
}
		 private: System::Void cos(System::Object^  sender, System::EventArgs^  e) {
			// operacja(1);
			 Console::WriteLine(sender->ToString());
			
			// Metoda("-");
		 }
		

private: System::Void ButtonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	//OutputDebugStringA(e->ToString());
	Console::WriteLine(sender->ToString());
	System::Threading::Thread::Sleep(2000);
	Console::WriteLine("Teraz jad� dalej");
	System::Threading::Thread::Sleep(20000);
	operacja(0);
}
private: System::Void ButtonEqual_Click(System::Object^  sender, System::EventArgs^  e) {
	wynik(-1);
}
};
}
