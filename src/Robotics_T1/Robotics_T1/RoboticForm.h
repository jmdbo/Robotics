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
	private: TCommPort* Cp = NULL;
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
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::TrackBar^  trackBar6;
	private: System::Windows::Forms::TrackBar^  trackBar5;
	private: System::Windows::Forms::TrackBar^  trackBar4;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::ComboBox^  speedStep6;
	private: System::Windows::Forms::ComboBox^  speedStep5;
	private: System::Windows::Forms::ComboBox^  speedStep4;
	private: System::Windows::Forms::ComboBox^  speedStep3;
	private: System::Windows::Forms::ComboBox^  speedStep2;
	private: System::Windows::Forms::ComboBox^  speedStep1;






	private: System::Windows::Forms::CheckBox^  checkBoxSpeedStep;

	private: System::Windows::Forms::Button^  buttonAxis6Step;
	private: System::Windows::Forms::Button^  buttonAxis5Step;
	private: System::Windows::Forms::Button^  buttonAxis4Step;
	private: System::Windows::Forms::Button^  buttonAxis3Step;
	private: System::Windows::Forms::Button^  buttonAxis2Step;
	private: System::Windows::Forms::Button^  buttonAxis1Step;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  buttonUpdateA5;

	private: System::Windows::Forms::Button^  buttonUpdateA4;

	private: System::Windows::Forms::Button^  buttonUpdateA3;

	private: System::Windows::Forms::Button^  buttonUpdateA2;

	private: System::Windows::Forms::Button^  buttonUpdateA1;
private: System::Windows::Forms::TextBox^  angleAxis5;


private: System::Windows::Forms::TextBox^  angleAxis4;

private: System::Windows::Forms::TextBox^  angleAxis3;

private: System::Windows::Forms::TextBox^  angleAxis2;

private: System::Windows::Forms::TextBox^  angleAxis1;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Button^  buttonUpdateAA;
private: System::Windows::Forms::TextBox^  stepAxis5;


private: System::Windows::Forms::TextBox^  stepAxis4;

private: System::Windows::Forms::TextBox^  stepAxis3;

private: System::Windows::Forms::TextBox^  stepAxis2;

private: System::Windows::Forms::TextBox^  stepAxis1;

private: System::Windows::Forms::Button^  buttonMoveAA;

private: System::Windows::Forms::TextBox^  textStepA6;

private: System::Windows::Forms::TextBox^  textStepA5;

private: System::Windows::Forms::TextBox^  textStepA4;

private: System::Windows::Forms::TextBox^  textStepA3;

private: System::Windows::Forms::TextBox^  textStepA2;

private: System::Windows::Forms::TextBox^  textStepA1;

private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  labelYaw;
private: System::Windows::Forms::Label^  labelRoll;
private: System::Windows::Forms::Label^  labelPitch;
private: System::Windows::Forms::Label^  labelZ;
private: System::Windows::Forms::Label^  labelY;
private: System::Windows::Forms::Label^  labelX;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::Button^  buttonCalibrate;
private: System::Windows::Forms::Button^  calibrateAngle;

private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Label^  labelYawAngle;

private: System::Windows::Forms::Label^  labelRollAngle;

private: System::Windows::Forms::Label^  labelPitchAngle;

private: System::Windows::Forms::Label^  labelZAngle;

private: System::Windows::Forms::Label^  labelYAngle;

private: System::Windows::Forms::Label^  labelXAngle;

private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Button^  updateAAAngle;
private: System::Windows::Forms::Button^  updateA5Angle;


private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::TextBox^  stepAngleBox5;

private: System::Windows::Forms::TextBox^  stepAngleBox4;

private: System::Windows::Forms::TextBox^  stepAngleBox3;

private: System::Windows::Forms::TextBox^  stepAngleBox2;

private: System::Windows::Forms::TextBox^  stepAngleBox1;
private: System::Windows::Forms::Button^  updateA4Angle;


private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::TextBox^  angleAngleBox5;

private: System::Windows::Forms::TextBox^  angleAngleBox4;

private: System::Windows::Forms::TextBox^  angleAngleBox3;
private: System::Windows::Forms::TextBox^  angleAngleBox2;


private: System::Windows::Forms::TextBox^  angleAngleBox1;
private: System::Windows::Forms::Button^  updateA3Angle;


private: System::Windows::Forms::Button^  updateA1Angle;
private: System::Windows::Forms::Button^  updateA2Angle;


private: System::Windows::Forms::Button^  moveAAAngle;

private: System::Windows::Forms::TextBox^  angleBox6;

private: System::Windows::Forms::TextBox^  angleBox5;

private: System::Windows::Forms::TextBox^  angleBox4;

private: System::Windows::Forms::TextBox^  angleBox3;

private: System::Windows::Forms::TextBox^  angleBox2;

private: System::Windows::Forms::TextBox^  angleBox1;
private: System::Windows::Forms::CheckBox^  checkSpeedAngle;


private: System::Windows::Forms::Button^  buttonAxis6Angular;

private: System::Windows::Forms::Button^  buttonAxis5Angular;

private: System::Windows::Forms::Button^  buttonAxis4Angular;

private: System::Windows::Forms::Button^  buttonAxis3Angular;

private: System::Windows::Forms::Button^  buttonAxis2Angular;

private: System::Windows::Forms::Button^  buttonAxis1Angular;
private: System::Windows::Forms::ComboBox^  speedBoxAngle6;



private: System::Windows::Forms::ComboBox^  speedBoxAngle5;

private: System::Windows::Forms::ComboBox^  speedBoxAngle4;

private: System::Windows::Forms::ComboBox^  speedBoxAngle3;

private: System::Windows::Forms::ComboBox^  speedBoxAngle2;

private: System::Windows::Forms::ComboBox^  speedBoxAngle1;

private: System::Windows::Forms::TrackBar^  angleBar6;

private: System::Windows::Forms::TrackBar^  angleBar5;

private: System::Windows::Forms::TrackBar^  angleBar4;

private: System::Windows::Forms::TrackBar^  angleBar3;

private: System::Windows::Forms::TrackBar^  angleBar2;

