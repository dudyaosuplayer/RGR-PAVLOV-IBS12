#pragma once

#include "ContrAgent.h"
#include "Product.h"
#include "Realization.h"
#include "Arrival.h"
#include "Warehouse.h"
#include <fstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>

namespace WarehouseApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;// поддрежание графичесикх элементов(кнопок и т д)
	using namespace System::Data;// поддержание даты
	using namespace System::Drawing;// поддержание окна

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)//конструктор
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()//деструктор
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage4;

	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;// оператор выбор числа
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ count;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button11;









	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->number,
					this->name, this->count
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 8);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->ShowCellErrors = false;
			this->dataGridView1->ShowCellToolTips = false;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->ShowRowErrors = false;
			this->dataGridView1->Size = System::Drawing::Size(528, 384);
			this->dataGridView1->TabIndex = 0;
			// 
			// number
			// 
			this->number->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->number->HeaderText = L"Порядковый номер";
			this->number->MinimumWidth = 6;
			this->number->Name = L"number";
			this->number->ReadOnly = true;
			// 
			// name
			// 
			this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->name->HeaderText = L"Наименование товара";
			this->name->MinimumWidth = 6;
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// count
			// 
			this->count->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->count->HeaderText = L"Кол-во товара";
			this->count->MinimumWidth = 6;
			this->count->Name = L"count";
			this->count->ReadOnly = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(16, 13);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(836, 429);
			this->tabControl1->TabIndex = 1;
			this->tabControl1->Click += gcnew System::EventHandler(this, &MyForm::TabControl1_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->monthCalendar1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(828, 400);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Учёт";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(604, 68);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 17);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Выбирайте дату:";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(568, 96);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::MonthCalendar1_DateChanged);
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::MonthCalendar1_DateSelected);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->numericUpDown5);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->numericUpDown3);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->numericUpDown2);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(828, 400);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Операции";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(523, 42);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(156, 17);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Наименование товара";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(526, 63);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(132, 22);
			this->textBox6->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(295, 42);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 17);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Наименование товара";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(295, 61);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(132, 22);
			this->textBox5->TabIndex = 26;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(523, 100);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 17);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Кол-во товара";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(526, 128);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(75, 22);
			this->numericUpDown5->TabIndex = 24;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::DarkRed;
			this->label12->Location = System::Drawing::Point(289, 340);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(303, 35);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Доступные операции";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(72, 181);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 17);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Контрагент";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(75, 199);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(523, 183);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 17);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Контрагент";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(526, 204);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(526, 247);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Отпустить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(523, 14);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Реализация";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(75, 247);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Добавить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(72, 100);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Кол-во товара";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(72, 42);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Наименование товара";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(75, 130);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(75, 22);
			this->numericUpDown3->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 61);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(72, 14);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Поступление";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(295, 14);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Изменить";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(295, 247);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(295, 181);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Кол-во";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(295, 100);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Операция";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(295, 200);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(75, 22);
			this->numericUpDown2->TabIndex = 3;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->listBox1->Location = System::Drawing::Point(298, 130);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(52, 20);
			this->listBox1->TabIndex = 2;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl2);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(4);
			this->tabPage4->Size = System::Drawing::Size(828, 400);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Отчёты";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(8, 4);
			this->tabControl2->Margin = System::Windows::Forms::Padding(4);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(812, 383);
			this->tabControl2->TabIndex = 0;
			this->tabControl2->Click += gcnew System::EventHandler(this, &MyForm::TabControl2_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->richTextBox1);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4);
			this->tabPage5->Size = System::Drawing::Size(804, 354);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Поступление";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(8, 7);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(781, 333);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->richTextBox2);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Margin = System::Windows::Forms::Padding(4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(4);
			this->tabPage6->Size = System::Drawing::Size(804, 354);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Реализация";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(8, 7);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(781, 333);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->label14);
			this->tabPage7->Controls->Add(this->textBox4);
			this->tabPage7->Controls->Add(this->richTextBox3);
			this->tabPage7->Controls->Add(this->button5);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Margin = System::Windows::Forms::Padding(4);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(804, 354);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Контрагент";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(213, 10);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(153, 17);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Введите контрагента:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(217, 30);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(203, 22);
			this->textBox4->TabIndex = 2;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(4, 69);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(789, 275);
			this->richTextBox3->TabIndex = 1;
			this->richTextBox3->Text = L"";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(490, 27);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 28);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Поиск";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->button10);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(4);
			this->tabPage3->Size = System::Drawing::Size(828, 400);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Функции";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(459, 220);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(296, 46);
			this->button11->TabIndex = 6;
			this->button11->Text = L"Очистить базу данных";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(459, 112);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(296, 46);
			this->button10->TabIndex = 5;
			this->button10->Text = L"Очистить все отчёты";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(57, 165);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(296, 46);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Очистить отчёт по контрагентам";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(57, 218);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(296, 46);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Очистить отчёт реализации";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(57, 111);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(296, 46);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Очистить отчёт поступлений";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(459, 166);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(296, 46);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Выгрузить отчёты в файл";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(264, 321);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(296, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 457);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"WarehouseApp";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion



