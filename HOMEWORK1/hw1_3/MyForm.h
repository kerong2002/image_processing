#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#define _for3(x, start, end) for(int x = start; x < end; ++x)
#define _for2(x, end) for (int x = 0; x < end; ++x) 
namespace hw12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Design;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container^ components;

	private:
		//定義影像類別(點陣圖(.bmp)，無壓縮，資訊較多)
		Bitmap^ ori_image;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
		   Bitmap^ output;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		   /// 這個方法的內容。
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(97, 407);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(148, 63);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Load image";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(30, 62);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(300, 300);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			   // 
			   // trackBar1
			   // 
			   this->trackBar1->LargeChange = 4;
			   this->trackBar1->Location = System::Drawing::Point(444, 407);
			   this->trackBar1->Minimum = 2;
			   this->trackBar1->Name = L"trackBar1";
			   this->trackBar1->Size = System::Drawing::Size(376, 56);
			   this->trackBar1->SmallChange = 4;
			   this->trackBar1->TabIndex = 3;
			   this->trackBar1->TickFrequency = 4;
			   this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			   this->trackBar1->Value = 6;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(452, 447);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(21, 23);
			   this->label1->TabIndex = 4;
			   this->label1->Text = L"2";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(622, 447);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(21, 23);
			   this->label2->TabIndex = 5;
			   this->label2->Text = L"6";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(788, 447);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(32, 23);
			   this->label3->TabIndex = 6;
			   this->label3->Text = L"10";
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->Location = System::Drawing::Point(747, 62);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(300, 300);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   this->pictureBox3->TabIndex = 7;
			   this->pictureBox3->TabStop = false;
			   this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(850, 407);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(148, 63);
			   this->button2->TabIndex = 8;
			   this->button2->Text = L"Convert";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Location = System::Drawing::Point(380, 62);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(300, 300);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   this->pictureBox2->TabIndex = 9;
			   this->pictureBox2->TabStop = false;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Century", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(91, 26);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(186, 33);
			   this->label4->TabIndex = 10;
			   this->label4->Text = L"Origin image";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Century", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(450, 26);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(164, 33);
			   this->label5->TabIndex = 11;
			   this->label5->Text = L"First-Order";
			   this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Century", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(834, 26);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(121, 33);
			   this->label6->TabIndex = 12;
			   this->label6->Text = L"Bilinear";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1098, 525);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->trackBar1);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->button1);
			   this->Name = L"MyForm";
			   this->Text = L"homework1_3";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//開啟檔案對話窗 記得「^」
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
		_for2(y, bd_ori->Height) {
			_for2(x, bd_ori->Width) {
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
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int k = static_cast<int>(trackBar1->Value);
		float f_k = static_cast<float>(k);

		Bitmap^ first_order = gcnew Bitmap(output->Width / k, output->Height / k, output->PixelFormat);

		Rectangle R_ori = Rectangle(0, 0, output->Width, output->Height);
		Rectangle R_first_order = Rectangle(0, 0, first_order->Width, first_order->Height);

		BitmapData^ bd_ori = output->LockBits(R_ori, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_first_order = first_order->LockBits(R_first_order, ImageLockMode::ReadWrite, first_order->PixelFormat);

		Byte* ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		Byte* first_order_ptr = (Byte*)((Void*)bd_first_order->Scan0);

		int new_y, new_x;
		float r;
		//new_ptr = {old_ptr[n/k] * (k - r) + old_ptr[n/k + 1] * r} / k
		_for2(y, first_order->Height) {
			_for2(x, first_order->Width) {
				new_x = x * k;
				new_y = y * k;
				r = (float)fmod(x, f_k);
				if (new_y >= 0 && y < bd_ori->Height && new_x >= 0 && new_x < bd_ori->Width - 1) {
					ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
					_for2(s, 3) {
						int n = new_x * 3 + new_y * bd_ori->Stride + s;
						double add = (*(ori_ptr + n)) * (k - r) + (*(ori_ptr + 3 + n)) * r;
						first_order_ptr[s] = (Byte) static_cast<int> (add / f_k);
					}
				}
				else {
					_for2(s, 3) {
						first_order_ptr[s] = (Byte)255;
					}
				}
				first_order_ptr += 3;
			}
			first_order_ptr += bd_first_order->Stride - first_order->Width * 3;
		}

		first_order_ptr = (Byte*)((Void*)bd_first_order->Scan0);
		_for2(y, first_order->Height) {
			_for2(x, first_order->Width) {
				new_x = x * k;
				new_y = y * k;
				r = (float)fmod(y, f_k);
				if (new_y >= 0 && new_y < bd_ori->Height && new_x >=  0 && new_x < bd_ori->Width - 1) {
					ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
					_for2(s, 3) {
						int n = new_x * 3 + new_y * bd_ori->Stride + s;
						double add = (*(ori_ptr + n)) * (f_k - r) + (*(ori_ptr + 3 + n)) * r;
						first_order_ptr[s] = (Byte) static_cast<int> (add / f_k);
					}
				}
				else {
					_for2(s, 3) {
						first_order_ptr[s] = (Byte)255;
					}
				}
				first_order_ptr += 3;
			}
			first_order_ptr += bd_first_order->Stride - first_order->Width * 3;
		}
		output->UnlockBits(bd_ori);
		first_order->UnlockBits(bd_first_order);
		pictureBox2->Image = first_order;

		Bitmap^ bilinear = gcnew Bitmap((int)output->Width / k, (int)output->Height / k, output->PixelFormat);
		
		R_ori = Rectangle(0, 0, output->Width, output->Height);
		Rectangle R_bilinear = Rectangle(0, 0, bilinear->Width, bilinear->Height);

		bd_ori = output->LockBits(R_ori, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_bilinear = bilinear->LockBits(R_bilinear, ImageLockMode::ReadWrite, bilinear->PixelFormat);

		ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		Byte* bilinear_ptr = (Byte*)((Void*)bd_bilinear->Scan0);

		float f_x, f_y;
		int x1, y1;
		float temp[3];
		_for3(y, 0, bilinear->Height) {
			_for3(x, 0, bilinear->Width) {
				f_y = float(y * f_k);
				f_x = float(x * f_k);
				y1 = y * k;
				x1 = x * k;
				int values[4][3];
				_for2(ix, 2) {
					_for2(iy, 2) {
						ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
						if ((int)(y1 + iy) * bd_ori->Stride + (int)(x1 + ix) * 3 >= bd_ori->Stride * output->Height) {
							cout << y1 + iy <<", " << bd_ori->Stride <<", " << output->Width << ", "<< output->Height<< ", " << x1 << "," << (int)(y1 + iy) * bd_ori->Stride + (int)(x1 + ix) * 3 << "\n";
							break;
						}
						ori_ptr += (int)(y1 + iy) * bd_ori->Stride + (int)(x1 + ix) * 3;
						_for2(s, 3) {
							values[iy + ix * 2][s] = ori_ptr[s];
						}
					}
				}

				_for2(s, 3) {
					temp[s] = values[0][2 - s] * (x1 + 1 - f_x) * (y1 + 1 - f_y) +
							  values[1][2 - s] * (x1 + 1 - f_x) * (f_y - y1) +
							  values[2][2 - s] * (f_x - x1) * (y1 + 1 - f_y) +
							  values[3][2 - s] * (f_x - x1) * (f_y - y1);
				}
				bilinear_ptr = (Byte*)((Void*)bd_bilinear->Scan0);
				bilinear_ptr += static_cast<int> (y * bd_bilinear->Stride + x * 3);
				_for2(s, 3) {
					bilinear_ptr[s] = (Byte)temp[2 - s];
				}

			}
		}
		output->UnlockBits(bd_ori);
		bilinear->UnlockBits(bd_bilinear);
		pictureBox3->Image = bilinear;
		
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
