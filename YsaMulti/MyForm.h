#pragma once
#define c 0.1
#define sbt 1
#define M 0.1
#define E 2.71

#include "Methods.h"
#include "AgirlikGüncelle.h"

namespace YsaMulti {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int X = 0, Y = 0;
	int size = 4;
	int counter = 0;
	float* position = new float[size];
	float* norm = new float[size];
	double* w = new double[size-1];
	double dizi[3] = { 1,1,1 };
	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  processToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripMenuItem^  ýnitializationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  trainingToolStripMenuItem;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::ToolStripMenuItem^  perceptionLearningToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deltaLearningToolStripMenuItem;
	private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ýnitializationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trainingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perceptionLearningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deltaLearningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(620, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// processToolStripMenuItem
			// 
			this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ýnitializationToolStripMenuItem,
					this->trainingToolStripMenuItem
			});
			this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			this->processToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->processToolStripMenuItem->Text = L"Process";
			// 
			// ýnitializationToolStripMenuItem
			// 
			this->ýnitializationToolStripMenuItem->Name = L"ýnitializationToolStripMenuItem";
			this->ýnitializationToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ýnitializationToolStripMenuItem->Text = L"Initialize";
			this->ýnitializationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ýnitializationToolStripMenuItem_Click);
			// 
			// trainingToolStripMenuItem
			// 
			this->trainingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->perceptionLearningToolStripMenuItem,
					this->deltaLearningToolStripMenuItem
			});
			this->trainingToolStripMenuItem->Name = L"trainingToolStripMenuItem";
			this->trainingToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->trainingToolStripMenuItem->Text = L"Training";
			// 
			// perceptionLearningToolStripMenuItem
			// 
			this->perceptionLearningToolStripMenuItem->Name = L"perceptionLearningToolStripMenuItem";
			this->perceptionLearningToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->perceptionLearningToolStripMenuItem->Text = L"Perception Learning";
			this->perceptionLearningToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::perceptionLearningToolStripMenuItem_Click);
			// 
			// deltaLearningToolStripMenuItem
			// 
			this->deltaLearningToolStripMenuItem->Name = L"deltaLearningToolStripMenuItem";
			this->deltaLearningToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->deltaLearningToolStripMenuItem->Text = L"Delta Learning";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox1->Location = System::Drawing::Point(12, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 300);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 3);
			this->label1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(162, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(3, 300);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2 ", L"3 ", L"4 ", L"5 " });
			this->comboBox1->Location = System::Drawing::Point(427, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(127, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(346, 93);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(60, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Class 1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(346, 117);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(60, 17);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Class 2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(346, 141);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(60, 17);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"Class 3";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(346, 165);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(60, 17);
			this->checkBox4->TabIndex = 8;
			this->checkBox4->Text = L"Class 4";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(346, 189);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(60, 17);
			this->checkBox5->TabIndex = 9;
			this->checkBox5->Text = L"Class 5";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(343, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 21);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Class Sayýsý";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 367);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ýnitializationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int  i = 0, n = 0, satir = 0;
		Random rnd;
		Graphics ^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ purple = gcnew Pen(Color::Purple, 2);
		Pen^ yellow = gcnew Pen(Color::Yellow, 2);
		Pen^ pink = gcnew Pen(Color::Pink, 2);
		Pen^ green = gcnew Pen(Color::Green, 2);
		Pen^ darkBlue = gcnew Pen(Color::DarkBlue, 2);


		satir = comboBox1->SelectedIndex;
		n = satir + 2;

		for (i; i < n * 3; i++)
		{
			w[i] = rnd.NextDouble();
		}
		for (i = 0;i < n;i++)
		{
			dizi[0] = w[i * 3];
			dizi[1] = w[i * 3 + 1];
			dizi[2] = w[i * 3 + 2];

			float* result = drawWeight(dizi, (float)pictureBox1->Width / 2, (float)(-(pictureBox1->Width / 2)));
			if (i == 0)
				g->DrawLine(purple, (float)0, pictureBox1->Height / 2 - result[1], (float)(pictureBox1->Width), (pictureBox1->Height / 2) - result[0]);
			else if (i == 1)
				g->DrawLine(yellow, (float)0, pictureBox1->Height / 2 - result[1], (float)(pictureBox1->Width), (pictureBox1->Height / 2) - result[0]);
			else if (i == 2)
				g->DrawLine(pink, (float)0, pictureBox1->Height / 2 - result[1], (float)(pictureBox1->Width), (pictureBox1->Height / 2) - result[0]);
			else if (i == 3)
				g->DrawLine(green, (float)0, pictureBox1->Height / 2 - result[1], (float)(pictureBox1->Width), (pictureBox1->Height / 2) - result[0]);
			else if (i == 4)
				g->DrawLine(darkBlue, (float)0, pictureBox1->Height / 2 - result[1], (float)(pictureBox1->Width), (pictureBox1->Height / 2) - result[0]);
			else
				break;
		}

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{

	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{

	}
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{

	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{

	}
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		counter++;
		X = System::Convert::ToInt32(e->X);
		Y = System::Convert::ToInt32(e->Y);

		Graphics ^g;
		g = pictureBox1->CreateGraphics();

		Pen^ purple = gcnew Pen(Color::Purple, 2);
		Pen^ yellow = gcnew Pen(Color::Yellow, 2);
		Pen^ pink = gcnew Pen(Color::Pink, 2);
		Pen^ green = gcnew Pen(Color::Green, 2);
		Pen^ darkBlue = gcnew Pen(Color::DarkBlue, 2);


		if (checkBox1->Checked)
		{
			float main_x = X - pictureBox1->Width / 2;
			float main_y = pictureBox1->Height / 2 - Y;
			position[size - 4] = main_x;
			position[size - 3] = main_y;
			position[size - 2] = sbt;
			position[size - 1] = 1;
			size += 4;

			g->DrawLine(purple, (X - 5), Y, (X + 5), Y);
			g->DrawLine(purple, X, (Y - 5), X, (Y + 5));

		}

		else if (checkBox2->Checked)
		{
			float main_x = X - pictureBox1->Width / 2;
			float main_y = pictureBox1->Height / 2 - Y;
			position[size - 4] = main_x;
			position[size - 3] = main_y;
			position[size - 2] = sbt;
			position[size - 1] = 2;
			size += 4;

			g->DrawLine(yellow, (X - 5), Y, (X + 5), Y);
			g->DrawLine(yellow, X, (Y - 5), X, (Y + 5));

		}

		else if (checkBox3->Checked)
		{
			float main_x = X - pictureBox1->Width / 2;
			float main_y = pictureBox1->Height / 2 - Y;
			position[size - 4] = main_x;
			position[size - 3] = main_y;
			position[size - 2] = sbt;
			position[size - 1] = 3;
			size += 4;

			g->DrawLine(pink, (X - 5), Y, (X + 5), Y);
			g->DrawLine(pink, X, (Y - 5), X, (Y + 5));

		}

		else if (checkBox4->Checked)
		{
			float main_x = X - pictureBox1->Width / 2;
			float main_y = pictureBox1->Height / 2 - Y;
			position[size - 4] = main_x;
			position[size - 3] = main_y;
			position[size - 2] = sbt;
			position[size - 1] = 4;
			size += 4;

			g->DrawLine(green, (X - 5), Y, (X + 5), Y);
			g->DrawLine(green, X, (Y - 5), X, (Y + 5));

		}

		else if (checkBox5->Checked)
		{
			float main_x = X - pictureBox1->Width / 2;
			float main_y = pictureBox1->Height / 2 - Y;
			position[size - 4] = main_x;
			position[size - 3] = main_y;
			position[size - 2] = sbt;
			position[size - 1] = 5;
			size += 4;

			g->DrawLine(darkBlue, (X - 5), Y, (X + 5), Y);
			g->DrawLine(darkBlue, X, (Y - 5), X, (Y + 5));

		}

		else
		{
			MessageBox::Show("Bir class seçiniz.", "Uyarý!!!");
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		
	}
	
	
	private: System::Void perceptionLearningToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int k = 0, n = 0, i = 0, combo = 0, j = 0, dd = 0;
		float net = 0, sgnNet = 0, omegaKatsayi = 0;
		int  sýnýfSayisi = 0;

		combo = comboBox1->SelectedIndex;
		sýnýfSayisi = combo + 2;

		int size = 3;
		float* d = new float[size];

		double* agýrlýklar = new double[3];
		double* noktalar = new double[4];

		Graphics ^ g;
		g = pictureBox1->CreateGraphics();
		Pen^ pen;
		Pen^ purple = gcnew Pen(Color::Purple, 2);
		Pen^ yellow = gcnew Pen(Color::Yellow, 2);
		Pen^ pink = gcnew Pen(Color::Pink, 2);
		Pen^ green = gcnew Pen(Color::Green, 2);
		Pen^ darkBlue = gcnew Pen(Color::DarkBlue, 2);
		//D aðýrlýk uzaylarýný buluyorum sýnýf sayýma göre +1 olaný ve -1 olaný ayýrýyorum
	
		for (int n = 0;n < (counter * 4);n += 4)
		{
			norm[n] = position[n];
			norm[n + 1] = position[n + 1];
			norm[n + 2] = position[n + 2];
			norm[n + 3] = position[n + 3];
		}

		double error = 1;

		while (error > 0)
		{
			error = 0;
			i = 0;
			while (i < counter)
			{
				// sýnýflar için olmasý gereken d deðerlerini belirliyorum.
				double newd[5] = { -1,-1,-1,-1,-1 };

				if (position[i * 4 + 3] == 1)
				{
					newd[0] = 1;

				}
				else if (position[i * 4 + 3] == 2)
				{
					newd[1] = 1;

				}
				else if (position[i * 4 + 3] == 3)
				{
					newd[2] = 1;

				}
				else if (position[i * 4 + 3] == 4)
				{
					newd[3] = 1;

				}
				else
				{
					newd[4] = 1;

				}

				for (j = 0; j < sýnýfSayisi; j++)
				{

					net = ((w[j * 3] * position[i * 4]) + (w[j * 3 + 1] * position[i * 4 + 1]) + (w[j * 3 + 2] * position[i * 4 + 2]));

					if (net >= 0)
						sgnNet = 1;
					else
						sgnNet = -1;


					error += ((float)(Math::Abs(newd[j] - sgnNet)) / 2.0);

					omegaKatsayi = (c / 2) * (newd[j] - sgnNet);
					//int a = ((int)(k / sýnýfSayisi)*sýnýfSayisi);

					w[j * 3] += omegaKatsayi * position[i * 4];
					w[j * 3 + 1] += omegaKatsayi * position[i * 4 + 1];
					w[j * 3 + 2] += omegaKatsayi * position[i * 4 + 2];

					//Refresh yaparak tüm verileri tekrar görüntüleme kýsmý
					pictureBox1->Refresh();



					//Noktalar tekrar ekrana yazdýrýldý
					for (int n = 0;n < counter * 4;n += 4)
					{
						//Ait olduðu classa göre renk belirleniyor
						if (norm[n + 3] == 1)
						{
							pen = gcnew Pen(Color::Purple, 2);
						}
						else if (norm[n + 3] == 2)
						{
							pen = gcnew Pen(Color::Yellow, 2);
						}
						else if (norm[n + 3] == 3)
						{
							pen = gcnew Pen(Color::Pink, 2);
						}
						else if (norm[n + 3] == 4)
						{
							pen = gcnew Pen(Color::Green, 2);
						}
						else
						{
							pen = gcnew Pen(Color::DarkBlue, 2);
						}

						//Noktanýn kordinat düzlemindeki deðeri pictureboxa dönüþtürülüyor
						X = (norm[n] + (pictureBox1->Width / 2));
						Y = ((pictureBox1->Height / 2) - (norm[n + 1]));

						//Nokta çizdiriliyor
						g->DrawLine(pen, (X - 5), Y, (X + 5), Y);
						g->DrawLine(pen, X, (Y - 5), X, (Y + 5));
					}

					//Doðrular tekrar ekrana çizdiriliyor
					for (int x = 0;x < sýnýfSayisi;x++)
					{
						dizi[0] = w[x * 3];
						dizi[1] = w[x * 3 + 1];
						dizi[2] = w[x * 3 + 2];

						float* deger = drawWeight(dizi, (float)pictureBox1->Width / 2, -(float)(pictureBox1->Width / 2));

						if (x == 0)
							g->DrawLine(purple, (float)0, (pictureBox1->Height / 2 - deger[1]), (float)(pictureBox1->Width), (pictureBox1->Height / 2) - deger[0]);
						else if (x == 1)
							g->DrawLine(yellow, (float)0, (pictureBox1->Height / 2 - deger[1]), (float)(pictureBox1->Width), (pictureBox1->Height / 2) - deger[0]);
						else if (x == 2)
							g->DrawLine(pink, (float)0, (pictureBox1->Height / 2 - deger[1]), (float)(pictureBox1->Width), (pictureBox1->Height / 2) - deger[0]);
						else if (x == 3)
							g->DrawLine(green, (float)0, (pictureBox1->Height / 2 - deger[1]), (float)(pictureBox1->Width), (pictureBox1->Height / 2) - deger[0]);
						else
							g->DrawLine(darkBlue, (float)0, (pictureBox1->Height / 2 - deger[1]), (float)(pictureBox1->Width), (pictureBox1->Height / 2) - deger[0]);
					}

				}
				j = 0;
				i++;
			}
		}
		
	}
};
}