private: System::Windows::Forms::TrackBar^  angleBar1;
private: System::Windows::Forms::TabPage^  tabPage4;


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
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
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
			this->buttonCalibrate = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->labelYaw = (gcnew System::Windows::Forms::Label());
			this->labelRoll = (gcnew System::Windows::Forms::Label());
			this->labelPitch = (gcnew System::Windows::Forms::Label());
			this->labelZ = (gcnew System::Windows::Forms::Label());
			this->labelY = (gcnew System::Windows::Forms::Label());
			this->labelX = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonUpdateAA = (gcnew System::Windows::Forms::Button());
			this->buttonUpdateA5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->stepAxis5 = (gcnew System::Windows::Forms::TextBox());
			this->stepAxis4 = (gcnew System::Windows::Forms::TextBox());
			this->stepAxis3 = (gcnew System::Windows::Forms::TextBox());
			this->stepAxis2 = (gcnew System::Windows::Forms::TextBox());
			this->stepAxis1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonUpdateA4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->angleAxis5 = (gcnew System::Windows::Forms::TextBox());
			this->angleAxis4 = (gcnew System::Windows::Forms::TextBox());
			this->angleAxis3 = (gcnew System::Windows::Forms::TextBox());
			this->angleAxis2 = (gcnew System::Windows::Forms::TextBox());
			this->angleAxis1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonUpdateA3 = (gcnew System::Windows::Forms::Button());
			this->buttonUpdateA1 = (gcnew System::Windows::Forms::Button());
			this->buttonUpdateA2 = (gcnew System::Windows::Forms::Button());
			this->buttonMoveAA = (gcnew System::Windows::Forms::Button());
			this->textStepA6 = (gcnew System::Windows::Forms::TextBox());
			this->textStepA5 = (gcnew System::Windows::Forms::TextBox());
			this->textStepA4 = (gcnew System::Windows::Forms::TextBox());
			this->textStepA3 = (gcnew System::Windows::Forms::TextBox());
			this->textStepA2 = (gcnew System::Windows::Forms::TextBox());
			this->textStepA1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxSpeedStep = (gcnew System::Windows::Forms::CheckBox());
			this->buttonAxis6Step = (gcnew System::Windows::Forms::Button());
			this->buttonAxis5Step = (gcnew System::Windows::Forms::Button());
			this->buttonAxis4Step = (gcnew System::Windows::Forms::Button());
			this->buttonAxis3Step = (gcnew System::Windows::Forms::Button());
			this->buttonAxis2Step = (gcnew System::Windows::Forms::Button());
			this->buttonAxis1Step = (gcnew System::Windows::Forms::Button());
			this->speedStep6 = (gcnew System::Windows::Forms::ComboBox());
			this->speedStep5 = (gcnew System::Windows::Forms::ComboBox());
			this->speedStep4 = (gcnew System::Windows::Forms::ComboBox());
			this->speedStep3 = (gcnew System::Windows::Forms::ComboBox());
			this->speedStep2 = (gcnew System::Windows::Forms::ComboBox());
			this->speedStep1 = (gcnew System::Windows::Forms::ComboBox());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->calibrateAngle = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->labelYawAngle = (gcnew System::Windows::Forms::Label());
			this->labelRollAngle = (gcnew System::Windows::Forms::Label());
			this->labelPitchAngle = (gcnew System::Windows::Forms::Label());
			this->labelZAngle = (gcnew System::Windows::Forms::Label());
			this->labelYAngle = (gcnew System::Windows::Forms::Label());
			this->labelXAngle = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->updateAAAngle = (gcnew System::Windows::Forms::Button());
			this->updateA5Angle = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->stepAngleBox5 = (gcnew System::Windows::Forms::TextBox());
			this->stepAngleBox4 = (gcnew System::Windows::Forms::TextBox());
			this->stepAngleBox3 = (gcnew System::Windows::Forms::TextBox());
			this->stepAngleBox2 = (gcnew System::Windows::Forms::TextBox());
			this->stepAngleBox1 = (gcnew System::Windows::Forms::TextBox());
			this->updateA4Angle = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->angleAngleBox5 = (gcnew System::Windows::Forms::TextBox());
			this->angleAngleBox4 = (gcnew System::Windows::Forms::TextBox());
			this->angleAngleBox3 = (gcnew System::Windows::Forms::TextBox());
			this->angleAngleBox2 = (gcnew System::Windows::Forms::TextBox());
			this->angleAngleBox1 = (gcnew System::Windows::Forms::TextBox());
			this->updateA3Angle = (gcnew System::Windows::Forms::Button());
			this->updateA1Angle = (gcnew System::Windows::Forms::Button());
			this->updateA2Angle = (gcnew System::Windows::Forms::Button());
			this->moveAAAngle = (gcnew System::Windows::Forms::Button());
			this->angleBox6 = (gcnew System::Windows::Forms::TextBox());
			this->angleBox5 = (gcnew System::Windows::Forms::TextBox());
			this->angleBox4 = (gcnew System::Windows::Forms::TextBox());
			this->angleBox3 = (gcnew System::Windows::Forms::TextBox());
			this->angleBox2 = (gcnew System::Windows::Forms::TextBox());
			this->angleBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkSpeedAngle = (gcnew System::Windows::Forms::CheckBox());
			this->buttonAxis6Angular = (gcnew System::Windows::Forms::Button());
			this->buttonAxis5Angular = (gcnew System::Windows::Forms::Button());
			this->buttonAxis4Angular = (gcnew System::Windows::Forms::Button());
			this->buttonAxis3Angular = (gcnew System::Windows::Forms::Button());
			this->buttonAxis2Angular = (gcnew System::Windows::Forms::Button());
			this->buttonAxis1Angular = (gcnew System::Windows::Forms::Button());
			this->speedBoxAngle6 = (gcnew System::Windows::Forms::ComboBox());
			this->speedBoxAngle5 = (gcnew System::Windows::Forms::ComboBox());
			this->speedBoxAngle4 = (gcnew System::Windows::Forms::ComboBox());
			this->speedBoxAngle3 = (gcnew System::Windows::Forms::ComboBox());
			this->speedBoxAngle2 = (gcnew System::Windows::Forms::ComboBox());
			this->speedBoxAngle1 = (gcnew System::Windows::Forms::ComboBox());
			this->angleBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->angleBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->angleBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->angleBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->angleBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->angleBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(760, 524);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
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
			this->tabPage1->Size = System::Drawing::Size(752, 498);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Robot Controls";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(249, 167);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(75, 20);
			this->textBox18->TabIndex = 30;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(249, 141);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(75, 20);
			this->textBox17->TabIndex = 29;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(249, 115);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(75, 20);
			this->textBox16->TabIndex = 28;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(249, 88);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(75, 20);
			this->textBox15->TabIndex = 27;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(249, 62);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(75, 20);
			this->textBox14->TabIndex = 26;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(249, 36);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(75, 20);
			this->textBox13->TabIndex = 25;
			// 
			// button11
			// 
			this->button11->Enabled = false;
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
			this->button10->Enabled = false;
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
			this->button9->Enabled = false;
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
			this->button8->Enabled = false;
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
			this->button7->Enabled = false;
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
			this->button6->Enabled = false;
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
			this->button5->Enabled = false;
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
			this->button4->Enabled = false;
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
			this->button3->Enabled = false;
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
			this->button2->Enabled = false;
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
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->buttonCalibrate);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->buttonMoveAA);
			this->tabPage2->Controls->Add(this->textStepA6);
			this->tabPage2->Controls->Add(this->textStepA5);
			this->tabPage2->Controls->Add(this->textStepA4);
			this->tabPage2->Controls->Add(this->textStepA3);
			this->tabPage2->Controls->Add(this->textStepA2);
			this->tabPage2->Controls->Add(this->textStepA1);
			this->tabPage2->Controls->Add(this->checkBoxSpeedStep);
			this->tabPage2->Controls->Add(this->buttonAxis6Step);
			this->tabPage2->Controls->Add(this->buttonAxis5Step);
			this->tabPage2->Controls->Add(this->buttonAxis4Step);
			this->tabPage2->Controls->Add(this->buttonAxis3Step);
			this->tabPage2->Controls->Add(this->buttonAxis2Step);
			this->tabPage2->Controls->Add(this->buttonAxis1Step);
			this->tabPage2->Controls->Add(this->speedStep6);
			this->tabPage2->Controls->Add(this->speedStep5);
			this->tabPage2->Controls->Add(this->speedStep4);
			this->tabPage2->Controls->Add(this->speedStep3);
			this->tabPage2->Controls->Add(this->speedStep2);
			this->tabPage2->Controls->Add(this->speedStep1);
			this->tabPage2->Controls->Add(this->trackBar6);
			this->tabPage2->Controls->Add(this->trackBar5);
			this->tabPage2->Controls->Add(this->trackBar4);
			this->tabPage2->Controls->Add(this->trackBar3);
			this->tabPage2->Controls->Add(this->trackBar2);
			this->tabPage2->Controls->Add(this->trackBar1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(752, 498);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Step Control";
			// 
			// buttonCalibrate
			// 
			this->buttonCalibrate->Location = System::Drawing::Point(588, 344);
			this->buttonCalibrate->Name = L"buttonCalibrate";
			this->buttonCalibrate->Size = System::Drawing::Size(74, 139);
			this->buttonCalibrate->TabIndex = 39;
			this->buttonCalibrate->Text = L"Calibrate";
			this->buttonCalibrate->UseVisualStyleBackColor = true;
			this->buttonCalibrate->Click += gcnew System::EventHandler(this, &RoboticForm::buttonCalibrate_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->buttonUpdateAA);
			this->groupBox3->Controls->Add(this->buttonUpdateA5);
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->buttonUpdateA4);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Controls->Add(this->buttonUpdateA3);
			this->groupBox3->Controls->Add(this->buttonUpdateA1);
			this->groupBox3->Controls->Add(this->buttonUpdateA2);
			this->groupBox3->Location = System::Drawing::Point(7, 318);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(569, 175);
			this->groupBox3->TabIndex = 38;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Positions";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->labelYaw);
			this->groupBox4->Controls->Add(this->labelRoll);
			this->groupBox4->Controls->Add(this->labelPitch);
			this->groupBox4->Controls->Add(this->labelZ);
			this->groupBox4->Controls->Add(this->labelY);
			this->groupBox4->Controls->Add(this->labelX);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Location = System::Drawing::Point(322, 10);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(145, 165);
			this->groupBox4->TabIndex = 39;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Gripper Position";
			// 
			// labelYaw
			// 
			this->labelYaw->AutoSize = true;
			this->labelYaw->Location = System::Drawing::Point(102, 132);
			this->labelYaw->Name = L"labelYaw";
			this->labelYaw->Size = System::Drawing::Size(13, 13);
			this->labelYaw->TabIndex = 11;
			this->labelYaw->Text = L"0";
			// 
			// labelRoll
			// 
			this->labelRoll->AutoSize = true;
			this->labelRoll->Location = System::Drawing::Point(102, 113);
			this->labelRoll->Name = L"labelRoll";
			this->labelRoll->Size = System::Drawing::Size(13, 13);
			this->labelRoll->TabIndex = 10;
			this->labelRoll->Text = L"0";
			// 
			// labelPitch
			// 
			this->labelPitch->AutoSize = true;
			this->labelPitch->Location = System::Drawing::Point(102, 93);
			this->labelPitch->Name = L"labelPitch";
			this->labelPitch->Size = System::Drawing::Size(13, 13);
			this->labelPitch->TabIndex = 9;
			this->labelPitch->Text = L"0";
			// 
			// labelZ
			// 
			this->labelZ->AutoSize = true;
			this->labelZ->Location = System::Drawing::Point(102, 61);
			this->labelZ->Name = L"labelZ";
			this->labelZ->Size = System::Drawing::Size(13, 13);
			this->labelZ->TabIndex = 8;
			this->labelZ->Text = L"0";
			// 
			// labelY
			// 
			this->labelY->AutoSize = true;
			this->labelY->Location = System::Drawing::Point(102, 45);
			this->labelY->Name = L"labelY";
			this->labelY->Size = System::Drawing::Size(13, 13);
			this->labelY->TabIndex = 7;
			this->labelY->Text = L"0";
			// 
			// labelX
			// 
			this->labelX->AutoSize = true;
			this->labelX->Location = System::Drawing::Point(102, 27);
			this->labelX->Name = L"labelX";
			this->labelX->Size = System::Drawing::Size(13, 13);
			this->labelX->TabIndex = 6;
			this->labelX->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Yaw (º)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Roll (º)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Pitch (º)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Z pos (mm)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Y pos (mm)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X pos (mm)";
			// 
			// buttonUpdateAA
			// 
			this->buttonUpdateAA->Location = System::Drawing::Point(484, 27);
			this->buttonUpdateAA->Name = L"buttonUpdateAA";
			this->buttonUpdateAA->Size = System::Drawing::Size(74, 137);
			this->buttonUpdateAA->TabIndex = 29;
			this->buttonUpdateAA->Text = L"Update All Axis";
			this->buttonUpdateAA->UseVisualStyleBackColor = true;
			this->buttonUpdateAA->Click += gcnew System::EventHandler(this, &RoboticForm::buttonUpdateAA_Click);
			// 
			// buttonUpdateA5
			// 
			this->buttonUpdateA5->Location = System::Drawing::Point(6, 143);
			this->buttonUpdateA5->Name = L"buttonUpdateA5";
			this->buttonUpdateA5->Size = System::Drawing::Size(75, 23);
			this->buttonUpdateA5->TabIndex = 28;
			this->buttonUpdateA5->Text = L"Update A5";
			this->buttonUpdateA5->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->stepAxis5);
			this->groupBox2->Controls->Add(this->stepAxis4);
			this->groupBox2->Controls->Add(this->stepAxis3);
			this->groupBox2->Controls->Add(this->stepAxis2);
			this->groupBox2->Controls->Add(this->stepAxis1);
			this->groupBox2->Location = System::Drawing::Point(199, 10);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(117, 165);
			this->groupBox2->TabIndex = 30;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Step";
			// 
			// stepAxis5
			// 
			this->stepAxis5->Enabled = false;
			this->stepAxis5->Location = System::Drawing::Point(5, 135);
			this->stepAxis5->Name = L"stepAxis5";
			this->stepAxis5->Size = System::Drawing::Size(100, 20);
			this->stepAxis5->TabIndex = 23;
			this->stepAxis5->Text = L"Axis 5";
			// 
			// stepAxis4
			// 
			this->stepAxis4->Enabled = false;
			this->stepAxis4->Location = System::Drawing::Point(6, 106);
			this->stepAxis4->Name = L"stepAxis4";
			this->stepAxis4->Size = System::Drawing::Size(100, 20);
			this->stepAxis4->TabIndex = 22;
			this->stepAxis4->Text = L"Axis 4";
			// 
			// stepAxis3
			// 
			this->stepAxis3->Enabled = false;
			this->stepAxis3->Location = System::Drawing::Point(5, 77);
			this->stepAxis3->Name = L"stepAxis3";
			this->stepAxis3->Size = System::Drawing::Size(100, 20);
			this->stepAxis3->TabIndex = 21;
			this->stepAxis3->Text = L"Axis 3";
			// 
			// stepAxis2
			// 
			this->stepAxis2->Enabled = false;
			this->stepAxis2->Location = System::Drawing::Point(5, 48);
			this->stepAxis2->Name = L"stepAxis2";
			this->stepAxis2->Size = System::Drawing::Size(100, 20);
			this->stepAxis2->TabIndex = 20;
			this->stepAxis2->Text = L"Axis 2";
			// 
			// stepAxis1
			// 
			this->stepAxis1->Enabled = false;
			this->stepAxis1->Location = System::Drawing::Point(5, 19);
			this->stepAxis1->Name = L"stepAxis1";
			this->stepAxis1->Size = System::Drawing::Size(100, 20);
			this->stepAxis1->TabIndex = 19;
			this->stepAxis1->Text = L"Axis 1";
			// 
			// buttonUpdateA4
			// 
			this->buttonUpdateA4->Location = System::Drawing::Point(6, 114);
			this->buttonUpdateA4->Name = L"buttonUpdateA4";
			this->buttonUpdateA4->Size = System::Drawing::Size(75, 23);
			this->buttonUpdateA4->TabIndex = 27;
			this->buttonUpdateA4->Text = L"Update A4";
			this->buttonUpdateA4->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->angleAxis5);
			this->groupBox1->Controls->Add(this->angleAxis4);
			this->groupBox1->Controls->Add(this->angleAxis3);
			this->groupBox1->Controls->Add(this->angleAxis2);
			this->groupBox1->Controls->Add(this->angleAxis1);
			this->groupBox1->Location = System::Drawing::Point(87, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(111, 165);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Angular";
			// 
			// angleAxis5
			// 
			this->angleAxis5->Enabled = false;
			this->angleAxis5->Location = System::Drawing::Point(6, 135);
			this->angleAxis5->Name = L"angleAxis5";
			this->angleAxis5->Size = System::Drawing::Size(100, 20);
			this->angleAxis5->TabIndex = 23;
			this->angleAxis5->Text = L"Axis 5";
			// 
			// angleAxis4
			// 
			this->angleAxis4->Enabled = false;
			this->angleAxis4->Location = System::Drawing::Point(6, 106);
			this->angleAxis4->Name = L"angleAxis4";
			this->angleAxis4->Size = System::Drawing::Size(100, 20);
			this->angleAxis4->TabIndex = 22;
			this->angleAxis4->Text = L"Axis 4";
			// 
			// angleAxis3
			// 
			this->angleAxis3->Enabled = false;
			this->angleAxis3->Location = System::Drawing::Point(6, 77);
			this->angleAxis3->Name = L"angleAxis3";
			this->angleAxis3->Size = System::Drawing::Size(100, 20);
			this->angleAxis3->TabIndex = 21;
			this->angleAxis3->Text = L"Axis 3";
			// 
			// angleAxis2
			// 
			this->angleAxis2->Enabled = false;
			this->angleAxis2->Location = System::Drawing::Point(6, 48);
			this->angleAxis2->Name = L"angleAxis2";
			this->angleAxis2->Size = System::Drawing::Size(100, 20);
			this->angleAxis2->TabIndex = 20;
			this->angleAxis2->Text = L"Axis 2";
			// 
			// angleAxis1
			// 
			this->angleAxis1->Enabled = false;
			this->angleAxis1->Location = System::Drawing::Point(6, 19);
			this->angleAxis1->Name = L"angleAxis1";
			this->angleAxis1->Size = System::Drawing::Size(100, 20);
			this->angleAxis1->TabIndex = 19;
			this->angleAxis1->Text = L"Axis 1";
			// 
			// buttonUpdateA3
			// 
			this->buttonUpdateA3->Location = System::Drawing::Point(6, 85);
			this->buttonUpdateA3->Name = L"buttonUpdateA3";
			this->buttonUpdateA3->Size = System::Drawing::Size(75, 23);
			this->buttonUpdateA3->TabIndex = 26;
			this->buttonUpdateA3->Text = L"Update A3";
			this->buttonUpdateA3->UseVisualStyleBackColor = true;
			// 
			// buttonUpdateA1
			// 
			this->buttonUpdateA1->Location = System::Drawing::Point(6, 27);
			this->buttonUpdateA1->Name = L"buttonUpdateA1";
			this->buttonUpdateA1->Size = System::Drawing::Size(75, 23);
			this->buttonUpdateA1->TabIndex = 24;
			this->buttonUpdateA1->Text = L"Update A1";
			this->buttonUpdateA1->UseVisualStyleBackColor = true;
			// 
			// buttonUpdateA2
			// 
			this->buttonUpdateA2->Location = System::Drawing::Point(6, 56);
			this->buttonUpdateA2->Name = L"buttonUpdateA2";
			this->buttonUpdateA2->Size = System::Drawing::Size(75, 23);
			this->buttonUpdateA2->TabIndex = 25;
			this->buttonUpdateA2->Text = L"Update A2";
			this->buttonUpdateA2->UseVisualStyleBackColor = true;
			// 
			// buttonMoveAA
			// 
			this->buttonMoveAA->Location = System::Drawing::Point(669, 345);
			this->buttonMoveAA->Name = L"buttonMoveAA";
			this->buttonMoveAA->Size = System::Drawing::Size(74, 139);
			this->buttonMoveAA->TabIndex = 37;
			this->buttonMoveAA->Text = L"Move All Axis";
			this->buttonMoveAA->UseVisualStyleBackColor = true;
			this->buttonMoveAA->Click += gcnew System::EventHandler(this, &RoboticForm::buttonMoveAA_Click);
			// 
			// textStepA6
			// 
			this->textStepA6->Location = System::Drawing::Point(526, 283);
			this->textStepA6->Name = L"textStepA6";
			this->textStepA6->Size = System::Drawing::Size(100, 20);
			this->textStepA6->TabIndex = 36;
			this->textStepA6->Text = L"Axis";
			// 
			// textStepA5
			// 
			this->textStepA5->Location = System::Drawing::Point(526, 232);
			this->textStepA5->Name = L"textStepA5";
			this->textStepA5->Size = System::Drawing::Size(100, 20);
			this->textStepA5->TabIndex = 35;
			this->textStepA5->Text = L"Axis";
			// 
			// textStepA4
			// 
			this->textStepA4->Location = System::Drawing::Point(526, 183);
			this->textStepA4->Name = L"textStepA4";
			this->textStepA4->Size = System::Drawing::Size(100, 20);
			this->textStepA4->TabIndex = 34;
			this->textStepA4->Text = L"Axis";
			// 
			// textStepA3
			// 
			this->textStepA3->Location = System::Drawing::Point(526, 132);
			this->textStepA3->Name = L"textStepA3";
			this->textStepA3->Size = System::Drawing::Size(100, 20);
			this->textStepA3->TabIndex = 33;
			this->textStepA3->Text = L"Axis";
			// 
			// textStepA2
			// 
			this->textStepA2->Location = System::Drawing::Point(526, 81);
			this->textStepA2->Name = L"textStepA2";
			this->textStepA2->Size = System::Drawing::Size(100, 20);
			this->textStepA2->TabIndex = 32;
			this->textStepA2->Text = L"Axis";
			// 
			// textStepA1
			// 
			this->textStepA1->Location = System::Drawing::Point(526, 27);
			this->textStepA1->Name = L"textStepA1";
			this->textStepA1->Size = System::Drawing::Size(100, 20);
			this->textStepA1->TabIndex = 31;
			this->textStepA1->Text = L"Axis";
			// 
			// checkBoxSpeedStep
			// 
			this->checkBoxSpeedStep->AutoSize = true;
			this->checkBoxSpeedStep->Location = System::Drawing::Point(673, 311);
			this->checkBoxSpeedStep->Name = L"checkBoxSpeedStep";
			this->checkBoxSpeedStep->Size = System::Drawing::Size(57, 17);
			this->checkBoxSpeedStep->TabIndex = 18;
			this->checkBoxSpeedStep->Text = L"Speed";
			this->checkBoxSpeedStep->UseVisualStyleBackColor = true;
			// 
			// buttonAxis6Step
			// 
			this->buttonAxis6Step->Enabled = false;
			this->buttonAxis6Step->Location = System::Drawing::Point(7, 281);
			this->buttonAxis6Step->Name = L"buttonAxis6Step";
			this->buttonAxis6Step->Size = System::Drawing::Size(75, 23);
			this->buttonAxis6Step->TabIndex = 17;
			this->buttonAxis6Step->Text = L"Axis 6";
			this->buttonAxis6Step->UseVisualStyleBackColor = true;
			this->buttonAxis6Step->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis6Step_Click);
			// 
			// buttonAxis5Step
			// 
			this->buttonAxis5Step->Enabled = false;
			this->buttonAxis5Step->Location = System::Drawing::Point(7, 230);
			this->buttonAxis5Step->Name = L"buttonAxis5Step";
			this->buttonAxis5Step->Size = System::Drawing::Size(75, 23);
			this->buttonAxis5Step->TabIndex = 16;
			this->buttonAxis5Step->Text = L"Axis 5";
			this->buttonAxis5Step->UseVisualStyleBackColor = true;
			this->buttonAxis5Step->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis5Step_Click);
			// 
			// buttonAxis4Step
			// 
			this->buttonAxis4Step->Enabled = false;
			this->buttonAxis4Step->Location = System::Drawing::Point(7, 181);
			this->buttonAxis4Step->Name = L"buttonAxis4Step";
			this->buttonAxis4Step->Size = System::Drawing::Size(75, 23);
			this->buttonAxis4Step->TabIndex = 15;
			this->buttonAxis4Step->Text = L"Axis 4";
			this->buttonAxis4Step->UseVisualStyleBackColor = true;
			this->buttonAxis4Step->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis4Step_Click);
			// 
			// buttonAxis3Step
			// 
			this->buttonAxis3Step->Enabled = false;
			this->buttonAxis3Step->Location = System::Drawing::Point(7, 130);
			this->buttonAxis3Step->Name = L"buttonAxis3Step";
			this->buttonAxis3Step->Size = System::Drawing::Size(75, 23);
			this->buttonAxis3Step->TabIndex = 14;
			this->buttonAxis3Step->Text = L"Axis 3";
			this->buttonAxis3Step->UseVisualStyleBackColor = true;
			this->buttonAxis3Step->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis3Step_Click);
			// 
			// buttonAxis2Step
			// 
			this->buttonAxis2Step->Enabled = false;
			this->buttonAxis2Step->Location = System::Drawing::Point(7, 79);
			this->buttonAxis2Step->Name = L"buttonAxis2Step";
			this->buttonAxis2Step->Size = System::Drawing::Size(75, 23);
			this->buttonAxis2Step->TabIndex = 13;
			this->buttonAxis2Step->Text = L"Axis 2";
			this->buttonAxis2Step->UseVisualStyleBackColor = true;
			this->buttonAxis2Step->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis2Step_Click);
			// 
			// buttonAxis1Step
			// 
			this->buttonAxis1Step->Enabled = false;
			this->buttonAxis1Step->Location = System::Drawing::Point(7, 25);
			this->buttonAxis1Step->Name = L"buttonAxis1Step";
			this->buttonAxis1Step->Size = System::Drawing::Size(75, 23);
			this->buttonAxis1Step->TabIndex = 12;
			this->buttonAxis1Step->Text = L"Axis 1";
			this->buttonAxis1Step->UseVisualStyleBackColor = true;
			this->buttonAxis1Step->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis1Step_Click);
			// 
			// speedStep6
			// 
			this->speedStep6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedStep6->FormattingEnabled = true;
			this->speedStep6->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedStep6->Location = System::Drawing::Point(632, 283);
			this->speedStep6->Name = L"speedStep6";
			this->speedStep6->Size = System::Drawing::Size(114, 21);
			this->speedStep6->TabIndex = 11;
			// 
			// speedStep5
			// 
			this->speedStep5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedStep5->FormattingEnabled = true;
			this->speedStep5->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedStep5->Location = System::Drawing::Point(632, 232);
			this->speedStep5->Name = L"speedStep5";
			this->speedStep5->Size = System::Drawing::Size(114, 21);
			this->speedStep5->TabIndex = 10;
			// 
			// speedStep4
			// 
			this->speedStep4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedStep4->FormattingEnabled = true;
			this->speedStep4->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedStep4->Location = System::Drawing::Point(632, 181);
			this->speedStep4->Name = L"speedStep4";
			this->speedStep4->Size = System::Drawing::Size(114, 21);
			this->speedStep4->TabIndex = 9;
			// 
			// speedStep3
			// 
			this->speedStep3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedStep3->FormattingEnabled = true;
			this->speedStep3->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedStep3->Location = System::Drawing::Point(632, 130);
			this->speedStep3->Name = L"speedStep3";
			this->speedStep3->Size = System::Drawing::Size(114, 21);
			this->speedStep3->TabIndex = 8;
			// 
			// speedStep2
			// 
			this->speedStep2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedStep2->FormattingEnabled = true;
			this->speedStep2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedStep2->Location = System::Drawing::Point(632, 79);
			this->speedStep2->Name = L"speedStep2";
			this->speedStep2->Size = System::Drawing::Size(114, 21);
			this->speedStep2->TabIndex = 7;
			// 
			// speedStep1
			// 
			this->speedStep1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedStep1->FormattingEnabled = true;
			this->speedStep1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedStep1->Location = System::Drawing::Point(632, 27);
			this->speedStep1->Name = L"speedStep1";
			this->speedStep1->Size = System::Drawing::Size(114, 21);
			this->speedStep1->TabIndex = 6;
			// 
			// trackBar6
			// 
			this->trackBar6->Location = System::Drawing::Point(86, 283);
			this->trackBar6->Maximum = 255;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(434, 45);
			this->trackBar6->TabIndex = 5;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &RoboticForm::trackBar6_Scroll);
			// 
			// trackBar5
			// 
			this->trackBar5->Location = System::Drawing::Point(86, 232);
			this->trackBar5->Maximum = 255;
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(434, 45);
			this->trackBar5->TabIndex = 4;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &RoboticForm::trackBar5_Scroll);
			// 
			// trackBar4
			// 
			this->trackBar4->Location = System::Drawing::Point(86, 181);
			this->trackBar4->Maximum = 255;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(434, 45);
			this->trackBar4->TabIndex = 3;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &RoboticForm::trackBar4_Scroll);
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(86, 130);
			this->trackBar3->Maximum = 255;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(434, 45);
			this->trackBar3->TabIndex = 2;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &RoboticForm::trackBar3_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(86, 79);
			this->trackBar2->Maximum = 255;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(434, 45);
			this->trackBar2->TabIndex = 1;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &RoboticForm::trackBar2_Scroll);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(86, 28);
			this->trackBar1->Maximum = 255;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(434, 45);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &RoboticForm::trackBar1_Scroll);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage3->Controls->Add(this->calibrateAngle);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->moveAAAngle);
			this->tabPage3->Controls->Add(this->angleBox6);
			this->tabPage3->Controls->Add(this->angleBox5);
			this->tabPage3->Controls->Add(this->angleBox4);
			this->tabPage3->Controls->Add(this->angleBox3);
			this->tabPage3->Controls->Add(this->angleBox2);
			this->tabPage3->Controls->Add(this->angleBox1);
			this->tabPage3->Controls->Add(this->checkSpeedAngle);
			this->tabPage3->Controls->Add(this->buttonAxis6Angular);
			this->tabPage3->Controls->Add(this->buttonAxis5Angular);
			this->tabPage3->Controls->Add(this->buttonAxis4Angular);
			this->tabPage3->Controls->Add(this->buttonAxis3Angular);
			this->tabPage3->Controls->Add(this->buttonAxis2Angular);
			this->tabPage3->Controls->Add(this->buttonAxis1Angular);
			this->tabPage3->Controls->Add(this->speedBoxAngle6);
			this->tabPage3->Controls->Add(this->speedBoxAngle5);
			this->tabPage3->Controls->Add(this->speedBoxAngle4);
			this->tabPage3->Controls->Add(this->speedBoxAngle3);
			this->tabPage3->Controls->Add(this->speedBoxAngle2);
			this->tabPage3->Controls->Add(this->speedBoxAngle1);
			this->tabPage3->Controls->Add(this->angleBar6);
			this->tabPage3->Controls->Add(this->angleBar5);
			this->tabPage3->Controls->Add(this->angleBar4);
			this->tabPage3->Controls->Add(this->angleBar3);
			this->tabPage3->Controls->Add(this->angleBar2);
			this->tabPage3->Controls->Add(this->angleBar1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(752, 498);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Angular Control";
			// 
			// calibrateAngle
			// 
			this->calibrateAngle->Location = System::Drawing::Point(588, 344);
			this->calibrateAngle->Name = L"calibrateAngle";
			this->calibrateAngle->Size = System::Drawing::Size(74, 139);
			this->calibrateAngle->TabIndex = 67;
			this->calibrateAngle->Text = L"Calibrate";
			this->calibrateAngle->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox6);
			this->groupBox5->Controls->Add(this->updateAAAngle);
			this->groupBox5->Controls->Add(this->updateA5Angle);
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->updateA4Angle);
			this->groupBox5->Controls->Add(this->groupBox8);
			this->groupBox5->Controls->Add(this->updateA3Angle);
			this->groupBox5->Controls->Add(this->updateA1Angle);
			this->groupBox5->Controls->Add(this->updateA2Angle);
			this->groupBox5->Location = System::Drawing::Point(7, 318);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(569, 175);
			this->groupBox5->TabIndex = 66;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Positions";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->labelYawAngle);
			this->groupBox6->Controls->Add(this->labelRollAngle);
			this->groupBox6->Controls->Add(this->labelPitchAngle);
			this->groupBox6->Controls->Add(this->labelZAngle);
			this->groupBox6->Controls->Add(this->labelYAngle);
			this->groupBox6->Controls->Add(this->labelXAngle);
			this->groupBox6->Controls->Add(this->label13);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Controls->Add(this->label17);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Location = System::Drawing::Point(322, 10);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(145, 165);
			this->groupBox6->TabIndex = 39;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Gripper Position";
			// 
			// labelYawAngle
			// 
			this->labelYawAngle->AutoSize = true;
			this->labelYawAngle->Location = System::Drawing::Point(102, 132);
			this->labelYawAngle->Name = L"labelYawAngle";
			this->labelYawAngle->Size = System::Drawing::Size(13, 13);
			this->labelYawAngle->TabIndex = 11;
			this->labelYawAngle->Text = L"0";
			// 
			// labelRollAngle
			// 
			this->labelRollAngle->AutoSize = true;
			this->labelRollAngle->Location = System::Drawing::Point(102, 113);
			this->labelRollAngle->Name = L"labelRollAngle";
			this->labelRollAngle->Size = System::Drawing::Size(13, 13);
			this->labelRollAngle->TabIndex = 10;
			this->labelRollAngle->Text = L"0";
			// 
			// labelPitchAngle
			// 
			this->labelPitchAngle->AutoSize = true;
			this->labelPitchAngle->Location = System::Drawing::Point(102, 93);
			this->labelPitchAngle->Name = L"labelPitchAngle";
			this->labelPitchAngle->Size = System::Drawing::Size(13, 13);
			this->labelPitchAngle->TabIndex = 9;
			this->labelPitchAngle->Text = L"0";
			// 
			// labelZAngle
			// 
			this->labelZAngle->AutoSize = true;
			this->labelZAngle->Location = System::Drawing::Point(102, 61);
			this->labelZAngle->Name = L"labelZAngle";
			this->labelZAngle->Size = System::Drawing::Size(13, 13);
			this->labelZAngle->TabIndex = 8;
			this->labelZAngle->Text = L"0";
			// 
			// labelYAngle
			// 
			this->labelYAngle->AutoSize = true;
			this->labelYAngle->Location = System::Drawing::Point(102, 45);
			this->labelYAngle->Name = L"labelYAngle";
			this->labelYAngle->Size = System::Drawing::Size(13, 13);
			this->labelYAngle->TabIndex = 7;
			this->labelYAngle->Text = L"0";
			// 
			// labelXAngle
			// 
			this->labelXAngle->AutoSize = true;
			this->labelXAngle->Location = System::Drawing::Point(102, 27);
			this->labelXAngle->Name = L"labelXAngle";
			this->labelXAngle->Size = System::Drawing::Size(13, 13);
			this->labelXAngle->TabIndex = 6;
			this->labelXAngle->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 132);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Yaw (º)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 113);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Roll (º)";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 93);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Pitch (º)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 62);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Z pos (mm)";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 45);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(59, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Y pos (mm)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 27);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(59, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"X pos (mm)";
			// 
			// updateAAAngle
			// 
			this->updateAAAngle->Location = System::Drawing::Point(484, 27);
			this->updateAAAngle->Name = L"updateAAAngle";
			this->updateAAAngle->Size = System::Drawing::Size(74, 137);
			this->updateAAAngle->TabIndex = 29;
			this->updateAAAngle->Text = L"Update All Axis";
			this->updateAAAngle->UseVisualStyleBackColor = true;
			// 
			// updateA5Angle
			// 
			this->updateA5Angle->Location = System::Drawing::Point(6, 143);
			this->updateA5Angle->Name = L"updateA5Angle";
			this->updateA5Angle->Size = System::Drawing::Size(75, 23);
			this->updateA5Angle->TabIndex = 28;
			this->updateA5Angle->Text = L"Update A5";
			this->updateA5Angle->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->stepAngleBox5);
			this->groupBox7->Controls->Add(this->stepAngleBox4);
			this->groupBox7->Controls->Add(this->stepAngleBox3);
			this->groupBox7->Controls->Add(this->stepAngleBox2);
			this->groupBox7->Controls->Add(this->stepAngleBox1);
			this->groupBox7->Location = System::Drawing::Point(199, 10);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(117, 165);
			this->groupBox7->TabIndex = 30;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Step";
			// 
			// stepAngleBox5
			// 
			this->stepAngleBox5->Enabled = false;
			this->stepAngleBox5->Location = System::Drawing::Point(5, 135);
			this->stepAngleBox5->Name = L"stepAngleBox5";
			this->stepAngleBox5->Size = System::Drawing::Size(100, 20);
			this->stepAngleBox5->TabIndex = 23;
			this->stepAngleBox5->Text = L"Axis 5";
			// 
			// stepAngleBox4
			// 
			this->stepAngleBox4->Enabled = false;
			this->stepAngleBox4->Location = System::Drawing::Point(6, 106);
			this->stepAngleBox4->Name = L"stepAngleBox4";
			this->stepAngleBox4->Size = System::Drawing::Size(100, 20);
			this->stepAngleBox4->TabIndex = 22;
			this->stepAngleBox4->Text = L"Axis 4";
			// 
			// stepAngleBox3
			// 
			this->stepAngleBox3->Enabled = false;
			this->stepAngleBox3->Location = System::Drawing::Point(5, 77);
			this->stepAngleBox3->Name = L"stepAngleBox3";
			this->stepAngleBox3->Size = System::Drawing::Size(100, 20);
			this->stepAngleBox3->TabIndex = 21;
			this->stepAngleBox3->Text = L"Axis 3";
			// 
			// stepAngleBox2
			// 
			this->stepAngleBox2->Enabled = false;
			this->stepAngleBox2->Location = System::Drawing::Point(5, 48);
			this->stepAngleBox2->Name = L"stepAngleBox2";
			this->stepAngleBox2->Size = System::Drawing::Size(100, 20);
			this->stepAngleBox2->TabIndex = 20;
			this->stepAngleBox2->Text = L"Axis 2";
			// 
			// stepAngleBox1
			// 
			this->stepAngleBox1->Enabled = false;
			this->stepAngleBox1->Location = System::Drawing::Point(5, 19);
			this->stepAngleBox1->Name = L"stepAngleBox1";
			this->stepAngleBox1->Size = System::Drawing::Size(100, 20);
			this->stepAngleBox1->TabIndex = 19;
			this->stepAngleBox1->Text = L"Axis 1";
			// 
			// updateA4Angle
			// 
			this->updateA4Angle->Location = System::Drawing::Point(6, 114);
			this->updateA4Angle->Name = L"updateA4Angle";
			this->updateA4Angle->Size = System::Drawing::Size(75, 23);
			this->updateA4Angle->TabIndex = 27;
			this->updateA4Angle->Text = L"Update A4";
			this->updateA4Angle->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->angleAngleBox5);
			this->groupBox8->Controls->Add(this->angleAngleBox4);
			this->groupBox8->Controls->Add(this->angleAngleBox3);
			this->groupBox8->Controls->Add(this->angleAngleBox2);
			this->groupBox8->Controls->Add(this->angleAngleBox1);
			this->groupBox8->Location = System::Drawing::Point(87, 10);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(111, 165);
			this->groupBox8->TabIndex = 29;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Angular";
			// 
			// angleAngleBox5
			// 
			this->angleAngleBox5->Enabled = false;
			this->angleAngleBox5->Location = System::Drawing::Point(6, 135);
			this->angleAngleBox5->Name = L"angleAngleBox5";
			this->angleAngleBox5->Size = System::Drawing::Size(100, 20);
			this->angleAngleBox5->TabIndex = 23;
			this->angleAngleBox5->Text = L"Axis 5";
			// 
			// angleAngleBox4
			// 
			this->angleAngleBox4->Enabled = false;
			this->angleAngleBox4->Location = System::Drawing::Point(6, 106);
			this->angleAngleBox4->Name = L"angleAngleBox4";
			this->angleAngleBox4->Size = System::Drawing::Size(100, 20);
			this->angleAngleBox4->TabIndex = 22;
			this->angleAngleBox4->Text = L"Axis 4";
			// 
			// angleAngleBox3
			// 
			this->angleAngleBox3->Enabled = false;
			this->angleAngleBox3->Location = System::Drawing::Point(6, 77);
			this->angleAngleBox3->Name = L"angleAngleBox3";
			this->angleAngleBox3->Size = System::Drawing::Size(100, 20);
			this->angleAngleBox3->TabIndex = 21;
			this->angleAngleBox3->Text = L"Axis 3";
			// 
			// angleAngleBox2
			// 
			this->angleAngleBox2->Enabled = false;
			this->angleAngleBox2->Location = System::Drawing::Point(6, 48);
			this->angleAngleBox2->Name = L"angleAngleBox2";
			this->angleAngleBox2->Size = System::Drawing::Size(100, 20);
			this->angleAngleBox2->TabIndex = 20;
			this->angleAngleBox2->Text = L"Axis 2";
			// 
			// angleAngleBox1
			// 
			this->angleAngleBox1->Enabled = false;
			this->angleAngleBox1->Location = System::Drawing::Point(6, 19);
			this->angleAngleBox1->Name = L"angleAngleBox1";
			this->angleAngleBox1->Size = System::Drawing::Size(100, 20);
			this->angleAngleBox1->TabIndex = 19;
			this->angleAngleBox1->Text = L"Axis 1";
			// 
			// updateA3Angle
			// 
			this->updateA3Angle->Location = System::Drawing::Point(6, 85);
			this->updateA3Angle->Name = L"updateA3Angle";
			this->updateA3Angle->Size = System::Drawing::Size(75, 23);
			this->updateA3Angle->TabIndex = 26;
			this->updateA3Angle->Text = L"Update A3";
			this->updateA3Angle->UseVisualStyleBackColor = true;
			// 
			// updateA1Angle
			// 
			this->updateA1Angle->Location = System::Drawing::Point(6, 27);
			this->updateA1Angle->Name = L"updateA1Angle";
			this->updateA1Angle->Size = System::Drawing::Size(75, 23);
			this->updateA1Angle->TabIndex = 24;
			this->updateA1Angle->Text = L"Update A1";
			this->updateA1Angle->UseVisualStyleBackColor = true;
			// 
			// updateA2Angle
			// 
			this->updateA2Angle->Location = System::Drawing::Point(6, 56);
			this->updateA2Angle->Name = L"updateA2Angle";
			this->updateA2Angle->Size = System::Drawing::Size(75, 23);
			this->updateA2Angle->TabIndex = 25;
			this->updateA2Angle->Text = L"Update A2";
			this->updateA2Angle->UseVisualStyleBackColor = true;
			// 
			// moveAAAngle
			// 
			this->moveAAAngle->Location = System::Drawing::Point(669, 345);
			this->moveAAAngle->Name = L"moveAAAngle";
			this->moveAAAngle->Size = System::Drawing::Size(74, 139);
			this->moveAAAngle->TabIndex = 65;
			this->moveAAAngle->Text = L"Move All Axis";
			this->moveAAAngle->UseVisualStyleBackColor = true;
			// 
			// angleBox6
			// 
			this->angleBox6->Location = System::Drawing::Point(526, 283);
			this->angleBox6->Name = L"angleBox6";
			this->angleBox6->Size = System::Drawing::Size(100, 20);
			this->angleBox6->TabIndex = 64;
			this->angleBox6->Text = L"Axis";
			// 
			// angleBox5
			// 
			this->angleBox5->Location = System::Drawing::Point(526, 232);
			this->angleBox5->Name = L"angleBox5";
			this->angleBox5->Size = System::Drawing::Size(100, 20);
			this->angleBox5->TabIndex = 63;
			this->angleBox5->Text = L"Axis";
			// 
			// angleBox4
			// 
			this->angleBox4->Location = System::Drawing::Point(526, 183);
			this->angleBox4->Name = L"angleBox4";
			this->angleBox4->Size = System::Drawing::Size(100, 20);
			this->angleBox4->TabIndex = 62;
			this->angleBox4->Text = L"Axis";
			// 
			// angleBox3
			// 
			this->angleBox3->Location = System::Drawing::Point(526, 132);
			this->angleBox3->Name = L"angleBox3";
			this->angleBox3->Size = System::Drawing::Size(100, 20);
			this->angleBox3->TabIndex = 61;
			this->angleBox3->Text = L"Axis";
			// 
			// angleBox2
			// 
			this->angleBox2->Location = System::Drawing::Point(526, 81);
			this->angleBox2->Name = L"angleBox2";
			this->angleBox2->Size = System::Drawing::Size(100, 20);
			this->angleBox2->TabIndex = 60;
			this->angleBox2->Text = L"Axis";
			// 
			// angleBox1
			// 
			this->angleBox1->Location = System::Drawing::Point(526, 27);
			this->angleBox1->Name = L"angleBox1";
			this->angleBox1->Size = System::Drawing::Size(100, 20);
			this->angleBox1->TabIndex = 59;
			this->angleBox1->Text = L"Axis";
			// 
			// checkSpeedAngle
			// 
			this->checkSpeedAngle->AutoSize = true;
			this->checkSpeedAngle->Location = System::Drawing::Point(673, 311);
			this->checkSpeedAngle->Name = L"checkSpeedAngle";
			this->checkSpeedAngle->Size = System::Drawing::Size(57, 17);
			this->checkSpeedAngle->TabIndex = 58;
			this->checkSpeedAngle->Text = L"Speed";
			this->checkSpeedAngle->UseVisualStyleBackColor = true;
			// 
			// buttonAxis6Angular
			// 
			this->buttonAxis6Angular->Enabled = false;
			this->buttonAxis6Angular->Location = System::Drawing::Point(7, 281);
			this->buttonAxis6Angular->Name = L"buttonAxis6Angular";
			this->buttonAxis6Angular->Size = System::Drawing::Size(75, 23);
			this->buttonAxis6Angular->TabIndex = 57;
			this->buttonAxis6Angular->Text = L"Axis 6";
			this->buttonAxis6Angular->UseVisualStyleBackColor = true;
			// 
			// buttonAxis5Angular
			// 
			this->buttonAxis5Angular->Enabled = false;
			this->buttonAxis5Angular->Location = System::Drawing::Point(7, 230);
			this->buttonAxis5Angular->Name = L"buttonAxis5Angular";
			this->buttonAxis5Angular->Size = System::Drawing::Size(75, 23);
			this->buttonAxis5Angular->TabIndex = 56;
			this->buttonAxis5Angular->Text = L"Axis 5";
			this->buttonAxis5Angular->UseVisualStyleBackColor = true;
			// 
			// buttonAxis4Angular
			// 
			this->buttonAxis4Angular->Enabled = false;
			this->buttonAxis4Angular->Location = System::Drawing::Point(7, 181);
			this->buttonAxis4Angular->Name = L"buttonAxis4Angular";
			this->buttonAxis4Angular->Size = System::Drawing::Size(75, 23);
			this->buttonAxis4Angular->TabIndex = 55;
			this->buttonAxis4Angular->Text = L"Axis 4";
			this->buttonAxis4Angular->UseVisualStyleBackColor = true;
			// 
			// buttonAxis3Angular
			// 
			this->buttonAxis3Angular->Enabled = false;
			this->buttonAxis3Angular->Location = System::Drawing::Point(7, 130);
			this->buttonAxis3Angular->Name = L"buttonAxis3Angular";
			this->buttonAxis3Angular->Size = System::Drawing::Size(75, 23);
			this->buttonAxis3Angular->TabIndex = 54;
			this->buttonAxis3Angular->Text = L"Axis 3";
			this->buttonAxis3Angular->UseVisualStyleBackColor = true;
			// 
			// buttonAxis2Angular
			// 
			this->buttonAxis2Angular->Enabled = false;
			this->buttonAxis2Angular->Location = System::Drawing::Point(7, 79);
			this->buttonAxis2Angular->Name = L"buttonAxis2Angular";
			this->buttonAxis2Angular->Size = System::Drawing::Size(75, 23);
			this->buttonAxis2Angular->TabIndex = 53;
			this->buttonAxis2Angular->Text = L"Axis 2";
			this->buttonAxis2Angular->UseVisualStyleBackColor = true;
			// 
			// buttonAxis1Angular
			// 
			this->buttonAxis1Angular->Enabled = false;
			this->buttonAxis1Angular->Location = System::Drawing::Point(7, 25);
			this->buttonAxis1Angular->Name = L"buttonAxis1Angular";
			this->buttonAxis1Angular->Size = System::Drawing::Size(75, 23);
			this->buttonAxis1Angular->TabIndex = 52;
			this->buttonAxis1Angular->Text = L"Axis 1";
			this->buttonAxis1Angular->UseVisualStyleBackColor = true;
			this->buttonAxis1Angular->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis1Angular_Click);
			// 
			// speedBoxAngle6
			// 
			this->speedBoxAngle6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle6->FormattingEnabled = true;
			this->speedBoxAngle6->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"4", L"3", L"2", L"1" });
			this->speedBoxAngle6->Location = System::Drawing::Point(632, 283);
			this->speedBoxAngle6->Name = L"speedBoxAngle6";
			this->speedBoxAngle6->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle6->TabIndex = 51;
			// 
			// speedBoxAngle5
			// 
			this->speedBoxAngle5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle5->FormattingEnabled = true;
			this->speedBoxAngle5->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"4", L"3", L"2", L"1" });
			this->speedBoxAngle5->Location = System::Drawing::Point(632, 232);
			this->speedBoxAngle5->Name = L"speedBoxAngle5";
			this->speedBoxAngle5->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle5->TabIndex = 50;
			// 
			// speedBoxAngle4
			// 
			this->speedBoxAngle4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle4->FormattingEnabled = true;
			this->speedBoxAngle4->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"4", L"3", L"2", L"1" });
			this->speedBoxAngle4->Location = System::Drawing::Point(632, 181);
			this->speedBoxAngle4->Name = L"speedBoxAngle4";
			this->speedBoxAngle4->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle4->TabIndex = 49;
			// 
			// speedBoxAngle3
			// 
			this->speedBoxAngle3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle3->FormattingEnabled = true;
			this->speedBoxAngle3->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"4", L"3", L"2", L"1" });
			this->speedBoxAngle3->Location = System::Drawing::Point(632, 130);
			this->speedBoxAngle3->Name = L"speedBoxAngle3";
			this->speedBoxAngle3->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle3->TabIndex = 48;
			// 
			// speedBoxAngle2
			// 
			this->speedBoxAngle2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle2->FormattingEnabled = true;
			this->speedBoxAngle2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"4", L"3", L"2", L"1" });
			this->speedBoxAngle2->Location = System::Drawing::Point(632, 79);
			this->speedBoxAngle2->Name = L"speedBoxAngle2";
			this->speedBoxAngle2->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle2->TabIndex = 47;
			// 
			// speedBoxAngle1
			// 
			this->speedBoxAngle1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle1->FormattingEnabled = true;
			this->speedBoxAngle1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"4", L"3", L"2", L"1" });
			this->speedBoxAngle1->Location = System::Drawing::Point(632, 27);
			this->speedBoxAngle1->Name = L"speedBoxAngle1";
			this->speedBoxAngle1->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle1->TabIndex = 46;
			// 
			// angleBar6
			// 
			this->angleBar6->Location = System::Drawing::Point(86, 283);
			this->angleBar6->Maximum = 60;
			this->angleBar6->Name = L"angleBar6";
			this->angleBar6->Size = System::Drawing::Size(434, 45);
			this->angleBar6->TabIndex = 45;
			this->angleBar6->Value = 30;
			// 
			// angleBar5
			// 
			this->angleBar5->Location = System::Drawing::Point(86, 232);
			this->angleBar5->Maximum = 0;
			this->angleBar5->Minimum = -200;
			this->angleBar5->Name = L"angleBar5";
			this->angleBar5->Size = System::Drawing::Size(434, 45);
			this->angleBar5->TabIndex = 44;
			this->angleBar5->Value = -100;
			// 
			// angleBar4
			// 
			this->angleBar4->Location = System::Drawing::Point(86, 181);
			this->angleBar4->Maximum = 100;
			this->angleBar4->Minimum = -100;
			this->angleBar4->Name = L"angleBar4";
			this->angleBar4->Size = System::Drawing::Size(434, 45);
			this->angleBar4->TabIndex = 43;
			// 
			// angleBar3
			// 
			this->angleBar3->Location = System::Drawing::Point(86, 130);
			this->angleBar3->Maximum = 0;
			this->angleBar3->Minimum = -100;
			this->angleBar3->Name = L"angleBar3";
			this->angleBar3->Size = System::Drawing::Size(434, 45);
			this->angleBar3->TabIndex = 42;
			this->angleBar3->Value = -50;
			// 
			// angleBar2
			// 
			this->angleBar2->Location = System::Drawing::Point(86, 79);
			this->angleBar2->Maximum = 33;
			this->angleBar2->Minimum = -33;
			this->angleBar2->Name = L"angleBar2";
			this->angleBar2->Size = System::Drawing::Size(434, 45);
			this->angleBar2->TabIndex = 41;
			// 
			// angleBar1
			// 
			this->angleBar1->Location = System::Drawing::Point(86, 28);
			this->angleBar1->Maximum = 80;
			this->angleBar1->Minimum = -80;
			this->angleBar1->Name = L"angleBar1";
			this->angleBar1->Size = System::Drawing::Size(434, 45);
			this->angleBar1->TabIndex = 40;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(752, 498);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"PositionControl";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 539);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(788, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(79, 17);
			this->toolStripStatusLabel1->Text = L"Disconnected";
			// 
			// RoboticForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(788, 561);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"RoboticForm";
			this->Text = L"RoboticForm";
			this->Load += gcnew System::EventHandler(this, &RoboticForm::RoboticForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void motor_status_all(){
			char steparray[6];
			all_motor_status(Cp,steparray);
			textBox13->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[0], 1));
			angleAxis1->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[0], 1));
			textBox14->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[1], 2));
			angleAxis2->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[1], 2));
			textBox15->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[2], 3));
			angleAxis3->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[2], 3));
			textBox16->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[3], 4));
			angleAxis4->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[3], 4));
			textBox17->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[4], 5));
			angleAxis5->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[4], 5));
			textBox18->Text = Convert::ToString(steps_to_degrees((unsigned char)steparray[5], 6));

			stepAxis1->Text = Convert::ToString((unsigned char)steparray[0]);
			stepAxis2->Text = Convert::ToString((unsigned char)steparray[1]);
			stepAxis3->Text = Convert::ToString((unsigned char)steparray[2]);
			stepAxis4->Text = Convert::ToString((unsigned char)steparray[3]);
			stepAxis5->Text = Convert::ToString((unsigned char)steparray[4]);

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
			//MessageBox::Show("Connected!");
			toolStripStatusLabel1->Text = "Connected";
			button2->Enabled = TRUE;
			button3->Enabled = TRUE;
			button4->Enabled = TRUE;
			button5->Enabled = TRUE;
			button6->Enabled = TRUE;
			button7->Enabled = TRUE;
			button8->Enabled = TRUE;
			button9->Enabled = TRUE;
			button10->Enabled = TRUE;
			button11->Enabled = TRUE;
			buttonAxis1Step->Enabled = TRUE;
			buttonAxis2Step->Enabled = TRUE;
			buttonAxis3Step->Enabled = TRUE;
			buttonAxis4Step->Enabled = TRUE;
			buttonAxis5Step->Enabled = TRUE;
			buttonAxis6Step->Enabled = TRUE;
			speedStep1->SelectedIndex = 2;
			speedStep2->SelectedIndex = 2;
			speedStep3->SelectedIndex = 2;
			speedStep4->SelectedIndex = 2;
			speedStep5->SelectedIndex = 2;
			speedStep6->SelectedIndex = 2;
		}

	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis1 = Convert::ToInt32(textBox1->Text), steps;
		
		steps = degrees_to_steps(axis1, 1);

		if (checkBox1->Checked == TRUE){
			int speed = Convert::ToInt32(textBox7->Text);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 1, steps, speed);
			textBox1->Clear();
		}
		else
		{
			move_one_axis(Cp, 1, steps);
			//textBox1->Clear();
		}
		motor_status_all();
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis2 = Convert::ToInt32(textBox2->Text), steps;
		
		steps = degrees_to_steps(axis2, 2);

		if (checkBox1->Checked == TRUE){
			int speed = Convert::ToInt32(textBox8->Text);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 2, steps, speed);
			textBox2->Clear();
		}
		else
		{
			move_one_axis(Cp, 2, steps);
			//textBox2->Clear();
		}
		motor_status_all();
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis3 = Convert::ToInt32(textBox3->Text), steps;

		steps = degrees_to_steps(axis3, 3);

		if (checkBox1->Checked == TRUE){
			int speed = Convert::ToInt32(textBox9->Text);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 3, steps, speed);
			textBox3->Clear();
		}
		else
		{
			move_one_axis(Cp, 3, steps);
			//textBox3->Clear();
		}
		motor_status_all();
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis4 = Convert::ToInt32(textBox4->Text), steps;

		steps = degrees_to_steps(axis4, 4);

		if (checkBox1->Checked == TRUE){
			int speed = Convert::ToInt32(textBox10->Text);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 4, steps, speed);
			textBox4->Clear();
		}
		else
		{
			move_one_axis(Cp, 4, steps);
			//textBox4->Clear();
		}
		motor_status_all();
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis5 = Convert::ToInt32(textBox5->Text), steps;

		steps = degrees_to_steps(axis5, 5);

		if (checkBox1->Checked == TRUE){
			int speed = Convert::ToInt32(textBox11->Text);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 5, steps, speed);
			textBox5->Clear();
		}
		else
		{
			move_one_axis(Cp, 5, steps);
			//textBox5->Clear();
		}
		motor_status_all();
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis6 = Convert::ToInt32(textBox6->Text), steps;

		steps = mm_to_steps(axis6);

		if (checkBox1->Checked == TRUE){
			int speed = Convert::ToInt32(textBox12->Text);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 6, steps, speed);
			textBox6->Clear();
		}
		else
		{
			move_one_axis(Cp, 6, steps);
			//textBox6->Clear();
		}
		motor_status_all();
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
		motor_status_all();
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
		//calibrate(Cp);

		//textBox7->Text = Convert::ToString(degrees_to_steps(0, 1));

		//motor_status();
		
		//int theta[5];
		//	backward_kinematic(246.64, 206.934, 567.888, 6.280, -36.35, theta);
		double theta_tk[5] = { 0, 0, 0, 0, 0 };
		double posAtt[6], theta[5], posAtt2[6];
		direct_kinematic(theta_tk, posAtt);
		backward_kinematic(posAtt, theta);
		direct_kinematic(theta, posAtt2);

		motor_status_all();
	}

