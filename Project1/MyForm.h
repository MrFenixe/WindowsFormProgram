#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ EnableTimerButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;


	protected:







	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->EnableTimerButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(276, 367);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"—корость ѕепе";
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(251, 394);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(126, 19);
			this->hScrollBar1->TabIndex = 1;
			this->hScrollBar1->ValueChanged += gcnew System::EventHandler(this, &MyForm::hScrollBar1_ValueChanged);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"png-clipart-computer-icons-reddit-pepe-the-frog-pepe-face-smiley-tree-frog.png");
			this->imageList1->Images->SetKeyName(1, L"widepeepoHappy.png");
			this->imageList1->Images->SetKeyName(2, L"загруженное.png");
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// EnableTimerButton
			// 
			this->EnableTimerButton->Location = System::Drawing::Point(279, 426);
			this->EnableTimerButton->Name = L"EnableTimerButton";
			this->EnableTimerButton->Size = System::Drawing::Size(75, 23);
			this->EnableTimerButton->TabIndex = 2;
			this->EnableTimerButton->Text = L"Start";
			this->EnableTimerButton->UseVisualStyleBackColor = true;
			this->EnableTimerButton->Click += gcnew System::EventHandler(this, &MyForm::EnableTimerButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(162, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 300);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 502);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->EnableTimerButton);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void hScrollBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "—корость ѕепе = " + hScrollBar1->Value;
		timer1->Interval = hScrollBar1->Value * 8 + 10;
	}

	private: System::Void EnableTimerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (timer1->Enabled) {
			timer1->Enabled = false;
			EnableTimerButton->Text = "Start";
		}
		else{
			timer1->Enabled = true;
			EnableTimerButton->Text = "Stop";
		}
	}
		   short i = 0;
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = imageList1->Images[i];
	i++;
	if (i > 2)i = 0;
}
};
}
