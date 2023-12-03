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


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;










		   Bitmap^ ori_image;
		   Bitmap^ in;










		   Bitmap^ output;
	private: System::Windows::Forms::PictureBox^ pictureBox2;





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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(26, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(407, 410);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->button1->Location = System::Drawing::Point(128, 441);
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
			this->button2->Location = System::Drawing::Point(628, 431);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 71);
			this->button2->TabIndex = 3;
			this->button2->Text = L"LowPass Filter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(128, 510);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(160, 32);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(540, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(407, 410);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(993, 570);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

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
		BitmapData^ bd_ori = output->LockBits(r_LPF, ImageLockMode::ReadWrite, output->PixelFormat);
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
		output->UnlockBits(bd_ori);
		LPF->UnlockBits(bd_LPF);
		//將影像顯示在pictureBox
		pictureBox2->Image = LPF;
	}


};
}
