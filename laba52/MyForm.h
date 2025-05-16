#pragma once
#include <cmath>
namespace laba52 {

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
	private: System::Windows::Forms::Label^ labelA;
	protected:
	private: System::Windows::Forms::Label^ labelB;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ обчислитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;

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
			this->labelA = (gcnew System::Windows::Forms::Label());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->обчислитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelA
			// 
			this->labelA->AutoSize = true;
			this->labelA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelA->Location = System::Drawing::Point(75, 167);
			this->labelA->Name = L"labelA";
			this->labelA->Size = System::Drawing::Size(32, 25);
			this->labelA->TabIndex = 20;
			this->labelA->Text = L"A:";
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelB->Location = System::Drawing::Point(75, 248);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(31, 25);
			this->labelB->TabIndex = 21;
			this->labelB->Text = L"B:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(75, 324);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 25);
			this->label3->TabIndex = 22;
			this->label3->Text = L"H:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(139, 164);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(31, 30);
			this->textBox3->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(139, 248);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(31, 30);
			this->textBox4->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(139, 321);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(31, 30);
			this->textBox5->TabIndex = 25;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"", L"", L"", L"", L"", L"", L"" });
			this->listBox2->Location = System::Drawing::Point(315, 167);
			this->listBox2->Margin = System::Windows::Forms::Padding(2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(174, 186);
			this->listBox2->TabIndex = 28;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->обчислитиToolStripMenuItem,
					this->очиститиToolStripMenuItem, this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1085, 33);
			this->menuStrip1->TabIndex = 29;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// обчислитиToolStripMenuItem
			// 
			this->обчислитиToolStripMenuItem->Name = L"обчислитиToolStripMenuItem";
			this->обчислитиToolStripMenuItem->Size = System::Drawing::Size(116, 29);
			this->обчислитиToolStripMenuItem->Text = L"Обчислити";
			this->обчислитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обчислитиToolStripMenuItem_Click);
			// 
			// очиститиToolStripMenuItem
			// 
			this->очиститиToolStripMenuItem->Name = L"очиститиToolStripMenuItem";
			this->очиститиToolStripMenuItem->Size = System::Drawing::Size(104, 29);
			this->очиститиToolStripMenuItem->Text = L"Очистити";
			this->очиститиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститиToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(149, 29);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(125, 29);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1085, 610);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->labelB);
			this->Controls->Add(this->labelA);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void обчислитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();

		try {
			double a = Convert::ToDouble(textBox3->Text);
			double b = Convert::ToDouble(textBox4->Text);
			double h = Convert::ToDouble(textBox5->Text);

			if (h <= 0 || a > b) {
				MessageBox::Show("Неправильні значення: a ≤ b, h > 0");
				return;
			}

			for (double x = a; x <= b + 1e-9; x += h) {
				double fx = (1.0 / std::exp(x)) + std::log10(x / 2 + 0.1);
				listBox2->Items->Add("x = " + x.ToString("F2") + "\t f(x) = " + fx.ToString("F6"));
			}
		}
		catch (...) {
			MessageBox::Show("Помилка введення. Введіть правильні числа.");
		}
	}
private: System::Void очиститиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Clear(); textBox4->Clear(); textBox5->Clear();
	listBox2->Items->Clear();
}
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Програма табулює функцію f(x) = 1/e^x + lg(x/2 + 0.1) на заданому інтервалі", "Про програму");
}
private: System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Розробник: Юлія Никитюк, група 3СОМ", "Про автора");
}
};
}
