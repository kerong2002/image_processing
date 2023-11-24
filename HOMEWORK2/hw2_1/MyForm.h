#pragma once
#include <iostream>
#define luminance 70
#define max(a, b) ((a >= b) ? a : b)
#define min(a, b) ((a <= b) ? a : b)
#define _for3(x, start, end) for(int x = start; x < end; ++x)
#define _for2(x, end) for (int x = 0; x < end; ++x) 

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
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Button^ button2;
	private:
		//定義影像類別(點陣圖(.bmp)，無壓縮，資訊較多)
		Bitmap^ ori_image;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
		   Bitmap^ output;
	private: System::Windows::Forms::Button^ button5;
		   Bitmap^ hs_out;

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
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(12, 59);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(357, 374);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(110, 455);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(132, 56);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"Origin";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(833, 418);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(132, 56);
			   this->button2->TabIndex = 2;
			   this->button2->Text = L"Stretch";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Location = System::Drawing::Point(743, 75);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(335, 337);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 3;
			   this->pictureBox2->TabStop = false;
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->Location = System::Drawing::Point(398, 75);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(323, 337);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox3->TabIndex = 7;
			   this->pictureBox3->TabStop = false;
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->Location = System::Drawing::Point(1096, 75);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(328, 337);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox4->TabIndex = 8;
			   this->pictureBox4->TabStop = false;
			   // 
			   // button3
			   // 
			   this->button3->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button3->Location = System::Drawing::Point(417, 434);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(132, 56);
			   this->button3->TabIndex = 9;
			   this->button3->Text = L"Shrink";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->Location = System::Drawing::Point(1178, 418);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(154, 56);
			   this->button4->TabIndex = 10;
			   this->button4->Text = L"Equalization";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button5->Location = System::Drawing::Point(576, 434);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(132, 56);
			   this->button5->TabIndex = 11;
			   this->button5->Text = L"Save";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1440, 541);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->pictureBox4);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->pictureBox1);
			   this->Name = L"MyForm";
			   this->Text = L"homework 2-1";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->FileName = "";
		//name|format
		ofd->Filter = "All Files(*.*)|*.*";
		ofd->FilterIndex = 1;
		//對話窗回應OK，或是檔名不為空值，表示有資料了
		//開始讀取影像資訊
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "") {
			//讀取影像
			ori_image = gcnew Bitmap(ofd->FileName);
			//顯示ori_image於pictureBox1
		}
		//若沒開啟影像，則離開this process
		if (ori_image == nullptr) {
			//return nothing because function System::Void 回傳Void
			return;
		}
		output = gcnew Bitmap(ori_image->Width, ori_image->Height, ori_image->PixelFormat);
		//BitmapData 需要加入 namespace
		//Lock Memory
		BitmapData^ bd_ori = ori_image->LockBits(Rectangle(0, 0, ori_image->Width, ori_image->Height), ImageLockMode::ReadWrite, ori_image->PixelFormat);
		BitmapData^ bd_output = output->LockBits(Rectangle(0, 0, output->Width, output->Height), ImageLockMode::ReadWrite, output->PixelFormat);

		//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
		int ori_byteskip = bd_ori->Stride - bd_ori->Width * 3;
		int output_byteskip = bd_output->Stride - bd_output->Width * 3;

		//設定指標再開始的位置
		Byte* ori_ptr = (Byte*)((void*)bd_ori->Scan0);
		Byte* output_ptr = (Byte*)((void*)bd_output->Scan0);

		for (int y = 0; y < bd_ori->Height; y++) {
			for (int x = 0; x < bd_ori->Width; x++) {
				int B = (int)ori_ptr[0];
				int G = (int)ori_ptr[1];
				int R = (int)ori_ptr[2];

				int gray = (R + G + B) / 3;

				//將處理完的結果放回output
				output_ptr[0] = gray;
				output_ptr[1] = gray;
				output_ptr[2] = gray;

				//跳到下一像素
				ori_ptr += 3;
				output_ptr += 3;
			}
			//捨棄非必要資訊
			ori_ptr += ori_byteskip;
			output_ptr += output_byteskip;
		}


		//Unlock Memory 以便顯示
		ori_image->UnlockBits(bd_ori);
		output->UnlockBits(bd_output);

		//顯示output於pictureBox1
		pictureBox1->Image = output;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ h1_out = gcnew Bitmap(output->Width, output->Height, output->PixelFormat);

		Rectangle r_ori = Rectangle(0, 0, output->Width, output->Height);
		Rectangle r_h1 = Rectangle(0, 0, h1_out->Width, h1_out->Height);

		BitmapData^ bd_ori = output->LockBits(r_ori, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_h1 = h1_out->LockBits(r_h1, ImageLockMode::ReadWrite, h1_out->PixelFormat);

		int skip = bd_h1->Stride - h1_out->Width * 3;
		Byte* ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		Byte* h1_ptr = (Byte*)((Void*)bd_h1->Scan0);

		int smax = 255;
		int smin = 0;
		int rmax = 0;
		int rmin = 255;
		int pixel;
		_for2(y, output->Height) {
			_for2(x, output->Width) {
				pixel = ori_ptr[0];
				rmax = max(rmax, pixel);
				rmin = min(rmin, pixel);
				ori_ptr += 3;
			}
			//ori_ptr += skip;
		}
		ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		h1_ptr = (Byte*)((Void*)bd_h1->Scan0);
		int r;
		_for2(y, h1_out->Height) {
			_for2(x, h1_out->Width) {
				r = ori_ptr[0];
				pixel = ((r - rmin) * (smax - smin)) / (rmax - rmin) + smin;
				_for2(s, 3) {
					h1_ptr[s] = (Byte)(pixel);
				}
				h1_ptr += 3;
				ori_ptr += 3;
			}
		}
		output->UnlockBits(bd_ori);
		h1_out->UnlockBits(bd_h1);
		//顯示output於pictureBox1
		pictureBox2->Image = h1_out;
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		hs_out = gcnew Bitmap(output->Width, output->Height, output->PixelFormat);
		//shrink
		Rectangle r_ori = Rectangle(0, 0, output->Width, output->Height);
		Rectangle r_hs = Rectangle(0, 0, hs_out->Width, hs_out->Height);

		BitmapData^ bd_ori = output->LockBits(r_ori, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_hs = hs_out->LockBits(r_hs, ImageLockMode::ReadWrite, hs_out->PixelFormat);

		int smax = 150;
		int smin = 100;
		int rmax = 0;
		int rmin = 255;

		int pixel;
		double d_pixel;

		Byte* ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		Byte* hs_ptr = (Byte*)((Void*)bd_hs->Scan0);
		_for2(y, hs_out->Height) {
			_for2(x, hs_out->Width) {
				d_pixel = ori_ptr[0] * 0.114 + ori_ptr[1] * 0.587 + ori_ptr[2] * 0.299;
				pixel = d_pixel;
				if (pixel > rmax) {
					rmax = pixel;
				}
				if (pixel <= rmin) {
					rmin = pixel;
				}
				ori_ptr += 3;
			}
		}
		ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		_for2(y, hs_out->Height) {
			_for2(x, hs_out->Width) {
				int r = ori_ptr[0];
				int pixel = ((smax - smin) * (r - rmin)) / (rmax - rmin) + smin;
				_for2(s, 3) {
					hs_ptr[s] = (Byte)(pixel);
				}
				hs_ptr += 3;
				ori_ptr += 3;
			}
		}
		output->UnlockBits(bd_ori);
		hs_out->UnlockBits(bd_hs);
		pictureBox3->Image = hs_out;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ he_out = gcnew Bitmap(output->Width, output->Height, output->PixelFormat);

		Rectangle r_ori = Rectangle(0, 0, output->Width, output->Height);
		Rectangle r_he = Rectangle(0, 0, he_out->Width, he_out->Height);

		BitmapData^ bd_ori = output->LockBits(r_ori, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_he = he_out->LockBits(r_he, ImageLockMode::ReadWrite, he_out->PixelFormat);

		int skip = bd_he->Stride - he_out->Width * 3;
		Byte* ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		Byte* h1_ptr = (Byte*)((Void*)bd_he->Scan0);
		int r[256] = { 0 };
		int s[256] = { 0 };
		int pixelcount = 0;
		int pixel;
		double d_pixel;
		_for2(y, output->Height) {
			_for2(x, output->Width) {
				d_pixel = ori_ptr[0] * 0.114 + ori_ptr[1] * 0.587 + ori_ptr[2] * 0.299;
				pixel = (int)d_pixel;
				r[pixel] += 1;
				pixelcount += 1;
				ori_ptr += 3;
			}
			//ori_ptr += skip;
		}
		ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		h1_ptr = (Byte*)((Void*)bd_he->Scan0);
		int total = 0;
		_for2(y, 256) {
			total += r[y];
			s[y] = (total * 255) / pixelcount;
		}

		_for2(y, he_out->Height) {
			_for2(x, he_out->Width) {
				pixel = s[ori_ptr[0]];
				_for2(s, 3) {
					h1_ptr[s] = (Byte)(pixel);
				}
				h1_ptr += 3;
				ori_ptr += 3;
			}
		}
		output->UnlockBits(bd_ori);
		he_out->UnlockBits(bd_he);
		//顯示output於pictureBox1
		pictureBox4->Image = he_out;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		hs_out->Save("test.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
};
}