private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) { //два обязательных аргумента для работы с событием
	Application::Exit();
}


private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream out, repR, repC, repCh;//вывод информации в файл
	ifstream in;// считывание из файла
	string name = msclr::interop::marshal_as<string>(this->textBox5->Text->ToString());// перевод графического стринга в обычный
	int val = atoi(msclr::interop::marshal_as<string>(this->numericUpDown2->Value.ToString()).c_str());// конвертор строки в число
	string action = msclr::interop::marshal_as<string>(this->listBox1->SelectedItem->ToString());
	string date = msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10);
	string str = "";//временная переменная для записи в неё строчек из базы данных
	string str4 = "*";//разделение дат
	string editName, editVal;
	bool bell = false;
	bool notFound = true;// наличие товара в конкретную дату

	in.open("database.txt");// открытие базы данных для чтения
	out.open("tempdata.txt");// временная база данных 
	repR.open("ReportR.txt", std::ios::app);// опция дозаписи
	repC.open("ReportC.txt", std::ios::app);
	repC.open("ReportCh.txt", std::ios::app);
	if (name != "" || val > 0 || action != "") {
		while (getline(in, str)) {//перебор всех строк бд
			if (str != "") {
				if (str.find(str4) != std::string::npos) {//проверка на содержание звёздчоки в определенной строке бд
					bell = false;
				}
				if (str.find(date) != std::string::npos) {
					bell = true;
				}
				if (bell) {
					if (str.find(name) != std::string::npos) {
						notFound = false;
						int i = 0;
						editName = "";
						editVal = "";
						while (str[i] != ' ') {
							editName += str[i];
							i++;
						}
						while (str[i] != '+') {
							editVal += str[i];
							i++;
						} // поиск конкретного товара на конкретную дату
						int newVal = atoi(editVal.c_str());//перевод из строки в число
						if (action == "+") {
							out << editName << " " << to_string(newVal + val) << " +" << endl;//добавление 
							repCh << endl << "Внутренние ПОСТУПЛЕНИЕ + [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";//отчёты в текстовые файлы
							repC << endl << "Внутренние ПОСТУПЛЕНИЕ + [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";
							this->label12->Text = "ВНУТРЕННЕЕ ПОСТУПЛЕНИЕ";//реакция на действие пользователя
						} else if (action == "*") {
							out << editName << " " << to_string(newVal * val) << " +" << endl;
							repCh << endl << "Внутренние ПОСТУПЛЕНИЕ * [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";
							repC << endl << "Внутренние ПОСТУПЛЕНИЕ * [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";
							this->label12->Text = "ВНУТРЕННЕЕ ПОСТУПЛЕНИЕ";
						} else if (action == "-") {
							if ((newVal - val) < 0) {
								this->label12->Text = "НЕДОСТАТОЧНО ТОВАРА";
								out << str << endl;
								continue;
							} else {
								out << editName << " " << to_string(newVal - val) << " +" << endl;
								repR << endl << "Внутренняя РЕАЛИЗАЦИЯ - [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";
								repC << endl << "Внутренняе РЕАЛИЗАЦИЯ - [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";
								this->label12->Text = "ВНУТРЕННЯЯ РЕАЛИЗАЦИЯ";
							}
						} else if (action == "/") {
							if (newVal%2 != 0) {
								this->label12->Text = "НАЦЕЛО НЕ ДЕЛИТСЯ";
								out << str << endl;
								continue;
							} else {
								out << editName << " " << to_string(newVal / val) << " +" << endl;
								repR << endl << "Внутренняя РЕАЛИЗАЦИЯ / [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";
								repC << endl << "Внутренняе РЕАЛИЗАЦИЯ / [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";
								this->label12->Text = "ВНУТРЕННЯЯ РЕАЛИЗАЦИЯ";
							}
						}
					} else {
						out << str << endl;// если товар не изменялся то просто переписывается в буфер 
					}
				} else {
					out << str << endl;
				}
			}
		}
		if (notFound) {
			this->label12->Text = "ТОВАР НЕ НАЙДЕН";
		}
	}
	in.close();
	out.close();
	repR.close();
	repCh.close();
	repC.close();
	remove("database.txt");
	rename("tempdata.txt", "database.txt");
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream out, repCh, repC;//объявление потоков 
	string name = msclr::interop::marshal_as<string>(this->textBox1->Text->ToString());//конвертируется информация которую мы достали из Textbox1
	string val = msclr::interop::marshal_as<string>(this->numericUpDown3->Value.ToString());
	string contragent = msclr::interop::marshal_as<string>(this->textBox3->Text->ToString());

	Product product(name, atoi(val.c_str()), ContrAgent(contragent));//объявление объект класса товар и констуктор с параметрами, контрагент(класс)

	out.open("database.txt", std::ios::app);//std::ios::app возможность дописывания в файл
	repCh.open("ReportCh.txt", std::ios::app);
	repC.open("ReportC.txt", std::ios::app);
	if (name != "" || val != "" || contragent != "") {
		out << endl << "* " << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0,10) << endl << product.getName() << " " << product.getCount() << " +";// запись в бд на текущую дату о количстве товара и его наименование
		repCh << endl << "От " << contragent << " ПОСТУПЛЕНИЕ [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << product.getName() << " " << product.getCount() << " шт.";//запись в отчёты
		repC << endl << contragent << " ПОСТУПЛЕНИЕ [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << product.getName() << " " << product.getCount() << " шт.";//отчёт по контрагентам
		this->label12->Text = "ПОСТУПЛЕНИЕ ТОВАРА";
	}
	out.close();
	repCh.close();
	repC.close();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {// пустое событие
}
private: System::Void MonthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {//пустое событие
	
}
private: System::Void MonthCalendar1_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		this->dataGridView1->Rows->Clear();//очистка строк 
		
		ifstream in;//объявляем поток бд
		//char c;
		bool trigger = false;
		string insert[2];//

		string str = "";//объявление выбранной строки
		string str2 = msclr::interop::marshal_as<string>(e->Start.ToShortDateString()->ToString());//получение текущей даты
		String^ str3 = gcnew String(str.c_str());// получение большего стринга для вывода в таблицу
		string str4 = "*";//отделение выбранной даты от последующих

		int index = 0;//порядковый номер товара в таблице
		in.open("database.txt");

		while (getline(in, str)) {//перебор всех строк для поиска текущей даты
			if (str.find(str4) != std::string::npos) {
				trigger = false;//показывает начало следующей даты
			}
			if (trigger) {
				index++;
				int i = 0;
				insert[0] = "";//строковый массив, содержит наименование товара 
				insert[1] = "";//  его количество 
				while (str[i] != ' ') {// до пробела поиск наименования товара 
					insert[0] += str[i];//строим наименвоание товара посимвольно
					i++;
				}
				while (str[i] != '+') {
					insert[1] += str[i];
					i++;
				}

				cli::array<String^>^ row1 = gcnew cli::array<String^>{ gcnew String(to_string(index).c_str()), gcnew String(insert[0].c_str()), gcnew String(insert[1].c_str())};//массив строк 
				this->dataGridView1->Rows->Add(row1);//добавление в таблицу 
			}
			if (str.find(str2) != std::string::npos) {//влючаем триггер если встретили нужную дату
				trigger = true;
			}
		}
		in.close();//закрытие потока данных который читал из бд
	}
