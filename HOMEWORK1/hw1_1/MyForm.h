#pragma once
#include <iostream>			// 使用到輸入輸出函式庫
#include <string>			// 字串處理函式庫
		
namespace hw1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
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
	protected:
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private:
		//定義影像類別(點陣圖(.bmp)，無壓縮，資訊較多)
		Bitmap^ p1_image;
		Bitmap^ p2_image;
		Bitmap^ p1_gray;
		Bitmap^ p2_gray;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;



	private: System::Windows::Forms::PictureBox^ pictureBox3;


		   

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(58, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load Person1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(349, 44);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Load Person2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(14, 101);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(630, 44);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 50);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Convert";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(303, 101);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(250, 250);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(579, 101);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(250, 250);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(14, 374);
			this->trackBar1->Maximum = 9;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(250, 56);
			this->trackBar1->TabIndex = 14;
			this->trackBar1->Value = 5;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(303, 375);
			this->trackBar2->Maximum = 9;
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(250, 56);
			this->trackBar2->TabIndex = 15;
			this->trackBar2->Value = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(591, 393);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 33);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Please load image!";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label2->Location = System::Drawing::Point(16, 407);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 17);
			this->label2->TabIndex = 17;
			this->label2->Text = L"0.1";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_2);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label6->Location = System::Drawing::Point(44, 407);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 17);
			this->label6->TabIndex = 21;
			this->label6->Text = L"0.2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label3->Location = System::Drawing::Point(99, 407);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 17);
			this->label3->TabIndex = 23;
			this->label3->Text = L"0.4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label4->Location = System::Drawing::Point(72, 407);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 17);
			this->label4->TabIndex = 22;
			this->label4->Text = L"0.3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label5->Location = System::Drawing::Point(207, 407);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 17);
			this->label5->TabIndex = 27;
			this->label5->Text = L"0.8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label7->Location = System::Drawing::Point(180, 407);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 17);
			this->label7->TabIndex = 26;
			this->label7->Text = L"0.7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label8->Location = System::Drawing::Point(153, 407);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 17);
			this->label8->TabIndex = 25;
			this->label8->Text = L"0.6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label9->Location = System::Drawing::Point(125, 407);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 17);
			this->label9->TabIndex = 24;
			this->label9->Text = L"0.5";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label10->Location = System::Drawing::Point(235, 407);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"0.9";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label11->Location = System::Drawing::Point(525, 408);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 17);
			this->label11->TabIndex = 37;
			this->label11->Text = L"0.9";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label12->Location = System::Drawing::Point(498, 408);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 17);
			this->label12->TabIndex = 36;
			this->label12->Text = L"0.8";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label13->Location = System::Drawing::Point(471, 408);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 17);
			this->label13->TabIndex = 35;
			this->label13->Text = L"0.7";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label14->Location = System::Drawing::Point(444, 408);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 17);
			this->label14->TabIndex = 34;
			this->label14->Text = L"0.6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label15->Location = System::Drawing::Point(416, 408);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(28, 17);
			this->label15->TabIndex = 33;
			this->label15->Text = L"0.5";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label16->Location = System::Drawing::Point(389, 408);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 17);
			this->label16->TabIndex = 32;
			this->label16->Text = L"0.4";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label17->Location = System::Drawing::Point(363, 408);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 17);
			this->label17->TabIndex = 31;
			this->label17->Text = L"0.3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label18->Location = System::Drawing::Point(334, 408);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 17);
			this->label18->TabIndex = 30;
			this->label18->Text = L"0.2";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century", 8));
			this->label19->Location = System::Drawing::Point(307, 408);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(28, 17);
			this->label19->TabIndex = 29;
			this->label19->Text = L"0.1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century", 20));
			this->label20->Location = System::Drawing::Point(122, 429);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(47, 40);
			this->label20->TabIndex = 38;
			this->label20->Text = L"m";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century", 20));
			this->label21->Location = System::Drawing::Point(412, 429);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(38, 40);
			this->label21->TabIndex = 39;
			this->label21->Text = L"n";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 470);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->Name = L"MyForm";
			this->Text = L"Homework 1 - (1)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//	針對第一張圖片轉灰階
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ ofd = gcnew OpenFileDialog();		// 開啟檔案視窗
		ofd->FileName = "";									// 檔名稱獲取

		ofd->Filter = "All Files(*.*)|*.*";					// 濾掉格式
		ofd->FilterIndex = 1;

		//對話窗回應OK，或是檔名不為空值，表示有資料了
		//開始讀取影像資訊
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "") {
			p1_image = gcnew Bitmap(ofd->FileName);			// 讀取影像
		}
		else {
			return;											// 讀不到影像
		}
		p1_gray = gcnew Bitmap(p1_image->Width, p1_image->Height, p1_image->PixelFormat);
		//BitmapData 需要加入 namespace
		//Lock Memory
		BitmapData^ p1_bd_ori = p1_image->LockBits(Rectangle(0, 0, p1_image->Width, p1_image->Height), ImageLockMode::ReadWrite, p1_image->PixelFormat);
		BitmapData^ p1_bd_output = p1_gray->LockBits(Rectangle(0, 0, p1_gray->Width, p1_gray->Height), ImageLockMode::ReadWrite, p1_gray->PixelFormat);

		//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
		int p1_ori_byteskip = p1_bd_ori->Stride - p1_bd_ori->Width * 3;
		int p1_output_byteskip = p1_bd_output->Stride - p1_bd_output->Width * 3;

		//設定指標再開始的位置
		Byte* p1_ori_ptr = (Byte*)((void*)p1_bd_ori->Scan0);
		Byte* p1_output_ptr = (Byte*)((void*)p1_bd_output->Scan0);

		// 第一張圖片灰階處理
		for (int y = 0; y < p1_bd_ori->Height; y++) {
			for (int x = 0; x < p1_bd_ori->Width; x++) {
				int B = (int)p1_ori_ptr[0];
				int G = (int)p1_ori_ptr[1];
				int R = (int)p1_ori_ptr[2];

				int gray = (R + G + B) / 3;

				//將處理完的結果放回output
				p1_output_ptr[0] = gray;
				p1_output_ptr[1] = gray;
				p1_output_ptr[2] = gray;

				//跳到下一像素
				p1_ori_ptr += 3;
				p1_output_ptr += 3;
			}
			//捨棄非必要資訊
			p1_ori_ptr += p1_ori_byteskip;
			p1_output_ptr += p1_output_byteskip;
		}

		//Unlock Memory 以便顯示
		p1_image->UnlockBits(p1_bd_ori);
		p1_gray->UnlockBits(p1_bd_output);
		pictureBox1->Image = p1_gray;
	}
	
	//	針對第二張圖片轉灰階
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->FileName = "";

		ofd->Filter = "All Files(*.*)|*.*";
		ofd->FilterIndex = 1;

		//對話窗回應OK，或是檔名不為空值，表示有資料了
		//開始讀取影像資訊
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "") {
			p2_image = gcnew Bitmap(ofd->FileName);		// 讀取影像
		}
		else {
			return;										// 讀不到影像
		}
		
		p2_gray = gcnew Bitmap(p2_image->Width, p2_image->Height, p2_image->PixelFormat);
		//BitmapData 需要加入 namespace
		//Lock Memory
		BitmapData^ p2_bd_ori = p2_image->LockBits(Rectangle(0, 0, p2_image->Width, p2_image->Height), ImageLockMode::ReadWrite, p2_image->PixelFormat);
		BitmapData^ p2_bd_output = p2_gray->LockBits(Rectangle(0, 0, p2_gray->Width, p2_gray->Height), ImageLockMode::ReadWrite, p2_gray->PixelFormat);

		//因為BitmapData提供 Integer Pointer，可能會有些不必要的影像資訊
		int p2_ori_byteskip = p2_bd_ori->Stride - p2_bd_ori->Width * 3;
		int p2_output_byteskip = p2_bd_output->Stride - p2_bd_output->Width * 3;

		//設定指標再開始的位置
		Byte* p2_ori_ptr = (Byte*)((void*)p2_bd_ori->Scan0);
		Byte* p2_output_ptr = (Byte*)((void*)p2_bd_output->Scan0);

		// 針對第二張圖片轉灰階
		for (int y = 0; y < p2_bd_ori->Height; y++) {
			for (int x = 0; x < p2_bd_ori->Width; x++) {
				int B = (int)p2_ori_ptr[0];
				int G = (int)p2_ori_ptr[1];
				int R = (int)p2_ori_ptr[2];

				int gray = (R + G + B) / 3;

				//將處理完的結果放回output
				p2_output_ptr[0] = gray;
				p2_output_ptr[1] = gray;
				p2_output_ptr[2] = gray;

				//跳到下一像素
				p2_ori_ptr += 3;
				p2_output_ptr += 3;
			}
			//捨棄非必要資訊
			p2_ori_ptr += p2_ori_byteskip;
			p2_output_ptr += p2_output_byteskip;
		}


		//Unlock Memory 以便顯示
		p2_image->UnlockBits(p2_bd_ori);
		p2_gray->UnlockBits(p2_bd_output);
		pictureBox2->Image = p2_gray;
	}

	// 輸出m * p1 + n * p2 結果
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//確保兩分資料都有讀到
		if (p1_image == nullptr || p2_image == nullptr) {
			int loss = 0;
			if (p1_image == nullptr) {
				loss += 1;
			}
			if (p2_image == nullptr) {
				loss += 1;
			}

			// 缺少 n 個檔案
			String^ result = "You loss " + loss + " image data!";
			label1->Text = result;
			std::cout << "p1 or p2 image not load!\n";
			return;
		}
	

		// m, n range(1~9) so we need to multiply 0.1 to set range(0.1~0.9)
		double m = static_cast<double> (trackBar1->Value) * 0.1;
		double n = static_cast<double> (trackBar2->Value) * 0.1;

		// 確保 m + n  <= 1
		if (m + n != 1) {
			label1->Text = "m + n is not equl than 1!";
			return;	
		}
		
		label1->Text = "F =  " + m + " * I1  +  " + n + " * I2";

		Bitmap^ ans = gcnew Bitmap(p1_gray->Width, p1_gray->Height, p1_gray->PixelFormat);

		BitmapData^ p1_data = p1_gray->LockBits(Rectangle(0, 0, p1_gray->Width, p1_gray->Height), ImageLockMode::ReadWrite, p1_gray->PixelFormat);
		BitmapData^ p2_data = p2_gray->LockBits(Rectangle(0, 0, p2_gray->Width, p2_gray->Height), ImageLockMode::ReadWrite, p2_gray->PixelFormat);
		BitmapData^ ans_data = ans->LockBits(Rectangle(0, 0, ans->Width, ans->Height), ImageLockMode::ReadWrite, ans->PixelFormat);

		Byte* p1_ptr = (Byte*)((void*)p1_data->Scan0);
		Byte* p2_ptr = (Byte*)((void*)p2_data->Scan0);
		Byte* ans_ptr = (Byte*)((void*)ans_data->Scan0);

		for (int y = 0; y < p1_gray->Height; ++y) {
			for (int x = 0; x < p1_gray->Width; ++x) {
				for (int s = 0; s < 3; ++s) {
					ans_ptr[s] = int(m * p1_ptr[s] + n * p2_ptr[s]);
				}
				p1_ptr += 3;
				p2_ptr += 3;
				ans_ptr += 3;
			}
		}
		ans->UnlockBits(ans_data);
		p1_gray->UnlockBits(p1_data);
		p2_gray->UnlockBits(p2_data);
		pictureBox3->Image = ans;

	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
			}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}

