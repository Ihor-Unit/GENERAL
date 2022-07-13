#pragma once

namespace QueuingSystemOnCLRNETFrameworks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для KyrsovaDlg
	/// </summary>
	public ref class KyrsovaDlg : public System::Windows::Forms::Form
	{
	public:
		KyrsovaDlg(void)
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
		~KyrsovaDlg()
		{
			if (components)
			{
				delete components;
			}
		}

    protected:
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label5;


    private: System::Windows::Forms::TextBox^ SecondPriorBOX;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ FirstPriorBOX;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::GroupBox^ groupBox4;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::CheckBox^ checkBox2;


    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::GroupBox^ groupBox5;
    private: System::Windows::Forms::CheckBox^ checkBox7;
    private: System::Windows::Forms::CheckBox^ checkBox8;


    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;


    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::TextBox^ textBox21;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::GroupBox^ groupBox7;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::TextBox^ textBox20;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::TextBox^ textBox19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::TextBox^ textBox18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::TextBox^ textBox17;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::GroupBox^ groupBox3;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::GroupBox^ groupBox8;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::GroupBox^ groupBox9;


private: System::Windows::Forms::GroupBox^ groupBox10;


private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::GroupBox^ groupBox13;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::Button^ button2;





private: System::Windows::Forms::GroupBox^ groupBox11;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::CheckBox^ checkBox12;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label10;

    private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KyrsovaDlg::typeid));
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->SecondPriorBOX = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->FirstPriorBOX = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
            this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
            this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
            this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->проПрограмуToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->textBox37 = (gcnew System::Windows::Forms::TextBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->textBox36 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox31 = (gcnew System::Windows::Forms::TextBox());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->textBox32 = (gcnew System::Windows::Forms::TextBox());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
            this->textBox27 = (gcnew System::Windows::Forms::TextBox());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->textBox28 = (gcnew System::Windows::Forms::TextBox());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox2->SuspendLayout();
            this->groupBox4->SuspendLayout();
            this->groupBox5->SuspendLayout();
            this->groupBox7->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->groupBox3->SuspendLayout();
            this->groupBox13->SuspendLayout();
            this->groupBox9->SuspendLayout();
            this->groupBox11->SuspendLayout();
            this->groupBox10->SuspendLayout();
            this->groupBox8->SuspendLayout();
            this->groupBox1->SuspendLayout();
            this->SuspendLayout();
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label25->Location = System::Drawing::Point(6, -5);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(101, 27);
            this->label25->TabIndex = 15;
            this->label25->Text = L"Фаза №2:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->Location = System::Drawing::Point(18, 67);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(64, 18);
            this->label6->TabIndex = 2;
            this->label6->Text = L"Черга 1:";
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->label27);
            this->groupBox2->Controls->Add(this->label5);
            this->groupBox2->Controls->Add(this->textBox4);
            this->groupBox2->Controls->Add(this->label4);
            this->groupBox2->Controls->Add(this->SecondPriorBOX);
            this->groupBox2->Controls->Add(this->label2);
            this->groupBox2->Controls->Add(this->FirstPriorBOX);
            this->groupBox2->Controls->Add(this->label1);
            this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox2->Location = System::Drawing::Point(70, 31);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(226, 235);
            this->groupBox2->TabIndex = 0;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Вхідний потік";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label27->Location = System::Drawing::Point(8, -4);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(145, 27);
            this->label27->TabIndex = 15;
            this->label27->Text = L"Вхідний потік:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(10, 27);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(62, 18);
            this->label5->TabIndex = 8;
            this->label5->Text = L"Заявки:";
            // 
            // SecondPriorBOX
            // 
            this->SecondPriorBOX->Enabled = false;
            this->SecondPriorBOX->Location = System::Drawing::Point(140, 115);
            this->SecondPriorBOX->Name = L"SecondPriorBOX";
            this->SecondPriorBOX->Size = System::Drawing::Size(53, 24);
            this->SecondPriorBOX->TabIndex = 3;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(16, 118);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(108, 18);
            this->label2->TabIndex = 2;
            this->label2->Text = L"2-го пріритету:";
            // 
            // FirstPriorBOX
            // 
            this->FirstPriorBOX->Enabled = false;
            this->FirstPriorBOX->Location = System::Drawing::Point(140, 70);
            this->FirstPriorBOX->Name = L"FirstPriorBOX";
            this->FirstPriorBOX->Size = System::Drawing::Size(53, 24);
            this->FirstPriorBOX->TabIndex = 1;
            this->FirstPriorBOX->TextChanged += gcnew System::EventHandler(this, &KyrsovaDlg::FirstPriorBOX_TextChanged);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(16, 74);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(108, 18);
            this->label1->TabIndex = 0;
            this->label1->Text = L"1-го пріритету:";
            // 
            // groupBox4
            // 
            this->groupBox4->Controls->Add(this->checkBox12);
            this->groupBox4->Controls->Add(this->label24);
            this->groupBox4->Controls->Add(this->textBox5);
            this->groupBox4->Controls->Add(this->checkBox2);
            this->groupBox4->Controls->Add(this->textBox8);
            this->groupBox4->Controls->Add(this->label9);
            this->groupBox4->Controls->Add(this->textBox6);
            this->groupBox4->Controls->Add(this->label7);
            this->groupBox4->Controls->Add(this->label6);
            this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox4->Location = System::Drawing::Point(363, 32);
            this->groupBox4->Name = L"groupBox4";
            this->groupBox4->Size = System::Drawing::Size(239, 234);
            this->groupBox4->TabIndex = 1;
            this->groupBox4->TabStop = false;
            this->groupBox4->Text = L"Фаза №1";
            // 
            // checkBox12
            // 
            this->checkBox12->AutoSize = true;
            this->checkBox12->Enabled = false;
            this->checkBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBox12->Location = System::Drawing::Point(138, 79);
            this->checkBox12->Name = L"checkBox12";
            this->checkBox12->Size = System::Drawing::Size(85, 22);
            this->checkBox12->TabIndex = 15;
            this->checkBox12->Text = L"Канал 1";
            this->checkBox12->UseVisualStyleBackColor = true;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->CausesValidation = false;
            this->label24->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label24->Location = System::Drawing::Point(6, -5);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(101, 27);
            this->label24->TabIndex = 14;
            this->label24->Text = L"Фаза №1:";
            // 
            // textBox5
            // 
            this->textBox5->Enabled = false;
            this->textBox5->Location = System::Drawing::Point(88, 62);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(41, 24);
            this->textBox5->TabIndex = 3;
            // 
            // checkBox2
            // 
            this->checkBox2->AutoSize = true;
            this->checkBox2->Enabled = false;
            this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBox2->Location = System::Drawing::Point(138, 127);
            this->checkBox2->Name = L"checkBox2";
            this->checkBox2->Size = System::Drawing::Size(85, 22);
            this->checkBox2->TabIndex = 11;
            this->checkBox2->Text = L"Канал 2";
            this->checkBox2->UseVisualStyleBackColor = true;
            // 
            // textBox6
            // 
            this->textBox6->Enabled = false;
            this->textBox6->Location = System::Drawing::Point(87, 105);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(41, 24);
            this->textBox6->TabIndex = 5;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(17, 107);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(64, 18);
            this->label7->TabIndex = 4;
            this->label7->Text = L"Черга 2:";
            // 
            // groupBox5
            // 
            this->groupBox5->Controls->Add(this->label25);
            this->groupBox5->Controls->Add(this->checkBox1);
            this->groupBox5->Controls->Add(this->checkBox7);
            this->groupBox5->Controls->Add(this->checkBox8);
            this->groupBox5->Controls->Add(this->textBox7);
            this->groupBox5->Controls->Add(this->textBox11);
            this->groupBox5->Controls->Add(this->label8);
            this->groupBox5->Controls->Add(this->label12);
            this->groupBox5->Controls->Add(this->textBox12);
            this->groupBox5->Controls->Add(this->label13);
            this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox5->Location = System::Drawing::Point(676, 32);
            this->groupBox5->Name = L"groupBox5";
            this->groupBox5->Size = System::Drawing::Size(239, 234);
            this->groupBox5->TabIndex = 2;
            this->groupBox5->TabStop = false;
            this->groupBox5->Text = L"Фаза №2";
            // 
            // checkBox7
            // 
            this->checkBox7->AutoSize = true;
            this->checkBox7->Enabled = false;
            this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBox7->Location = System::Drawing::Point(136, 104);
            this->checkBox7->Name = L"checkBox7";
            this->checkBox7->Size = System::Drawing::Size(85, 22);
            this->checkBox7->TabIndex = 23;
            this->checkBox7->Text = L"Канал 2";
            this->checkBox7->UseVisualStyleBackColor = true;
            // 
            // checkBox8
            // 
            this->checkBox8->AutoSize = true;
            this->checkBox8->Enabled = false;
            this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBox8->Location = System::Drawing::Point(136, 68);
            this->checkBox8->Name = L"checkBox8";
            this->checkBox8->Size = System::Drawing::Size(85, 22);
            this->checkBox8->TabIndex = 22;
            this->checkBox8->Text = L"Канал 1";
            this->checkBox8->UseVisualStyleBackColor = true;
            // 
            // textBox11
            // 
            this->textBox11->Enabled = false;
            this->textBox11->Location = System::Drawing::Point(85, 107);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(41, 24);
            this->textBox11->TabIndex = 17;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(15, 112);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(64, 18);
            this->label12->TabIndex = 16;
            this->label12->Text = L"Черга 2:";
            // 
            // textBox12
            // 
            this->textBox12->Enabled = false;
            this->textBox12->Location = System::Drawing::Point(85, 64);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(41, 24);
            this->textBox12->TabIndex = 15;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->Location = System::Drawing::Point(15, 69);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(64, 18);
            this->label13->TabIndex = 14;
            this->label13->Text = L"Черга 1:";
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label28->Location = System::Drawing::Point(6, -6);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(218, 27);
            this->label28->TabIndex = 26;
            this->label28->Text = L"Вихідний потік заявок:";
            // 
            // textBox21
            // 
            this->textBox21->Enabled = false;
            this->textBox21->Location = System::Drawing::Point(207, 175);
            this->textBox21->Name = L"textBox21";
            this->textBox21->Size = System::Drawing::Size(69, 24);
            this->textBox21->TabIndex = 24;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label23->Location = System::Drawing::Point(20, 184);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(165, 18);
            this->label23->TabIndex = 25;
            this->label23->Text = L"зайнятості каналів(%):";
            // 
            // groupBox7
            // 
            this->groupBox7->Controls->Add(this->label28);
            this->groupBox7->Controls->Add(this->textBox21);
            this->groupBox7->Controls->Add(this->label23);
            this->groupBox7->Controls->Add(this->label22);
            this->groupBox7->Controls->Add(this->textBox20);
            this->groupBox7->Controls->Add(this->label21);
            this->groupBox7->Controls->Add(this->textBox19);
            this->groupBox7->Controls->Add(this->label20);
            this->groupBox7->Controls->Add(this->textBox18);
            this->groupBox7->Controls->Add(this->label19);
            this->groupBox7->Controls->Add(this->textBox17);
            this->groupBox7->Controls->Add(this->label18);
            this->groupBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox7->Location = System::Drawing::Point(982, 34);
            this->groupBox7->Name = L"groupBox7";
            this->groupBox7->Size = System::Drawing::Size(311, 232);
            this->groupBox7->TabIndex = 4;
            this->groupBox7->TabStop = false;
            this->groupBox7->Text = L"Вихідний потік заявок:";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label22->Location = System::Drawing::Point(25, 167);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(150, 18);
            this->label22->TabIndex = 23;
            this->label22->Text = L"Середній коефіцієнт";
            // 
            // textBox20
            // 
            this->textBox20->Enabled = false;
            this->textBox20->Location = System::Drawing::Point(207, 139);
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(69, 24);
            this->textBox20->TabIndex = 22;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label21->Location = System::Drawing::Point(16, 141);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(171, 18);
            this->label21->TabIndex = 21;
            this->label21->Text = L"Ефективність СМО(%):";
            // 
            // textBox19
            // 
            this->textBox19->Enabled = false;
            this->textBox19->Location = System::Drawing::Point(207, 104);
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(69, 24);
            this->textBox19->TabIndex = 20;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label20->Location = System::Drawing::Point(16, 107);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(167, 18);
            this->label20->TabIndex = 19;
            this->label20->Text = L"Необслуговані заявки:";
            // 
            // textBox18
            // 
            this->textBox18->Enabled = false;
            this->textBox18->Location = System::Drawing::Point(207, 70);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(69, 24);
            this->textBox18->TabIndex = 18;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label19->Location = System::Drawing::Point(24, 73);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(151, 18);
            this->label19->TabIndex = 17;
            this->label19->Text = L"Обслуговані заявки:";
            // 
            // textBox17
            // 
            this->textBox17->Enabled = false;
            this->textBox17->Location = System::Drawing::Point(207, 38);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(69, 24);
            this->textBox17->TabIndex = 16;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->Location = System::Drawing::Point(56, 41);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(85, 18);
            this->label18->TabIndex = 3;
            this->label18->Text = L"Всі заявки:";
            // 
            // проПрограмуToolStripMenuItem1
            // 
            this->проПрограмуToolStripMenuItem1->Name = L"проПрограмуToolStripMenuItem1";
            this->проПрограмуToolStripMenuItem1->Size = System::Drawing::Size(124, 24);
            this->проПрограмуToolStripMenuItem1->Text = L"Про програму";
            this->проПрограмуToolStripMenuItem1->Click += gcnew System::EventHandler(this, &KyrsovaDlg::проПрограмуToolStripMenuItem1_Click);
            // 
            // проПрограмуToolStripMenuItem
            // 
            this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
            this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(60, 24);
            this->проПрограмуToolStripMenuItem->Text = L"Вихід";
            this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &KyrsovaDlg::проПрограмуToolStripMenuItem_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->проПрограмуToolStripMenuItem,
                    this->проПрограмуToolStripMenuItem1
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1422, 28);
            this->menuStrip1->TabIndex = 3;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->groupBox13);
            this->groupBox3->Controls->Add(this->groupBox9);
            this->groupBox3->Controls->Add(this->groupBox8);
            this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox3->Location = System::Drawing::Point(51, 375);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(1324, 302);
            this->groupBox3->TabIndex = 5;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"Налаштування";
            this->groupBox3->Enter += gcnew System::EventHandler(this, &KyrsovaDlg::groupBox3_Enter);
            // 
            // groupBox13
            // 
            this->groupBox13->Controls->Add(this->label46);
            this->groupBox13->Controls->Add(this->textBox37);
            this->groupBox13->Controls->Add(this->button4);
            this->groupBox13->Controls->Add(this->button3);
            this->groupBox13->Controls->Add(this->textBox36);
            this->groupBox13->Controls->Add(this->button2);
            this->groupBox13->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox13->Location = System::Drawing::Point(922, 33);
            this->groupBox13->Name = L"groupBox13";
            this->groupBox13->Size = System::Drawing::Size(383, 254);
            this->groupBox13->TabIndex = 2;
            this->groupBox13->TabStop = false;
            this->groupBox13->Text = L"Генератор дій";
            this->groupBox13->Enter += gcnew System::EventHandler(this, &KyrsovaDlg::groupBox13_Enter);
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label46->Location = System::Drawing::Point(40, 199);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(176, 20);
            this->label46->TabIndex = 15;
            this->label46->Text = L"Затрачений час (с):";
            // 
            // textBox37
            // 
            this->textBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox37->Location = System::Drawing::Point(232, 196);
            this->textBox37->Name = L"textBox37";
            this->textBox37->Size = System::Drawing::Size(79, 27);
            this->textBox37->TabIndex = 14;
            // 
            // button4
            // 
            this->button4->Enabled = false;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button4->Location = System::Drawing::Point(35, 142);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(319, 37);
            this->button4->TabIndex = 13;
            this->button4->Text = L"Налаштувати за замовчуванням";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &KyrsovaDlg::button4_Click);
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button3->Location = System::Drawing::Point(35, 98);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(319, 37);
            this->button3->TabIndex = 12;
            this->button3->Text = L"Обнулити потоки / ЗАПУСК";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &KyrsovaDlg::button3_Click);
            // 
            // textBox36
            // 
            this->textBox36->Enabled = false;
            this->textBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox36->Location = System::Drawing::Point(199, 54);
            this->textBox36->Name = L"textBox36";
            this->textBox36->Size = System::Drawing::Size(69, 27);
            this->textBox36->TabIndex = 11;
            // 
            // button2
            // 
            this->button2->Enabled = false;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->Location = System::Drawing::Point(35, 50);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(319, 37);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Генерувати                 дій";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &KyrsovaDlg::button2_Click);
            // 
            // groupBox9
            // 
            this->groupBox9->Controls->Add(this->groupBox11);
            this->groupBox9->Controls->Add(this->groupBox10);
            this->groupBox9->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox9->Location = System::Drawing::Point(310, 33);
            this->groupBox9->Name = L"groupBox9";
            this->groupBox9->Size = System::Drawing::Size(587, 254);
            this->groupBox9->TabIndex = 1;
            this->groupBox9->TabStop = false;
            this->groupBox9->Text = L"Потужність каналів";
            // 
            // groupBox11
            // 
            this->groupBox11->Controls->Add(this->textBox3);
            this->groupBox11->Controls->Add(this->label3);
            this->groupBox11->Controls->Add(this->textBox31);
            this->groupBox11->Controls->Add(this->label41);
            this->groupBox11->Controls->Add(this->textBox32);
            this->groupBox11->Controls->Add(this->label42);
            this->groupBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox11->Location = System::Drawing::Point(340, 50);
            this->groupBox11->Name = L"groupBox11";
            this->groupBox11->Size = System::Drawing::Size(193, 152);
            this->groupBox11->TabIndex = 3;
            this->groupBox11->TabStop = false;
            this->groupBox11->Text = L"Фаза 2";
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox3->Location = System::Drawing::Point(103, 105);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(55, 24);
            this->textBox3->TabIndex = 12;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(23, 109);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(63, 18);
            this->label3->TabIndex = 11;
            this->label3->Text = L"Канал 3";
            // 
            // textBox31
            // 
            this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox31->Location = System::Drawing::Point(103, 72);
            this->textBox31->Name = L"textBox31";
            this->textBox31->Size = System::Drawing::Size(55, 24);
            this->textBox31->TabIndex = 12;
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label41->Location = System::Drawing::Point(23, 76);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(63, 18);
            this->label41->TabIndex = 11;
            this->label41->Text = L"Канал 2";
            // 
            // textBox32
            // 
            this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox32->Location = System::Drawing::Point(103, 39);
            this->textBox32->Name = L"textBox32";
            this->textBox32->Size = System::Drawing::Size(55, 24);
            this->textBox32->TabIndex = 10;
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label42->Location = System::Drawing::Point(23, 43);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(63, 18);
            this->label42->TabIndex = 9;
            this->label42->Text = L"Канал 1";
            // 
            // groupBox10
            // 
            this->groupBox10->Controls->Add(this->textBox27);
            this->groupBox10->Controls->Add(this->label37);
            this->groupBox10->Controls->Add(this->textBox28);
            this->groupBox10->Controls->Add(this->label38);
            this->groupBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox10->Location = System::Drawing::Point(67, 50);
            this->groupBox10->Name = L"groupBox10";
            this->groupBox10->Size = System::Drawing::Size(193, 152);
            this->groupBox10->TabIndex = 0;
            this->groupBox10->TabStop = false;
            this->groupBox10->Text = L"Фаза 1";
            // 
            // textBox27
            // 
            this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox27->Location = System::Drawing::Point(103, 80);
            this->textBox27->Name = L"textBox27";
            this->textBox27->Size = System::Drawing::Size(55, 24);
            this->textBox27->TabIndex = 12;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label37->Location = System::Drawing::Point(23, 84);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(63, 18);
            this->label37->TabIndex = 11;
            this->label37->Text = L"Канал 2";
            // 
            // textBox28
            // 
            this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox28->Location = System::Drawing::Point(103, 38);
            this->textBox28->Name = L"textBox28";
            this->textBox28->Size = System::Drawing::Size(55, 24);
            this->textBox28->TabIndex = 10;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label38->Location = System::Drawing::Point(23, 42);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(63, 18);
            this->label38->TabIndex = 9;
            this->label38->Text = L"Канал 1";
            // 
            // groupBox8
            // 
            this->groupBox8->Controls->Add(this->textBox24);
            this->groupBox8->Controls->Add(this->label34);
            this->groupBox8->Controls->Add(this->textBox9);
            this->groupBox8->Controls->Add(this->label10);
            this->groupBox8->Controls->Add(this->textBox2);
            this->groupBox8->Controls->Add(this->label31);
            this->groupBox8->Controls->Add(this->textBox1);
            this->groupBox8->Controls->Add(this->label30);
            this->groupBox8->Controls->Add(this->label29);
            this->groupBox8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox8->Location = System::Drawing::Point(6, 33);
            this->groupBox8->Name = L"groupBox8";
            this->groupBox8->Size = System::Drawing::Size(298, 254);
            this->groupBox8->TabIndex = 0;
            this->groupBox8->TabStop = false;
            this->groupBox8->Text = L"Вірогідність генерування (%)";
            this->groupBox8->Enter += gcnew System::EventHandler(this, &KyrsovaDlg::groupBox8_Enter);
            // 
            // textBox24
            // 
            this->textBox24->Enabled = false;
            this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox24->Location = System::Drawing::Point(192, 172);
            this->textBox24->Name = L"textBox24";
            this->textBox24->Size = System::Drawing::Size(55, 24);
            this->textBox24->TabIndex = 10;
            this->textBox24->TextChanged += gcnew System::EventHandler(this, &KyrsovaDlg::textBox24_TextChanged);
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label34->Location = System::Drawing::Point(19, 178);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(94, 18);
            this->label34->TabIndex = 9;
            this->label34->Text = L"Без заявки: ";
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(192, 110);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(55, 24);
            this->textBox2->TabIndex = 4;
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label31->Location = System::Drawing::Point(61, 111);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(121, 18);
            this->label31->TabIndex = 3;
            this->label31->Text = L"2-го пріоритету: ";
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(192, 74);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(55, 24);
            this->textBox1->TabIndex = 2;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label30->Location = System::Drawing::Point(61, 75);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(121, 18);
            this->label30->TabIndex = 1;
            this->label30->Text = L"1-го пріоритету: ";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label29->Location = System::Drawing::Point(19, 37);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(63, 18);
            this->label29->TabIndex = 0;
            this->label29->Text = L"Заявок:";
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->groupBox7);
            this->groupBox1->Controls->Add(this->groupBox5);
            this->groupBox1->Controls->Add(this->groupBox2);
            this->groupBox1->Controls->Add(this->groupBox4);
            this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->groupBox1->Location = System::Drawing::Point(51, 57);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(1323, 279);
            this->groupBox1->TabIndex = 4;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Система масового обслуговування";
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Enabled = false;
            this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBox1->Location = System::Drawing::Point(136, 139);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(85, 22);
            this->checkBox1->TabIndex = 23;
            this->checkBox1->Text = L"Канал 3";
            this->checkBox1->UseVisualStyleBackColor = true;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(16, 158);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(108, 18);
            this->label4->TabIndex = 2;
            this->label4->Text = L"3-го пріритету:";
            this->label4->Click += gcnew System::EventHandler(this, &KyrsovaDlg::label4_Click);
            // 
            // textBox4
            // 
            this->textBox4->Enabled = false;
            this->textBox4->Location = System::Drawing::Point(140, 155);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(53, 24);
            this->textBox4->TabIndex = 3;
            this->textBox4->TextChanged += gcnew System::EventHandler(this, &KyrsovaDlg::textBox4_TextChanged);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(18, 153);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(64, 18);
            this->label9->TabIndex = 4;
            this->label9->Text = L"Черга 3:";
            // 
            // textBox8
            // 
            this->textBox8->Enabled = false;
            this->textBox8->Location = System::Drawing::Point(88, 151);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(41, 24);
            this->textBox8->TabIndex = 5;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(15, 154);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(64, 18);
            this->label8->TabIndex = 16;
            this->label8->Text = L"Черга 3:";
            // 
            // textBox7
            // 
            this->textBox7->Enabled = false;
            this->textBox7->Location = System::Drawing::Point(85, 149);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(41, 24);
            this->textBox7->TabIndex = 17;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(61, 141);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(121, 18);
            this->label10->TabIndex = 3;
            this->label10->Text = L"3-го пріоритету: ";
            // 
            // textBox9
            // 
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox9->Location = System::Drawing::Point(192, 140);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(55, 24);
            this->textBox9->TabIndex = 4;
            // 
            // KyrsovaDlg
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1422, 715);
            this->Controls->Add(this->menuStrip1);
            this->Controls->Add(this->groupBox3);
            this->Controls->Add(this->groupBox1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"KyrsovaDlg";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Система масового обслуговування";
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->groupBox4->ResumeLayout(false);
            this->groupBox4->PerformLayout();
            this->groupBox5->ResumeLayout(false);
            this->groupBox5->PerformLayout();
            this->groupBox7->ResumeLayout(false);
            this->groupBox7->PerformLayout();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->groupBox3->ResumeLayout(false);
            this->groupBox13->ResumeLayout(false);
            this->groupBox13->PerformLayout();
            this->groupBox9->ResumeLayout(false);
            this->groupBox11->ResumeLayout(false);
            this->groupBox11->PerformLayout();
            this->groupBox10->ResumeLayout(false);
            this->groupBox10->PerformLayout();
            this->groupBox8->ResumeLayout(false);
            this->groupBox8->PerformLayout();
            this->groupBox1->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: System::Void проПрограмуToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void FirstPriorBOX_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox8_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox13_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