private: System::Void TabControl2_TabIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void TabControl2_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream in;//объявление входного потока данных из бд
		string str = "";
		this->richTextBox1->Text = gcnew String("");//очистка бокса для дальнейшей записи
		in.open("ReportCh.txt");//открытие файла с отчётами о пополнении 
		while (getline(in, str)) {
			if (str != "") {
				str += "\n";
				this->richTextBox1->Text += gcnew String(str.c_str());//ввод из файла в текстовое поле 
			}
		}
		in.close();
		ifstream in1;//убытие товара со склада
		string str1 = "";
		this->richTextBox2->Text = gcnew String("");
		in1.open("ReportR.txt");
		while (getline(in1, str1)) {
			if (str != "") {
				str1 += "\n";
				this->richTextBox2->Text += gcnew String(str1.c_str());
			}
		}
		in.close();
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	string search = msclr::interop::marshal_as<string>(this->textBox4->Text);//поиск введённого контрагента
	ifstream in;
	string str = "";
	this->richTextBox3->Text = gcnew String("");
	in.open("ReportC.txt");
	while (getline(in, str)) {
		int i = 0;
		string check = "";
		if (str != "") {
			while (str[i] != ' ') {
				check += str[i];
				i++;
			}
			if (search == check) {// сравнение введённого контрагента с наличием в бд
				str += "\n";
				this->richTextBox3->Text += gcnew String(str.c_str());//gcnew- конвертация маленького стринга в большой
			}
		}
	}
	in.close();
}
private: System::Void TabControl1_Click(System::Object^ sender, System::EventArgs^ e) {
	ifstream in;
	string str = "";
	this->richTextBox1->Text = gcnew String("");
	in.open("ReportCh.txt");//поиск контрагента по плюсовым отчётам
	while (getline(in, str)) {
		if (str != "") {
			str += "\n";
			this->richTextBox1->Text += gcnew String(str.c_str());
		}
	}
	in.close();
	ifstream in1;
	string str1 = "";
	this->richTextBox2->Text = gcnew String("");
	in1.open("ReportR.txt");//поиск контрагента по минусовым отчётам
	while (getline(in1, str1)) {
		if (str != "") {
			str1 += "\n";
			this->richTextBox2->Text += gcnew String(str1.c_str());
		}
	}
	in.close();
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {//отпуск товара
	ofstream out, repR, repC;
	ifstream in;
	string name = msclr::interop::marshal_as<string>(this->textBox6->Text->ToString());
	int val = atoi(msclr::interop::marshal_as<string>(this->numericUpDown5->Value.ToString()).c_str());
	string contragent = msclr::interop::marshal_as<string>(this->textBox2->Text->ToString());
	string date = msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10);
	string str = "";
	string str4 = "*";
	string editName, editVal;
	bool trigger = false;
	bool notFound = true;

	Product good(name, val, ContrAgent(contragent));

	in.open("database.txt");
	out.open("tempdata.txt");
	repR.open("ReportR.txt", std::ios::app);
	repC.open("ReportC.txt", std::ios::app);
	if (name != "" || val > 0 || contragent != "") {
		while (getline(in,str)) {//построчный перебор
			if (str != "") {
				if (str.find(str4) != std::string::npos) {
					trigger = false;
				}
				if (str.find(date) != std::string::npos) {
					trigger = true;
				}
				if (trigger) {
					if (str.find(name) != std::string::npos) {
						notFound = false;
						int i = 0;
						editName = "";
						editVal = "";
						while (str[i] != ' ') {
							editName += str[i];
							i++;
						}
						while (str[i] != '+') {
							editVal += str[i];
							i++;
						}
						int newVal = atoi(editVal.c_str());
						
						if ((newVal - val) < 0) {
							this->label12->Text = "НЕДОСТАТОЧНО ТОВАРА";
							out << str << endl;
							continue;
						} else {
							out << editName << " " << to_string(newVal - val) << " +" << endl;//вывод остаточного колчиества товара на складе
							repR << endl << "Для " << contragent << " РЕАЛИЗАЦИЯ [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";
							repC << endl << contragent << " РЕАЛИЗАЦИЯ [" << msclr::interop::marshal_as<string>(this->monthCalendar1->TodayDate.ToString()).substr(0, 10) << "] " << name << " " << val << " шт.";
							this->label12->Text = "РЕАЛИЗАЦИЯ ТОВАРА";
						}
					} else {
						out << str << endl;
					}
				} else {
					out << str << endl;
				}
			}
		}
		if (notFound) {
			this->label12->Text = "ТОВАР НЕ НАЙДЕН";
		}
	}
	in.close();
	out.close();
	repR.close();
	repC.close();
	remove("database.txt");
	rename("tempdata.txt", "database.txt");
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {//загрузка всех отчётов в файл
	ofstream out;
	ifstream repR, repCh;
	string str;
	repR.open("ReportR.txt");
	repCh.open("ReportCh.txt");
	out.open("COMMON_REPORT.txt");

	out << "ПОСТУПЛЕНИЯ: " << endl;
	while (getline(repCh, str)) {
		out << str << endl;
	}
	out << endl << "РЕАЛИЗАЦИЯ: " << endl;
	while (getline(repR, str)) {
		out << str << endl;//вывести строку и перевести на новую строчку
	}

	repR.close();
	repCh.close();
	out.close();
}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream out;
	out.open("ReportCh.txt");
	out << "";
	out.close();
}
private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream out;
	out.open("ReportR.txt");
	out << "";
	out.close();
}
private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream out;
	out.open("ReportC.txt");
	out << "";
	out.close();
}
private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream out;
	out.open("ReportCh.txt");
	out << "";
	out.close();
	out.open("ReportR.txt");
	out << "";
	out.close();
	out.open("ReportC.txt");
	out << "";
	out.close();
}
private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream out;
	out.open("database.txt");
	out << "";
	out.close();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
