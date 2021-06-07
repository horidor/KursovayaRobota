#pragma once

namespace KursovayaRobota {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormVizualize
	/// </summary>
	public ref class FormVizualize : public System::Windows::Forms::Form
	{
	public:
		FormVizualize(void)
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
		~FormVizualize()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox_graph;
	private: System::Windows::Forms::Button^ button_vizualize;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox_graph = (gcnew System::Windows::Forms::PictureBox());
			this->button_vizualize = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_graph))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			//this->timer1->Interval = 10;
			//this->timer1->Tick += gcnew System::EventHandler(this, &FormVizualize::timer1_Tick);
			// 
			// pictureBox_graph
			// 
			this->pictureBox_graph->BackColor = System::Drawing::Color::Black;
			this->pictureBox_graph->Location = System::Drawing::Point(36, 12);
			this->pictureBox_graph->MaximumSize = System::Drawing::Size(1010, 900);
			this->pictureBox_graph->MinimumSize = System::Drawing::Size(1010, 900);
			this->pictureBox_graph->Name = L"pictureBox_graph";
			this->pictureBox_graph->Size = System::Drawing::Size(1010, 900);
			this->pictureBox_graph->TabIndex = 0;
			this->pictureBox_graph->TabStop = false;
			// 
			// button_vizualize
			// 
			this->button_vizualize->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_vizualize->Location = System::Drawing::Point(36, 918);
			this->button_vizualize->Name = L"button_vizualize";
			this->button_vizualize->Size = System::Drawing::Size(240, 31);
			this->button_vizualize->TabIndex = 1;
			this->button_vizualize->Text = L"Віалізувати згенерований масив";
			this->button_vizualize->UseVisualStyleBackColor = true;
			this->button_vizualize->Click += gcnew System::EventHandler(this, &FormVizualize::button_vizualize_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(417, 918);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(240, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Віалізувати відсортований масив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormVizualize::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(806, 918);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 31);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Віалізувати процес сортування";
			this->button2->UseVisualStyleBackColor = true;
			//this->button2->Click += gcnew System::EventHandler(this, &FormVizualize::button2_Click);
			// 
			// FormVizualize
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1084, 961);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_vizualize);
			this->Controls->Add(this->pictureBox_graph);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormVizualize";
			this->Text = L"Візуалізація";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_graph))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_vizualize_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
//private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
//private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
