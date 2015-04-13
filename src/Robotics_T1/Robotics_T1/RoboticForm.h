#pragma once
#include "Main32.h"
#include <iostream>

namespace Robotics_T1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for RoboticForm
	/// </summary>
	public ref class RoboticForm : public System::Windows::Forms::Form
	{
	public:
		TCommPort* Cp = NULL;

		RoboticForm(void)
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
		~RoboticForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1160, 537);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox18);
			this->tabPage1->Controls->Add(this->textBox17);
			this->tabPage1->Controls->Add(this->textBox16);
			this->tabPage1->Controls->Add(this->textBox15);
			this->tabPage1->Controls->Add(this->textBox14);
			this->tabPage1->Controls->Add(this->textBox13);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->textBox12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1152, 511);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Robot Controls";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(330, 139);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 80);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Calibrar";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &RoboticForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(168, 192);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(156, 27);
			this->button10->TabIndex = 23;
			this->button10->Text = L"Clear Speed";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &RoboticForm::button10_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(168, 166);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(75, 20);
			this->textBox12->TabIndex = 22;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(168, 141);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(75, 20);
			this->textBox11->TabIndex = 21;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(168, 114);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(75, 20);
			this->textBox10->TabIndex = 20;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(168, 88);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(75, 20);
			this->textBox9->TabIndex = 19;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(168, 62);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(75, 20);
			this->textBox8->TabIndex = 18;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(330, 36);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 97);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Dance";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(168, 36);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(75, 20);
			this->textBox7->TabIndex = 16;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(168, 10);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(57, 17);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Speed";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(7, 192);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(155, 27);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Multiple Axis";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &RoboticForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(86, 166);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(76, 20);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Axis6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &RoboticForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(86, 140);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(76, 20);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Axis5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &RoboticForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(87, 114);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 20);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Axis4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &RoboticForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(87, 87);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 21);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Axis3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &RoboticForm::button4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(7, 166);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(74, 20);
			this->textBox6->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(7, 140);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(74, 20);
			this->textBox5->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(7, 114);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(74, 20);
			this->textBox4->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(7, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(74, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(87, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 20);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Axis2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RoboticForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(7, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(74, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(87, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 20);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Axis 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RoboticForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RoboticForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1152, 511);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(249, 36);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(75, 20);
			this->textBox13->TabIndex = 25;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(249, 62);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(75, 20);
			this->textBox14->TabIndex = 26;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(249, 88);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(75, 20);
			this->textBox15->TabIndex = 27;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(249, 115);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(75, 20);
			this->textBox16->TabIndex = 28;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(249, 141);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(75, 20);
			this->textBox17->TabIndex = 29;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(249, 167);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(75, 20);
			this->textBox18->TabIndex = 30;
			// 
			// RoboticForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1184, 561);
			this->Controls->Add(this->tabControl1);
			this->MaximumSize = System::Drawing::Size(1200, 600);
			this->MinimumSize = System::Drawing::Size(1200, 600);
			this->Name = L"RoboticForm";
			this->Text = L"RoboticForm";
			this->Load += gcnew System::EventHandler(this, &RoboticForm::RoboticForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		void motor_status(){
			char steparray[6];
			all_motor_status(Cp,steparray);
			textBox13->Text = Convert::ToString((unsigned char)steparray[0]);
			textBox14->Text = Convert::ToString((unsigned char)steparray[1]);
			textBox15->Text = Convert::ToString((unsigned char)steparray[2]);
			textBox16->Text = Convert::ToString((unsigned char)steparray[3]);
			textBox17->Text = Convert::ToString((unsigned char)steparray[4]);
			textBox18->Text = Convert::ToString((unsigned char)steparray[5]);
		}

	private: System::Void RoboticForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
		Cp = initialize_robot();
		if (Cp == NULL){
			MessageBox::Show("Not Connected!");
		}
		else
		{
			MessageBox::Show("Connected!");
		}

	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis1 = Convert::ToInt32(textBox1->Text), steps;
		if (checkBox1->Checked == TRUE){
			int speed = Convert::ToInt32(textBox7->Text);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			steps = degrees_to_steps(axis1, 1);
			move_one_axis_speed(Cp, 1, steps, speed);
			textBox1->Clear();
		}
		else
		{
			steps = degrees_to_steps(axis1, 1);
			move_one_axis(Cp, 1, steps);
			textBox1->Clear();
		}

	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis2 = Convert::ToInt32(textBox2->Text), steps = 0;
		steps = degrees_to_steps(axis2, 2);
		move_one_axis(Cp, 2, steps);
		textBox2->Clear();
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis3 = Convert::ToInt32(textBox3->Text), steps = 0;
		steps = degrees_to_steps(axis3, 3);
		move_one_axis(Cp, 3, steps);
		textBox3->Clear();
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis4 = Convert::ToInt32(textBox4->Text), steps = 0;
		steps = degrees_to_steps(axis4, 4);
		move_one_axis(Cp, 4, steps);
		textBox4->Clear();
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis5 = Convert::ToInt32(textBox5->Text), steps = 0;
		steps = degrees_to_steps(axis5, 3);
		move_one_axis(Cp, 5, steps);
		textBox5->Clear();
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis6 = Convert::ToInt32(textBox6->Text), steps = 0;
		steps = mm_to_steps(axis6);
		move_one_axis(Cp, 6, steps);
		textBox6->Clear();
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		int steparray[6] = { Convert::ToInt32(textBox1->Text)
			, Convert::ToInt32(textBox2->Text)
			, Convert::ToInt32(textBox3->Text)
			, Convert::ToInt32(textBox4->Text)
			, Convert::ToInt32(textBox5->Text)
			, Convert::ToInt32(textBox6->Text) };

		for (int i = 0; i < 5; i++)
		{
			steparray[i] = degrees_to_steps(steparray[i], i + 1);
		}
		steparray[5] = mm_to_steps(steparray[5]);

		if (checkBox1->Checked == FALSE){
			move_multiple_axis(Cp, steparray);
		}
		else{
			int speedarray[6] = { Convert::ToInt32(textBox7->Text)
				, Convert::ToInt32(textBox8->Text)
				, Convert::ToInt32(textBox9->Text)
				, Convert::ToInt32(textBox10->Text)
				, Convert::ToInt32(textBox11->Text)
				, Convert::ToInt32(textBox12->Text) };

			move_multiple_axis_speed(Cp, steparray, speedarray);
		}

		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
	}

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox7->Clear();
		textBox8->Clear();
		textBox9->Clear();
		textBox10->Clear();
		textBox11->Clear();
		textBox12->Clear();

		checkBox1->Checked = FALSE;
	}

	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		char steparray[6];
		all_motor_status(Cp, steparray);

		textBox1->Text = Convert::ToString((unsigned char)steparray[0]);
		textBox2->Text = Convert::ToString((unsigned char)steparray[1]);
		textBox3->Text = Convert::ToString((unsigned char)steparray[2]);
		textBox4->Text = Convert::ToString((unsigned char)steparray[3]);
		textBox5->Text = Convert::ToString((unsigned char)steparray[4]);
		textBox6->Text = Convert::ToString((unsigned char)steparray[5]);

		motor_status();
	}
	};

}