private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	textStepA1->Text = Convert::ToString(trackBar1->Value);
}
private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
	textStepA2->Text = Convert::ToString(trackBar2->Value);
}
private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e) {
	textStepA3->Text = Convert::ToString(trackBar3->Value);
}
private: System::Void trackBar4_Scroll(System::Object^  sender, System::EventArgs^  e) {
	textStepA4->Text = Convert::ToString(trackBar4->Value);
}
private: System::Void trackBar5_Scroll(System::Object^  sender, System::EventArgs^  e) {
	textStepA5->Text = Convert::ToString(trackBar5->Value);
}
private: System::Void trackBar6_Scroll(System::Object^  sender, System::EventArgs^  e) {
	textStepA6->Text = Convert::ToString(trackBar6->Value);
}
private: System::Void buttonAxis1Step_Click(System::Object^  sender, System::EventArgs^  e) {
	int axis;

	try{
		axis = Convert::ToInt32(textStepA1->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! Eixo 1");
		textStepA1->Text = Convert::ToString(trackBar1->Value);
		return;
	}
	if (axis > 255 || axis < 0){
		MessageBox::Show("Input incorrecto! Eixo 1");
		textStepA1->Text = Convert::ToString(trackBar1->Value);
		return;
	}

	if (checkBoxSpeedStep->Checked == TRUE){
		int speed = Convert::ToInt32(speedStep1->SelectedItem);

		if (speed < 0 || speed > 5){
			MessageBox::Show("Speed 0-5, by default speed=3");
			speed = 3;
		}

		move_one_axis_speed(Cp, 1, axis, speed);
	}
	else
	{
		move_one_axis(Cp, 1, axis);
	}
	stepAxis1->Text=Convert::ToString(motor_status(Cp, 1));
}
private: System::Void buttonAxis2Step_Click(System::Object^  sender, System::EventArgs^  e) {
	int axis;

	try{
		axis = Convert::ToInt32(textStepA2->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! Eixo 2");
		textStepA2->Text = Convert::ToString(trackBar2->Value);
		return;
	}
	if (axis > 255 || axis < 0){
		MessageBox::Show("Input incorrecto! Eixo 2");
		textStepA2->Text = Convert::ToString(trackBar2->Value);
		return;
	}

	if (checkBoxSpeedStep->Checked == TRUE){
		int speed = Convert::ToInt32(speedStep2->SelectedItem);

		if (speed < 0 || speed > 5){
			MessageBox::Show("Speed 0-5, by default speed=3");
			speed = 3;
		}

		move_one_axis_speed(Cp, 2, axis, speed);
	}
	else
	{
		move_one_axis(Cp, 2, axis);
	}
	int steps = motor_status(Cp, 2);
	stepAxis2->Text = Convert::ToString(steps);
	angleAxis2->Text = Convert::ToString(steps_to_degrees(steps, 2));
}
private: System::Void buttonAxis3Step_Click(System::Object^  sender, System::EventArgs^  e) {
	int axis;

	try{
		axis = Convert::ToInt32(textStepA3->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! Eixo 3");
		textStepA3->Text = Convert::ToString(trackBar3->Value);
		return;
	}
	if (axis > 255 || axis < 0){
		MessageBox::Show("Input incorrecto! Eixo 3");
		textStepA3->Text = Convert::ToString(trackBar3->Value);
		return;
	}

	if (checkBoxSpeedStep->Checked == TRUE){
		int speed = Convert::ToInt32(speedStep3->SelectedItem);

		if (speed < 0 || speed > 5){
			MessageBox::Show("Speed 0-5, by default speed=3");
			speed = 3;
		}

		move_one_axis_speed(Cp, 3, axis, speed);
	}
	else
	{
		move_one_axis(Cp, 3, axis);
	}
	int steps = motor_status(Cp, 3);
	stepAxis3->Text = Convert::ToString(steps);
	angleAxis3->Text = Convert::ToString(steps_to_degrees(steps, 3));
}
private: System::Void buttonAxis4Step_Click(System::Object^  sender, System::EventArgs^  e) {
	int axis;

	try{
		axis = Convert::ToInt32(textStepA4->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! Eixo 4");
		textStepA4->Text = Convert::ToString(trackBar4->Value);
		return;
	}
	if (axis > 255 || axis < 0){
		MessageBox::Show("Input incorrecto! Eixo 4");
		textStepA4->Text = Convert::ToString(trackBar4->Value);
		return;
	}

	if (checkBoxSpeedStep->Checked == TRUE){
		int speed = Convert::ToInt32(speedStep4->SelectedItem);

		if (speed < 0 || speed > 5){
			MessageBox::Show("Speed 0-5, by default speed=3");
			speed = 3;
		}

		move_one_axis_speed(Cp, 4, axis, speed);
	}
	else
	{
		move_one_axis(Cp, 4, axis);
	}
	int steps = motor_status(Cp, 4);
	stepAxis4->Text = Convert::ToString(steps);
	angleAxis4->Text = Convert::ToString(steps_to_degrees(steps, 4));
}
private: System::Void buttonAxis5Step_Click(System::Object^  sender, System::EventArgs^  e) {
	int axis;

	try{
		axis = Convert::ToInt32(textStepA5->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! Eixo 5");
		textStepA5->Text = Convert::ToString(trackBar5->Value);
		return;
	}
	if (axis > 255 || axis < 0){
		MessageBox::Show("Input incorrecto! Eixo 5");
		textStepA5->Text = Convert::ToString(trackBar5->Value);
		return;
	}

	if (checkBoxSpeedStep->Checked == TRUE){
		int speed = Convert::ToInt32(speedStep5->SelectedItem);

		if (speed < 0 || speed > 5){
			MessageBox::Show("Speed 0-5, by default speed=3");
			speed = 3;
		}

		move_one_axis_speed(Cp, 5, axis, speed);
	}
	else
	{
		move_one_axis(Cp, 5, axis);
	}
	int steps = motor_status(Cp, 5);
	stepAxis5->Text = Convert::ToString(steps);
	angleAxis5->Text = Convert::ToString(steps_to_degrees(steps, 5));
}
private: System::Void buttonAxis6Step_Click(System::Object^  sender, System::EventArgs^  e) {
	int axis;

	try{
		axis = Convert::ToInt32(textStepA6->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! Eixo 6");
		textStepA6->Text = Convert::ToString(trackBar6->Value);
		return;
	}
	if (axis > 255 || axis < 0){
		MessageBox::Show("Input incorrecto! Eixo 6");
		textStepA6->Text = Convert::ToString(trackBar6->Value);
		return;
	}

	if (checkBoxSpeedStep->Checked == TRUE){
		int speed = Convert::ToInt32(speedStep6->SelectedItem);

		if (speed < 0 || speed > 5){
			MessageBox::Show("Speed 0-5, by default speed=3");
			speed = 3;
		}

		move_one_axis_speed(Cp, 6, axis, speed);
	}
	else
	{
		move_one_axis(Cp, 6, axis);
	}
	int steps = motor_status(Cp, 6);
	//stepAxis6->Text = Convert::ToString(steps);
	//angleAxis6->Text = Convert::ToString(steps_to_degrees(steps, 6));
}
private: System::Void buttonUpdateAA_Click(System::Object^  sender, System::EventArgs^  e) {
	motor_status_all();
}
		 /* Move All Axis in steps functionality
		 Read all data from form and move all axis at the same time
		 */
private: System::Void buttonMoveAA_Click(System::Object^  sender, System::EventArgs^  e) {
	int axis[6];

	try{
		axis[0] = Convert::ToInt32(textStepA1->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! 0 < Steps < 255");
		textStepA1->Text = Convert::ToString(trackBar1->Value);
		return;
	}
	try{
		axis[1] = Convert::ToInt32(textStepA2->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! 0 < Steps < 255");
		textStepA2->Text = Convert::ToString(trackBar2->Value);
		return;
	}
	try{
		axis[2] = Convert::ToInt32(textStepA3->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! 0 < Steps < 255");
		textStepA3->Text = Convert::ToString(trackBar3->Value);
		return;
	}
	try{
		axis[3] = Convert::ToInt32(textStepA4->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! 0 < Steps < 255");
		textStepA4->Text = Convert::ToString(trackBar4->Value);
		return;
	}
	try{
		axis[4] = Convert::ToInt32(textStepA5->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! 0 < Steps < 255");
		textStepA5->Text = Convert::ToString(trackBar5->Value);
		return;
	}
	try{
		axis[5] = Convert::ToInt32(textStepA6->Text);
	}
	catch (...){
		MessageBox::Show("Input incorrecto! 0 < Steps < 255");
		textStepA6->Text = Convert::ToString(trackBar6->Value);
		return;
	}
	for (size_t i = 0; i < 6; i++)
	{
		if (axis[i] > 255 || axis[i] < 0){
			MessageBox::Show("Input incorrecto!  0 < Steps < 255");
			textStepA5->Text = Convert::ToString(trackBar5->Value);
			return;
		}
	}

	if (checkBoxSpeedStep->Checked == TRUE){
		int speed[6];
		speed[0] = Convert::ToInt32(speedStep1->SelectedItem);
		speed[1] = Convert::ToInt32(speedStep2->SelectedItem);
		speed[2] = Convert::ToInt32(speedStep3->SelectedItem);
		speed[3] = Convert::ToInt32(speedStep4->SelectedItem);
		speed[4] = Convert::ToInt32(speedStep5->SelectedItem);
		speed[5] = Convert::ToInt32(speedStep6->SelectedItem);
		for (size_t i = 0; i < 6; i++)
		{
			if (speed[i] < 0 || speed[i] > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed[i] = 3;
			}
		}

		move_multiple_axis_speed(Cp, axis, speed);
	}
	else
	{
		move_multiple_axis(Cp, axis);
	}
	motor_status_all();
}
private: System::Void buttonAxis1Angular_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buttonCalibrate_Click(System::Object^  sender, System::EventArgs^  e) {
	int steps[6] = {128,170,0,128,128,0};
	trackBar1->Value = steps[0];
	trackBar2->Value = steps[1];
	trackBar3->Value = steps[2];
	trackBar4->Value = steps[3];
	trackBar5->Value = steps[4];
	trackBar6->Value = steps[5];
	textStepA1->Text = Convert::ToString(steps[0]);
	textStepA2->Text = Convert::ToString(steps[1]);
	textStepA3->Text = Convert::ToString(steps[2]);
	textStepA4->Text = Convert::ToString(steps[3]);
	textStepA5->Text = Convert::ToString(steps[4]);
	textStepA6->Text = Convert::ToString(steps[5]);
	move_multiple_axis(Cp, steps);
	motor_status_all();
}
};
}
