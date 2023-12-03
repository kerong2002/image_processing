#pragma once
#define _for3(x, start, end) for(int x = start; x < end; ++x)
#define _for2(x, end) for (int x = 0; x < end; ++x) 

#include <ctime>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Design;
	using namespace std;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
		   Bitmap^ ori_image;
		   Bitmap^ in;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;




		   Bitmap^ output;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Button^ button4;
		   Bitmap^ take_output;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(22, 103);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(315, 271);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button1->Location = System::Drawing::Point(116, 413);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button2->Location = System::Drawing::Point(894, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 71);
			this->button2->TabIndex = 3;
			this->button2->Text = L"LowPass Filter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(857, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(261, 218);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(116, 492);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(160, 32);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button3->Location = System::Drawing::Point(1184, 236);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(208, 71);
			this->button3->TabIndex = 6;
			this->button3->Text = L" Median filter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(1147, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(260, 218);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label5->Location = System::Drawing::Point(435, 511);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(44, 23);
			this->label5->TabIndex = 23;
			this->label5->Text = L"salt";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label6->Location = System::Drawing::Point(566, 511);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 23);
			this->label6->TabIndex = 22;
			this->label6->Text = L"pepper";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown5->Location = System::Drawing::Point(497, 509);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(55, 32);
			this->numericUpDown5->TabIndex = 21;
			this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown6->Location = System::Drawing::Point(655, 509);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(57, 32);
			this->numericUpDown6->TabIndex = 20;
			this->numericUpDown6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(449, 103);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(307, 271);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 24;
			this->pictureBox4->TabStop = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button5->Location = System::Drawing::Point(882, 568);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(208, 71);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Midpoint Filter";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(857, 344);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(261, 218);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 28;
			this->pictureBox5->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label2->Location = System::Drawing::Point(568, 571);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 23);
			this->label2->TabIndex = 35;
			this->label2->Text = L"mean";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label1->Location = System::Drawing::Point(402, 571);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 23);
			this->label1->TabIndex = 34;
			this->label1->Text = L"std_dev";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown2->Location = System::Drawing::Point(646, 569);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(66, 32);
			this->numericUpDown2->TabIndex = 33;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown3->Location = System::Drawing::Point(494, 569);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(63, 32);
			this->numericUpDown3->TabIndex = 32;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button7->Location = System::Drawing::Point(1210, 577);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(207, 86);
			this->button7->TabIndex = 39;
			this->button7->Text = L" Alpha-Trimmed Mean Filter";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(1147, 344);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(260, 218);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 38;
			this->pictureBox7->TabStop = false;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown4->Location = System::Drawing::Point(1132, 607);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(72, 32);
			this->numericUpDown4->TabIndex = 40;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button4->Location = System::Drawing::Point(494, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(182, 70);
			this->button4->TabIndex = 25;
			this->button4->Text = L" Gaussion Noise  Impulse Noise";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1559, 675);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->FileName = "";
		ofd->Filter = "All Files(*.*)|*.*";
		ofd->FilterIndex = 1;

		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "") {
			ori_image = gcnew Bitmap(ofd->FileName);
		}

		if (ori_image == nullptr) {
			return;
		}
		output = gcnew Bitmap(ori_image->Width, ori_image->Height, ori_image->PixelFormat);

		BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, ori_image->Width, ori_image->Height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

		int ori_byteskip = bd_ori->Stride - bd_ori->Width * 3;
		int output_byteskip = bd_output->Stride - bd_output->Width * 3;

		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* output_ptr = (Byte*)((void*)bd_output->Scan0);

		for (int y = 0; y < bd_ori->Height; y++) {
			for (int x = 0; x < bd_ori->Width; x++) {
				int B = (int)ori_ptr[0];
				int G = (int)ori_ptr[1];
				int R = (int)ori_ptr[2];

				int gray = (R + G + B) / 3;
				output_ptr[0] = gray;
				output_ptr[1] = gray;
				output_ptr[2] = gray;

				ori_ptr += 3;
				output_ptr += 3;
			}
			ori_ptr += ori_byteskip;
			output_ptr += output_byteskip;
		}

		ori_image->UnlockBits(bd_ori);
		output->UnlockBits(bd_output);
		pictureBox1->Image = output;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ LPF = gcnew Bitmap((int)output->Width, (int)output->Height, output->PixelFormat);
		Rectangle r_LPF = Rectangle(0, 0, output->Width, output->Height);
		BitmapData^ bd_ori = take_output->LockBits(r_LPF, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_LPF = LPF->LockBits(r_LPF, ImageLockMode::ReadWrite, output->PixelFormat);
		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* output_ptr = (Byte*)((void*)bd_LPF->Scan0);
		int num = (int)numericUpDown1->Value;
		int blank = num / 2;
		int window_size = num * num;
		int index = 0;
		
		int rgb_temp[3] = { 0 };
		_for2(y, output->Height) {
			_for2(x, output->Width) {
				if (x > blank && y > blank && x < (output->Width - blank) && y < (output->Height - blank)) {
					ori_ptr = (Byte*)((void*)bd_ori->Scan0);
					vector<vector<int>> rgb(3, vector<int>(window_size + 1, 0));


					_for3(c, -blank, blank + 1) {
						_for3(d, -blank, blank + 1) {
							if (index >= window_size) {
								cout << "error\n";
								break;
							}
							_for2(s, 3) {
								rgb[2 - s][index] = *(ori_ptr + ((y + c) * bd_LPF->Stride) + ((x + d) * 3) + s);
							}
							++index;
						}
					}
					_for2(u, 3) {
						_for2(s, window_size) {
							rgb_temp[u] += rgb[u][s];
						}
					}
					_for2(s, 3) {
						rgb_temp[s] /= window_size;
					}
					_for2(s, 3) {
						output_ptr[s] = (Byte)rgb_temp[2 - s];
					}
					_for2(s, 3) {
						rgb_temp[s] = 0;;
					}
				}
				else {
						ori_ptr = (Byte*)((void*)bd_ori->Scan0);
					ori_ptr += (y * bd_ori->Stride + x * 3);
					_for2(s, 3) {
						output_ptr[s] = (Byte)ori_ptr[s];
					}
				}
				index = 0;
				output_ptr += 3;
			}
			output_ptr += bd_LPF->Stride - output->Width * 3;
		}
		take_output->UnlockBits(bd_ori);
		LPF->UnlockBits(bd_LPF);
		//將影像顯示在pictureBox
		pictureBox2->Image = LPF;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ MF = gcnew Bitmap((int)output->Width, (int)output->Height, output->PixelFormat);
		Rectangle r_MF = Rectangle(0, 0, output->Width, output->Height);
		BitmapData^ bd_ori = take_output->LockBits(r_MF, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_MF = MF->LockBits(r_MF, ImageLockMode::ReadWrite, output->PixelFormat);
		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* output_ptr = (Byte*)((void*)bd_MF->Scan0);
		int num = (int)numericUpDown1->Value;
		int blank = num / 2;
		int window_size = num * num;
		int index = 0;
		int median = window_size / 2;

		_for2(y, output->Height) {
			_for2(x, output->Width) {
				if (x > blank && y > blank && x < (output->Width - blank) && y < (output->Height - blank)) {
					ori_ptr = (Byte*)((void*)bd_ori->Scan0);
					vector<vector<int>> rgb(3, vector<int>(window_size + 1, 0));


					_for3(c, -blank, blank + 1) {
						_for3(d, -blank, blank + 1) {
							if (index >= window_size) {
								cout << "error\n";
								break;
							}
							_for2(s, 3) {
								rgb[2 - s][index] = *(ori_ptr + ((y + c) * bd_MF->Stride) + ((x + d) * 3) + s);
							}
							++index;
						}
					}
					for (int i = window_size; i > 1; --i) {
						_for2(j, i - 1) {
							_for2(s, 3) {
								if (rgb[s][j] > rgb[s][j + 1]) {
									swap(rgb[s][j], rgb[s][j + 1]);
								}
							}
						}
					}
					_for2(s, 3) {
						output_ptr[s] = (Byte)rgb[2 - s][median];
					}
				}
				else {
					ori_ptr = (Byte*)((void*)bd_ori->Scan0);
					ori_ptr += (y * bd_ori->Stride + x * 3);
					_for2(s, 3) {
						output_ptr[s] = (Byte)ori_ptr[s];
					}
				}
				index = 0;
				output_ptr += 3;
			}
			output_ptr += bd_MF->Stride - output->Width * 3;
		}
		take_output->UnlockBits(bd_ori);
		MF->UnlockBits(bd_MF);
		//將影像顯示在pictureBox
		pictureBox3->Image = MF;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ MPF = gcnew Bitmap((int)output->Width, (int)output->Height, output->PixelFormat);
		Rectangle r_MPF = Rectangle(0, 0, output->Width, output->Height);
		BitmapData^ bd_ori = take_output->LockBits(r_MPF, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_MPF = MPF->LockBits(r_MPF, ImageLockMode::ReadWrite, output->PixelFormat);
		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* output_ptr = (Byte*)((void*)bd_MPF->Scan0);
		int num = (int)numericUpDown1->Value;
		int blank = num / 2;
		int window_size = num * num;
		int index = 0;
		int median = window_size / 2;

		_for2(y, output->Height) {
			_for2(x, output->Width) {
				if (x > blank && y > blank && x < (output->Width - blank) && y < (output->Height - blank)) {
					ori_ptr = (Byte*)((void*)bd_ori->Scan0);
					vector<vector<int>> rgb(3, vector<int>(window_size + 1, 0));


					_for3(c, -blank, blank + 1) {
						_for3(d, -blank, blank + 1) {
							if (index >= window_size) {
								cout << "error\n";
								break;
							}
							_for2(s, 3) {
								rgb[2 - s][index] = *(ori_ptr + ((y + c) * bd_MPF->Stride) + ((x + d) * 3) + s);
							}
							++index;
						}
					}
					for (int i = window_size; i > 1; --i) {
						_for2(j, i - 1) {
							_for2(s, 3) {
								if (rgb[s][j] > rgb[s][j + 1]) {
									swap(rgb[s][j], rgb[s][j + 1]);
								}
							}
						}
					}
					_for2(s, 3) {
						output_ptr[s] =(Byte)((rgb[2 - s][0] + rgb[2 - s][window_size - 1]) / 2);
					}
				}
				else {
					ori_ptr = (Byte*)((void*)bd_ori->Scan0);
					ori_ptr += (y * bd_ori->Stride + x * 3);
					_for2(s, 3) {
						output_ptr[s] = (Byte)ori_ptr[s];
					}
				}
				index = 0;
				output_ptr += 3;
			}
			output_ptr += bd_MPF->Stride - output->Width * 3;
		}
		take_output->UnlockBits(bd_ori);
		MPF->UnlockBits(bd_MPF);
		//將影像顯示在pictureBox
		pictureBox5->Image = MPF;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ LPF = gcnew Bitmap((int)output->Width, (int)output->Height, output->PixelFormat);
		Rectangle r_LPF = Rectangle(0, 0, output->Width, output->Height);
		BitmapData^ bd_ori = take_output->LockBits(r_LPF, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_LPF = LPF->LockBits(r_LPF, ImageLockMode::ReadWrite, output->PixelFormat);
		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* output_ptr = (Byte*)((void*)bd_LPF->Scan0);
		int num = (int)numericUpDown1->Value;
		int blank = num / 2;
		int window_size = num * num;
		int index = 0;
		int T = (int)numericUpDown4->Value;
		int rgb_temp[3] = { 0 };
		_for2(y, output->Height) {
			_for2(x, output->Width) {
				if (x > blank && y > blank && x < (output->Width - blank) && y < (output->Height - blank)) {
					ori_ptr = (Byte*)((void*)bd_ori->Scan0);
					vector<vector<int>> rgb(3, vector<int>(window_size + 1, 0));


					_for3(c, -blank, blank + 1) {
						_for3(d, -blank, blank + 1) {
							if (index >= window_size) {
								cout << "error\n";
								break;
							}
							_for2(s, 3) {
								rgb[2 - s][index] = *(ori_ptr + ((y + c) * bd_LPF->Stride) + ((x + d) * 3) + s);
							}
							++index;
						}
					}
					_for2(u, 3) {
						_for2(s, window_size - T) {
							if (s < T) {
								continue;
							}
							rgb_temp[u] += rgb[u][s];
						}
					}
					_for2(s, 3) {
						rgb_temp[s] /= (window_size - 2 * T);
					}
					_for2(s, 3) {
						output_ptr[s] = (Byte)rgb_temp[2 - s];
					}
					_for2(s, 3) {
						rgb_temp[s] = 0;;
					}
				}
				else {
					ori_ptr = (Byte*)((void*)bd_ori->Scan0);
					ori_ptr += (y * bd_ori->Stride + x * 3);
					_for2(s, 3) {
						output_ptr[s] = (Byte)ori_ptr[s];
					}
				}
				index = 0;
				output_ptr += 3;
			}
			output_ptr += bd_LPF->Stride - output->Width * 3;
		}
		take_output->UnlockBits(bd_ori);
		LPF->UnlockBits(bd_LPF);
		//將影像顯示在pictureBox
		pictureBox7->Image = LPF;
	}
//=================================================================================================================================

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ gn = gcnew Bitmap((int)output->Width, (int)output->Height, output->PixelFormat);
		Rectangle r_gn = Rectangle(0, 0, output->Width, output->Height);
		BitmapData^ bd_ori = output->LockBits(r_gn, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_gn = gn->LockBits(r_gn, ImageLockMode::ReadWrite, output->PixelFormat);

		Byte* ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		Byte* gn_ptr = (Byte*)((Void*)bd_gn->Scan0);
		float std_dev = (float)numericUpDown3->Value;
		float mean = (float)numericUpDown2->Value;
		srand(time(NULL));
		_for2(i, output->Height) {
			_for2(j, output->Width) {
				float u = rand() / (double)RAND_MAX;
				float v = rand() / (double)RAND_MAX;
				//if (!(i||j)) std::cout << v << std::endl;
				float x = sqrt(-2 * log(u)) * cos(2 * 3.14 * v) * std_dev + mean;
				if (x > 127) {
					x = 127;
				}
				else if (x <= -128) {
					x = -128;
				}
				_for2(s, 3) {
					if ((ori_ptr[s] + x) > 255) {
						gn_ptr[s] = 255;
					}
					else if ((ori_ptr[s] + x) < 0) {
						gn_ptr[s] = 0;
					}
					else {
						gn_ptr[s] = ori_ptr[s] + x;
					}
				}
				ori_ptr += 3;
				gn_ptr += 3;
			}
		}
		output->UnlockBits(bd_ori);
		gn->UnlockBits(bd_gn);
		take_output = gn;
		in = gcnew Bitmap((int)output->Width, (int)output->Height, output->PixelFormat);
		Rectangle r_in = Rectangle(0, 0, output->Width, output->Height);
		bd_ori = take_output->LockBits(r_in, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_in = in->LockBits(r_in, ImageLockMode::ReadWrite, output->PixelFormat);

		ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		Byte* in_ptr = (Byte*)((Void*)bd_in->Scan0);

		_for2(y, output->Height) {
			_for2(x, output->Width) {
				_for2(s, 3) {
					in_ptr[s] = ori_ptr[s];
				}
				ori_ptr += 3;
				in_ptr += 3;
			}
		}

		int pepper;
		int salt;
		float pixel = output->Height * output->Width;
		pepper = pixel * ((int)numericUpDown6->Value) / 100;
		salt = pixel * ((int)numericUpDown5->Value) / 100;
		int black = 0;
		int white = 255;
		int x;
		int y;
		bool* randmap = nullptr;
		srand(time(NULL));
		int inIndex = 0;
		int randMapIndex = 0;
		randmap = new bool[(int)pixel] {true};
		_for2(s, (int)pixel) {
			randmap[s] = true;
		}
		_for2(j, pepper) {
			in_ptr = (Byte*)((Void*)bd_in->Scan0);
			x = rand() % output->Width;
			y = rand() % output->Height;
			inIndex = y * bd_in->Stride + x * 3;
			randMapIndex = y * output->Width + x;
			in_ptr += (int)inIndex;
			_for2(s, 3) {
				bool temp = (randmap[randMapIndex]);
				if (temp) {
					in_ptr[s] = black;
					if (s == 2) {
						randmap[randMapIndex] = false;
					}
				}
				else {
					break;
				}
			}
		}

		_for2(j, salt) {
			in_ptr = (Byte*)((Void*)bd_in->Scan0);
			x = rand() % output->Width;
			y = rand() % output->Height;
			inIndex = y * bd_in->Stride + x * 3;
			randMapIndex = y * output->Width + x;
			in_ptr += (int)inIndex;
			_for2(s, 3) {
				bool temp = (randmap[randMapIndex]);
				if (temp) {
					in_ptr[s] = white;
					if (s == 2) {
						randmap[randMapIndex] = false;
					}
				}
				else {
					break;
				}
			}
		}

		take_output->UnlockBits(bd_ori);
		in->UnlockBits(bd_in);
		take_output = in;
		pictureBox4->Image = in;
	}

};
}
