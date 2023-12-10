#pragma once
#define _for3(x, start, end) for(int x = start; x < end; ++x)
#define _for2(x, end) for (int x = 0; x < end; ++x) 

#include <ctime>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
namespace Project1 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
		Bitmap^ output;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
		   Bitmap^ ori_image;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 343);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(380, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(363, 343);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button1->Location = System::Drawing::Point(53, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 54);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button2->Location = System::Drawing::Point(412, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(293, 105);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Spatial High-Pass Filter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(93, 456);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 97, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(155, 32);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button3->Location = System::Drawing::Point(885, 373);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 78);
			this->button3->TabIndex = 6;
			this->button3->Text = L" High-boost filter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(792, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(388, 343);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown2->Location = System::Drawing::Point(919, 458);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(155, 32);
			this->numericUpDown2->TabIndex = 7;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label1->Location = System::Drawing::Point(15, 458);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 23);
			this->label1->TabIndex = 8;
			this->label1->Text = L"MASK";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label2->Location = System::Drawing::Point(881, 460);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 23);
			this->label2->TabIndex = 9;
			this->label2->Text = L"A";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1299, 638);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
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
		Bitmap^ HPF = gcnew Bitmap(output->Width, output->Height, output->PixelFormat);
		Rectangle rec = Rectangle(0, 0, output->Width, output->Height);
		BitmapData^ bd_ori = output->LockBits(rec, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_HPF = HPF->LockBits(rec, ImageLockMode::ReadWrite, output->PixelFormat);
		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* output_ptr = (Byte*)((void*)bd_HPF->Scan0);
		int num = (int)numericUpDown1->Value;
		int blank = num / 2;
		int window_size = num * num;
		int index = 0;
		int median = window_size / 2;
		int set_rate;
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
								rgb[2 - s][index] = *(ori_ptr + ((y + c) * bd_HPF->Stride) + ((x + d) * 3) + s);
							}
							++index;
						}
					}
					_for2(a, window_size) {
						if (a == window_size / 2) {
							set_rate = window_size - 1;
						}
						else {
							set_rate = -1;
						}
						_for2(s, 3) {
							rgb_temp[s] += rgb[s][a] * set_rate;
						}
					}
					_for2(s, 3) {
						if (rgb_temp[s] < 0) {
							rgb_temp[s] = 0;
						}
						else {
							rgb_temp[s] /= window_size;
						}
					}
					_for2(s, 3) {
						output_ptr[s] = (Byte)rgb_temp[s];
					}
					_for2(s, 3) {
						rgb_temp[s] = 0;
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
			output_ptr += bd_HPF->Stride - output->Width * 3;
		}
		output->UnlockBits(bd_ori);
		HPF->UnlockBits(bd_HPF);

		pictureBox2->Image = HPF;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ HBF = gcnew Bitmap(output->Width, output->Height, output->PixelFormat);
		Rectangle rec = Rectangle(0, 0, output->Width, output->Height);
		BitmapData^ bd_ori = output->LockBits(rec, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_HBF = HBF->LockBits(rec, ImageLockMode::ReadWrite, output->PixelFormat);
		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* output_ptr = (Byte*)((void*)bd_HBF->Scan0);
		int num = (int)numericUpDown1->Value;
		float A = (float)numericUpDown2->Value / 10;

		int blank = num / 2;
		int window_size = num * num;
		int index = 0;
		int median = window_size / 2;
		float set_rate;
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
								rgb[2 - s][index] = *(ori_ptr + ((y + c) * bd_HBF->Stride) + ((x + d) * 3) + s);
							}
							++index;
						}
					}
					_for2(a, window_size) {
						if (a == window_size / 2) {
							set_rate = A + window_size - 2;
						}
						else {
							set_rate = -1;
						}
						_for2(s, 3) {
							rgb_temp[s] += (int)(rgb[s][a] * set_rate);
						}
					}
					_for2(s, 3) {
						if (rgb_temp[s] < 0) {
							rgb_temp[s] = 0;
						}
						else if (rgb_temp[s] > 255) {
							rgb_temp[s] = 255;
						}
					}
					_for2(s, 3) {
						output_ptr[s] = (Byte)rgb_temp[s];
					}
					_for2(s, 3) {
						rgb_temp[s] = 0;
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
			output_ptr += bd_HBF->Stride - output->Width * 3;
		}
		output->UnlockBits(bd_ori);
		HBF->UnlockBits(bd_HBF);

		pictureBox3->Image = HBF;
	}
};
}
