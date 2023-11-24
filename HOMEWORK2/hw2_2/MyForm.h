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

	private:
		//定義影像類別(點陣圖(.bmp)，無壓縮，資訊較多)
		Bitmap^ ori_image;





	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Button^ button4;
		   Bitmap^ output;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
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
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(12, 46);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(616, 531);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(248, 583);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(132, 56);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"Origin";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->Location = System::Drawing::Point(746, 52);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(616, 531);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox4->TabIndex = 8;
			   this->pictureBox4->TabStop = false;
			   // 
			   // button4
			   // 
			   this->button4->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->Location = System::Drawing::Point(984, 613);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(191, 75);
			   this->button4->TabIndex = 10;
			   this->button4->Text = L"Local Equalization";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // trackBar1
			   // 
			   this->trackBar1->LargeChange = 4;
			   this->trackBar1->Location = System::Drawing::Point(103, 645);
			   this->trackBar1->Maximum = 25;
			   this->trackBar1->Minimum = 7;
			   this->trackBar1->Name = L"trackBar1";
			   this->trackBar1->Size = System::Drawing::Size(424, 56);
			   this->trackBar1->SmallChange = 4;
			   this->trackBar1->TabIndex = 19;
			   this->trackBar1->Value = 7;
			   this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			   this->label1->Location = System::Drawing::Point(112, 704);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(21, 23);
			   this->label1->TabIndex = 12;
			   this->label1->Text = L"7";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Century", 12));
			   this->label2->Location = System::Drawing::Point(190, 704);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(32, 23);
			   this->label2->TabIndex = 20;
			   this->label2->Text = L"11";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Century", 12));
			   this->label3->Location = System::Drawing::Point(279, 704);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(32, 23);
			   this->label3->TabIndex = 21;
			   this->label3->Text = L"15";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Century", 12));
			   this->label4->Location = System::Drawing::Point(495, 704);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(32, 23);
			   this->label4->TabIndex = 22;
			   this->label4->Text = L"25";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1432, 781);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->trackBar1);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->pictureBox4);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->pictureBox1);
			   this->Name = L"MyForm";
			   this->Text = L"Homework 2-2";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

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

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int k = static_cast<int>(trackBar1->Value);

		
		Bitmap^ he_out = gcnew Bitmap(output->Width, output->Height, output->PixelFormat);

		Rectangle r_ori = Rectangle(0, 0, output->Width, output->Height);
		Rectangle r_he = Rectangle(0, 0, he_out->Width, he_out->Height);

		BitmapData^ bd_ori = output->LockBits(r_ori, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_he = he_out->LockBits(r_he, ImageLockMode::ReadWrite, he_out->PixelFormat);
		
		int offset = k / 2;
		
		int skip = bd_he->Stride - he_out->Width * 3;
		
		_for2(py, he_out->Height) {
			_for2(px, he_out->Width) {
				Byte* ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
				Byte* h1_ptr = (Byte*)((Void*)bd_he->Scan0);
				int r[256] = { 0 };
				int s[256] = { 0 };
				int pixelcount = 0;
				int pixel;
				double d_pixel;
				_for3(y, py - offset, py + offset + 1) {
					if (y < 0 || y >= he_out->Height) {
						continue;
					}
					_for3(x, px - offset, px + offset + 1) {
						if ( x < 0 || x >= he_out->Width) {
							continue;
						}
						ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
						ori_ptr += y * bd_ori->Stride + x * 3;
						d_pixel = ori_ptr[0] * 0.114 + ori_ptr[1] * 0.587 + ori_ptr[2] * 0.299;
						pixel = (int)d_pixel;
						r[pixel] += 1;
						pixelcount += 1;
					}
					
					//ori_ptr += skip;
				}
				
				int total = 0;
				if (pixelcount == 0) {
					cout << "error" << ":" << py << ", " << py << "\n";
					system("pause");
					exit(1);
				}
				_for2(y, 256) {
					total += r[y];
					s[y] = (total * 255) / pixelcount;
				}
				ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
				h1_ptr = (Byte*)((Void*)bd_he->Scan0);

				ori_ptr += py * bd_ori->Stride + px * 3;
				h1_ptr += py * bd_he->Stride + px * 3;
				pixel = s[ori_ptr[0]];
				_for2(s, 3) {
					h1_ptr[s] = (Byte)(pixel);
				}
			}
		}
		
		output->UnlockBits(bd_ori);
		he_out->UnlockBits(bd_he);
		//顯示output於pictureBox1
		pictureBox4->Image = he_out;
	}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
}
};
}
