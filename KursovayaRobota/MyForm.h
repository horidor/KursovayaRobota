#pragma once

namespace KursovayaRobota {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÓœÓ„‡ÏÏÂToolStripMenuItem;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox_sort;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_generate;
	private: System::Windows::Forms::Button^ button_sort;
	private: System::Windows::Forms::Button^ button_file;

	private: System::Windows::Forms::Button^ button_vizualize_gen;
	private: System::Windows::Forms::MaskedTextBox^ gen_text;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label_time;
	private: System::Windows::Forms::Label^ label_compare;
	private: System::Windows::Forms::Label^ label_swap;
	private: System::Windows::Forms::RadioButton^ radioButton_inc;

	private: System::Windows::Forms::GroupBox^ groupBox_order;
	private: System::Windows::Forms::RadioButton^ radioButton_dec;

	private: System::Windows::Forms::Label^ label_size;
	private: System::Windows::Forms::Label^ label_sorted;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚≥‰ÍËÚË‘‡ÈÎ≤Á—Ú‡ÚËÒÚËÍÓÈToolStripMenuItem;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Label^ label_process;
	private: System::Windows::Forms::Label^ label_method;














	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->‚˚ıÓ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚≥‰ÍËÚË‘‡ÈÎ≤Á—Ú‡ÚËÒÚËÍÓÈToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_sort = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_generate = (gcnew System::Windows::Forms::Button());
			this->button_sort = (gcnew System::Windows::Forms::Button());
			this->button_file = (gcnew System::Windows::Forms::Button());
			this->button_vizualize_gen = (gcnew System::Windows::Forms::Button());
			this->gen_text = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label_time = (gcnew System::Windows::Forms::Label());
			this->label_compare = (gcnew System::Windows::Forms::Label());
			this->label_swap = (gcnew System::Windows::Forms::Label());
			this->radioButton_inc = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox_order = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_dec = (gcnew System::Windows::Forms::RadioButton());
			this->label_size = (gcnew System::Windows::Forms::Label());
			this->label_sorted = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label_process = (gcnew System::Windows::Forms::Label());
			this->label_method = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox_order->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->‚˚ıÓ‰ToolStripMenuItem,
					this->ÓœÓ„‡ÏÏÂToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(441, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ‚˚ıÓ‰ToolStripMenuItem
			// 
			this->‚˚ıÓ‰ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->‚≥‰ÍËÚË‘‡ÈÎ≤Á—Ú‡ÚËÒÚËÍÓÈToolStripMenuItem });
			this->‚˚ıÓ‰ToolStripMenuItem->Name = L"‚˚ıÓ‰ToolStripMenuItem";
			this->‚˚ıÓ‰ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->‚˚ıÓ‰ToolStripMenuItem->Text = L"‘‡ÈÎ";
			// 
			// ‚≥‰ÍËÚË‘‡ÈÎ≤Á—Ú‡ÚËÒÚËÍÓÈToolStripMenuItem
			// 
			this->‚≥‰ÍËÚË‘‡ÈÎ≤Á—Ú‡ÚËÒÚËÍÓÈToolStripMenuItem->Name = L"‚≥‰ÍËÚË‘‡ÈÎ≤Á—Ú‡ÚËÒÚËÍÓÈToolStripMenuItem";
			this->‚≥‰ÍËÚË‘‡ÈÎ≤Á—Ú‡ÚËÒÚËÍÓÈToolStripMenuItem->Size = System::Drawing::Size(302, 22);
			this->‚≥‰ÍËÚË‘‡ÈÎ≤Á—Ú‡ÚËÒÚËÍÓÈToolStripMenuItem->Text = L"¬≥‰ÍËÚË Ù‡ÈÎ ≥Á ÒÚ‡ÚËÒÚËÍÓÈ Ú‡ Ï‡ÒË‚ÓÏ";
			// 
			// ÓœÓ„‡ÏÏÂToolStripMenuItem
			// 
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Name = L"ÓœÓ„‡ÏÏÂToolStripMenuItem";
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Text = L"œÓ ÔÓ„‡ÏÛ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"–ÓÁÏ≥ Ï‡ÒË‚Û";
			// 
			// comboBox_sort
			// 
			this->comboBox_sort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_sort->FormattingEnabled = true;
			this->comboBox_sort->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->comboBox_sort->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"ÿ‚Ë‰ÍÂ ÒÓÚÛ‚‡ÌÌˇ (ÓÁ·ËÚÚˇ ’Ó‡‡)", L"—ÓÚÛ‚‡ÌÌˇ ÁÎËÚÚˇÏ (ƒ. ÙÓÌ ÕÂÈÏ‡Ì‡)",
					L"—ÓÚÛ‚‡ÌÌˇ Á‡ ‰ÓÔÓÏÓ„Ó˛ ‰‚≥ÈÍÓ‚Ó„Ó ‰ÂÂ‚‡"
			});
			this->comboBox_sort->Location = System::Drawing::Point(12, 136);
			this->comboBox_sort->Name = L"comboBox_sort";
			this->comboBox_sort->Size = System::Drawing::Size(216, 23);
			this->comboBox_sort->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ÃÂÚÓ‰ ÒÓÚÛ‚‡ÌÌˇ";
			// 
			// button_generate
			// 
			this->button_generate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_generate->Location = System::Drawing::Point(237, 60);
			this->button_generate->Name = L"button_generate";
			this->button_generate->Size = System::Drawing::Size(192, 47);
			this->button_generate->TabIndex = 5;
			this->button_generate->Text = L"«„ÂÌÂÛ‚‡ÚË Ï‡ÒË‚";
			this->button_generate->UseVisualStyleBackColor = true;
			this->button_generate->Click += gcnew System::EventHandler(this, &MyForm::button_generate_Click);
			// 
			// button_sort
			// 
			this->button_sort->Enabled = false;
			this->button_sort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sort->Location = System::Drawing::Point(237, 112);
			this->button_sort->Name = L"button_sort";
			this->button_sort->Size = System::Drawing::Size(192, 47);
			this->button_sort->TabIndex = 6;
			this->button_sort->Text = L"¬≥‰ÒÓÚÛ‚‡ÚË Ï‡ÒË‚";
			this->button_sort->UseVisualStyleBackColor = true;
			this->button_sort->Click += gcnew System::EventHandler(this, &MyForm::button_sort_Click);
			// 
			// button_file
			// 
			this->button_file->Enabled = false;
			this->button_file->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_file->Location = System::Drawing::Point(207, 25);
			this->button_file->Name = L"button_file";
			this->button_file->Size = System::Drawing::Size(195, 75);
			this->button_file->TabIndex = 7;
			this->button_file->Text = L"¬Ë‚ÂÒÚË ÒÚ‡ÚËÒÚËÍÛ Ú‡ Ï‡ÒË‚ Û Ù‡ÈÎ";
			this->button_file->UseVisualStyleBackColor = true;
			this->button_file->Click += gcnew System::EventHandler(this, &MyForm::button_file_Click);
			// 
			// button_vizualize_gen
			// 
			this->button_vizualize_gen->Enabled = false;
			this->button_vizualize_gen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_vizualize_gen->Location = System::Drawing::Point(6, 25);
			this->button_vizualize_gen->Name = L"button_vizualize_gen";
			this->button_vizualize_gen->Size = System::Drawing::Size(195, 75);
			this->button_vizualize_gen->TabIndex = 9;
			this->button_vizualize_gen->Text = L"¬≥ÁÛ‡Î≥Á‡ˆ≥ˇ";
			this->button_vizualize_gen->UseVisualStyleBackColor = true;
			this->button_vizualize_gen->Click += gcnew System::EventHandler(this, &MyForm::button_vizualize_gen_Click);
			// 
			// gen_text
			// 
			this->gen_text->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->gen_text->Location = System::Drawing::Point(12, 84);
			this->gen_text->Name = L"gen_text";
			this->gen_text->Size = System::Drawing::Size(216, 20);
			this->gen_text->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(233, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 19);
			this->label3->TabIndex = 12;
			this->label3->Text = L"—Ú‡ÚËÒÚËÍ‡";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(250, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 15);
			this->label4->TabIndex = 13;
			this->label4->Text = L"ÿ‚≥‰Í≥ÒÚ¸:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(250, 197);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 15);
			this->label5->TabIndex = 14;
			this->label5->Text = L"œÓ≥‚ÌˇÌ¸:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(250, 212);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 15);
			this->label6->TabIndex = 15;
			this->label6->Text = L"œÂÂÒÚ‡ÌÓ‚ÓÍ:";
			// 
			// label_time
			// 
			this->label_time->AutoSize = true;
			this->label_time->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_time->Location = System::Drawing::Point(342, 182);
			this->label_time->Name = L"label_time";
			this->label_time->Size = System::Drawing::Size(34, 15);
			this->label_time->TabIndex = 16;
			this->label_time->Text = L"none";
			// 
			// label_compare
			// 
			this->label_compare->AutoSize = true;
			this->label_compare->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_compare->Location = System::Drawing::Point(342, 197);
			this->label_compare->Name = L"label_compare";
			this->label_compare->Size = System::Drawing::Size(34, 15);
			this->label_compare->TabIndex = 17;
			this->label_compare->Text = L"none";
			// 
			// label_swap
			// 
			this->label_swap->AutoSize = true;
			this->label_swap->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_swap->Location = System::Drawing::Point(342, 212);
			this->label_swap->Name = L"label_swap";
			this->label_swap->Size = System::Drawing::Size(34, 15);
			this->label_swap->TabIndex = 18;
			this->label_swap->Text = L"none";
			// 
			// radioButton_inc
			// 
			this->radioButton_inc->AutoSize = true;
			this->radioButton_inc->Checked = true;
			this->radioButton_inc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_inc->Location = System::Drawing::Point(6, 17);
			this->radioButton_inc->Name = L"radioButton_inc";
			this->radioButton_inc->Size = System::Drawing::Size(113, 19);
			this->radioButton_inc->TabIndex = 19;
			this->radioButton_inc->TabStop = true;
			this->radioButton_inc->Text = L"«‡ Á·≥Î¸¯ÂÌÌˇÏ";
			this->radioButton_inc->UseVisualStyleBackColor = true;
			// 
			// groupBox_order
			// 
			this->groupBox_order->Controls->Add(this->radioButton_dec);
			this->groupBox_order->Controls->Add(this->radioButton_inc);
			this->groupBox_order->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox_order->Location = System::Drawing::Point(11, 163);
			this->groupBox_order->Name = L"groupBox_order";
			this->groupBox_order->Size = System::Drawing::Size(216, 72);
			this->groupBox_order->TabIndex = 20;
			this->groupBox_order->TabStop = false;
			this->groupBox_order->Text = L"œÓˇ‰ÓÍ ÒÓÚÛ‚‡ÌÌˇ";
			// 
			// radioButton_dec
			// 
			this->radioButton_dec->AutoSize = true;
			this->radioButton_dec->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_dec->Location = System::Drawing::Point(6, 40);
			this->radioButton_dec->Name = L"radioButton_dec";
			this->radioButton_dec->Size = System::Drawing::Size(101, 19);
			this->radioButton_dec->TabIndex = 21;
			this->radioButton_dec->Text = L"«‡ ÒÔ‡‰‡ÌÌˇÏ";
			this->radioButton_dec->UseVisualStyleBackColor = true;
			// 
			// label_size
			// 
			this->label_size->AutoSize = true;
			this->label_size->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_size->Location = System::Drawing::Point(140, 60);
			this->label_size->Name = L"label_size";
			this->label_size->Size = System::Drawing::Size(0, 21);
			this->label_size->TabIndex = 21;
			// 
			// label_sorted
			// 
			this->label_sorted->AutoSize = true;
			this->label_sorted->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_sorted->Location = System::Drawing::Point(6, 316);
			this->label_sorted->Name = L"label_sorted";
			this->label_sorted->Size = System::Drawing::Size(174, 21);
			this->label_sorted->TabIndex = 22;
			this->label_sorted->Text = L"Ã‡ÒË‚ ‚≥‰ÒÓÚÓ‚‡ÌÓ";
			this->label_sorted->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_vizualize_gen);
			this->groupBox1->Controls->Add(this->button_file);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(10, 340);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(418, 111);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ƒ≥ø Ì‡‰ Ï‡ÒË‚ÓÏ";
			this->toolTip1->SetToolTip(this->groupBox1, L"¬≥‰Ó·‡ÊÂÌÌˇ ‚ËÍÓÌÛ∫Ú¸Òˇ Ú≥Î¸ÍË ‰Îˇ ÔÂ¯Ëı 1000 ÂÎÂÏÂÌÚ≥‚");
			// 
			// toolTip1
			// 
			this->toolTip1->UseAnimation = false;
			this->toolTip1->UseFading = false;
			// 
			// label_process
			// 
			this->label_process->AutoSize = true;
			this->label_process->Font = (gcnew System::Drawing::Font(L"Impact", 10));
			this->label_process->Location = System::Drawing::Point(7, 30);
			this->label_process->Name = L"label_process";
			this->label_process->Size = System::Drawing::Size(42, 18);
			this->label_process->TabIndex = 25;
			this->label_process->Text = L"label7";
			this->label_process->Visible = false;
			// 
			// label_method
			// 
			this->label_method->AutoSize = true;
			this->label_method->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_method->Location = System::Drawing::Point(177, 320);
			this->label_method->Name = L"label_method";
			this->label_method->Size = System::Drawing::Size(35, 15);
			this->label_method->TabIndex = 26;
			this->label_method->Text = L"label8";
			this->label_method->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 463);
			this->Controls->Add(this->label_method);
			this->Controls->Add(this->label_process);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label_sorted);
			this->Controls->Add(this->label_size);
			this->Controls->Add(this->groupBox_order);
			this->Controls->Add(this->label_swap);
			this->Controls->Add(this->label_compare);
			this->Controls->Add(this->label_time);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->gen_text);
			this->Controls->Add(this->button_sort);
			this->Controls->Add(this->button_generate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox_sort);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(457, 502);
			this->MinimumSize = System::Drawing::Size(457, 502);
			this->Name = L"MyForm";
			this->Text = L" ÛÒÓ‚‡ Ó·ÓÚ‡";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox_order->ResumeLayout(false);
			this->groupBox_order->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button_generate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_sort_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_file_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_vizualize_gen_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_vizualize_sort_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
