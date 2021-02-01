#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Function.h"





namespace Pass {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lb1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TabControl^ DichoSearch;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;












	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lb1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->DichoSearch = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DichoSearch->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb1
			// 
			this->lb1->AutoSize = true;
			this->lb1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lb1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lb1->Location = System::Drawing::Point(59, 40);
			this->lb1->Name = L"lb1";
			this->lb1->Size = System::Drawing::Size(735, 46);
			this->lb1->TabIndex = 0;
			this->lb1->Text = L"Sort and search algorithm implementation";
			this->lb1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(6, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(381, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"dichotomous search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(6, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Generate array";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(17, 154);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(65, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 28);
			this->label2->TabIndex = 4;
			this->label2->Text = L"0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(112, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 28);
			this->label3->TabIndex = 5;
			this->label3->Text = L"0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(155, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 28);
			this->label4->TabIndex = 6;
			this->label4->Text = L"0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(201, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 28);
			this->label5->TabIndex = 7;
			this->label5->Text = L"0";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(246, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 28);
			this->label6->TabIndex = 8;
			this->label6->Text = L"0";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(344, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 28);
			this->label7->TabIndex = 9;
			this->label7->Text = L"0";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(295, 154);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 28);
			this->label8->TabIndex = 10;
			this->label8->Text = L"0";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(11, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(291, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 26);
			this->label9->TabIndex = 12;
			this->label9->Text = L"0";
			// 
			// DichoSearch
			// 
			this->DichoSearch->Controls->Add(this->tabPage1);
			this->DichoSearch->Controls->Add(this->tabPage2);
			this->DichoSearch->Location = System::Drawing::Point(22, 89);
			this->DichoSearch->Name = L"DichoSearch";
			this->DichoSearch->SelectedIndex = 0;
			this->DichoSearch->Size = System::Drawing::Size(834, 396);
			this->DichoSearch->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->ForeColor = System::Drawing::Color::White;
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(826, 363);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Dicho Search";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkRed;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Transparent;
			this->button5->Location = System::Drawing::Point(410, 240);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 36);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Reset Table";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(629, 144);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(63, 26);
			this->textBox9->TabIndex = 27;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(538, 144);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(63, 26);
			this->textBox8->TabIndex = 26;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(6, 14);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(301, 31);
			this->label22->TabIndex = 25;
			this->label22->Text = L"Index you want to search";
			this->label22->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(6, 188);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(256, 31);
			this->label21->TabIndex = 24;
			this->label21->Text = L"Index of the search : ";
			this->label21->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(6, 102);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(377, 31);
			this->label20->TabIndex = 23;
			this->label20->Text = L"Input Table \"Put a sorted table\"";
			this->label20->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(447, 144);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(63, 26);
			this->textBox7->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(358, 144);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(63, 26);
			this->textBox6->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(262, 144);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(63, 26);
			this->textBox5->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(175, 144);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(63, 26);
			this->textBox4->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(88, 144);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(63, 26);
			this->textBox3->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(7, 144);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(63, 26);
			this->textBox2->TabIndex = 13;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(826, 363);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Sort algorithm";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(187, 320);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 26);
			this->label24->TabIndex = 27;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(17, 320);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(173, 26);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Used Method : ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::RoyalBlue;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Transparent;
			this->button4->Location = System::Drawing::Point(351, 24);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 44);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Bubble Sort";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::RoyalBlue;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(179, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 44);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Quick sort";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(123, 229);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(167, 31);
			this->label19->TabIndex = 23;
			this->label19->Text = L"Output Table";
			this->label19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(126, 115);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(147, 31);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Input Table";
			this->label18->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(295, 269);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 28);
			this->label10->TabIndex = 21;
			this->label10->Text = L"0";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(344, 269);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 28);
			this->label11->TabIndex = 20;
			this->label11->Text = L"0";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(201, 269);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 28);
			this->label13->TabIndex = 18;
			this->label13->Text = L"0";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(246, 269);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 28);
			this->label12->TabIndex = 19;
			this->label12->Text = L"0";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(17, 269);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 28);
			this->label17->TabIndex = 14;
			this->label17->Text = L"0";
			this->label17->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(65, 269);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 28);
			this->label16->TabIndex = 15;
			this->label16->Text = L"0";
			this->label16->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(155, 269);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 28);
			this->label14->TabIndex = 17;
			this->label14->Text = L"0";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(112, 269);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 28);
			this->label15->TabIndex = 16;
			this->label15->Text = L"0";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(868, 33);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(72, 29);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(78, 29);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(868, 497);
			this->Controls->Add(this->DichoSearch);
			this->Controls->Add(this->lb1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Coral;
			this->HelpButton = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Algorithm in a nutshell";
			this->DichoSearch->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int x = Convert::ToInt32(textBox1->Text);
		int aa = Convert::ToInt32(textBox2->Text);
		int bb = Convert::ToInt32(textBox3->Text);
		int cc = Convert::ToInt32(textBox4->Text);
		int dd = Convert::ToInt32(textBox5->Text);
		int eee = Convert::ToInt32(textBox6->Text);
		int ff = Convert::ToInt32(textBox7->Text);
		int gg = Convert::ToInt32(textBox8->Text);
		int hh = Convert::ToInt32(textBox9->Text);

		int A[] = {aa,bb,cc,dd,eee,ff,gg,hh};
		

		//showTable(A, 8);
		//std::cout << aa <<" "<<bb<<" "<< cc<< " " <<dd <<" " <<eee<< " "<<ff<<" "<< gg<<" "<< hh<< std::endl;
		//std::cout <<rechDichoRecur(A,x,0,8)<<std::endl;
		label9->Text = rechDichoRecur(A, x, 0, 7).ToString();

		
		
	}
	
	


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	srand((int)time(0));
	int a = rand() % 100;
	int b = rand() % 100;
	int c = rand() % 100;
	int d = rand() % 100;
	int ee = rand() % 100;
	int f = rand() % 100;
	int g = rand() % 100;
	int h = rand() % 100;
	label1->Text = (a).ToString();
	label2->Text = (b).ToString();
	label3->Text = (c).ToString();
	label4->Text = (d).ToString();
	label5->Text = (ee).ToString();
	label6->Text = (f).ToString();
	label7->Text = (g).ToString();
	label8->Text = (h).ToString();
	label24->Text = "";

		
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int aa = Convert::ToInt32(label1->Text);
	int bb = Convert::ToInt32(label2->Text);
	int cc = Convert::ToInt32(label3->Text);
	int dd = Convert::ToInt32(label4->Text);
	int eee = Convert::ToInt32(label5->Text);
	int ff = Convert::ToInt32(label6->Text);
	int gg = Convert::ToInt32(label8->Text);
	int hh = Convert::ToInt32(label7->Text);

	int A[] = {aa,bb,cc,dd,eee,ff,gg,hh};
	Bubble_sort(A, 8);
	label17->Text = A[0].ToString();
	label16->Text = A[1].ToString();
	label15->Text = A[2].ToString();
	label14->Text = A[3].ToString();
	label13->Text = A[4].ToString();
	label12->Text = A[5].ToString();
	label10->Text = A[6].ToString();
	label11->Text = A[7].ToString();
	label24->Text = "";
	label24->Text = "Bubble Sort";
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int aa = Convert::ToInt32(label1->Text);
	int bb = Convert::ToInt32(label2->Text);
	int cc = Convert::ToInt32(label3->Text);
	int dd = Convert::ToInt32(label4->Text);
	int eee = Convert::ToInt32(label5->Text);
	int ff = Convert::ToInt32(label6->Text);
	int gg = Convert::ToInt32(label8->Text);
	int hh = Convert::ToInt32(label7->Text);

	int A[] = { aa,bb,cc,dd,eee,ff,gg,hh };
	quick_sort(A, 0, 8);
	label17->Text = A[0].ToString();
	label16->Text = A[1].ToString();
	label15->Text = A[2].ToString();
	label14->Text = A[3].ToString();
	label13->Text = A[4].ToString();
	label12->Text = A[5].ToString();
	label10->Text = A[6].ToString();
	label11->Text = A[7].ToString();
	label24->Text = "";
	label24->Text = "Quick Sort";

}

private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("v0.1-alpha", "Version", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
