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
	private: System::Windows::Forms::Button^  buttonGoToPos;
private: System::Windows::Forms::TextBox^  posYawBox;

private: System::Windows::Forms::TextBox^  posPitchBox;

private: System::Windows::Forms::TextBox^  posRollBox;

private: System::Windows::Forms::TextBox^  posZBox;

private: System::Windows::Forms::TextBox^  posYBox;

private: System::Windows::Forms::TextBox^  posXBox;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RoboticForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttonCalibrate = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->buttonGoToPos = (gcnew System::Windows::Forms::Button());
			this->posYawBox = (gcnew System::Windows::Forms::TextBox());
			this->posPitchBox = (gcnew System::Windows::Forms::TextBox());
			this->posRollBox = (gcnew System::Windows::Forms::TextBox());
			this->posZBox = (gcnew System::Windows::Forms::TextBox());
			this->posYBox = (gcnew System::Windows::Forms::TextBox());
			this->posXBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
			this->tabControl1->Size = System::Drawing::Size(760, 404);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(752, 378);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Robot Controls";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(171, 296);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(388, 37);
			this->label17->TabIndex = 5;
			this->label17->Text = L"Alexandra Videira - 37246";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(153, 242);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(423, 37);
			this->label16->TabIndex = 4;
			this->label16->Text = L"João Barata Oliveira - 31559";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(194, 192);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(330, 37);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Pedro Martins - 31501";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(144, 135);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(455, 39);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Assignment 1 - Kinematics";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Teal;
			this->label13->Location = System::Drawing::Point(160, 3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(425, 108);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Robotics";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->buttonCalibrate);
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
			this->tabPage2->Size = System::Drawing::Size(752, 378);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Step Control";
			// 
			// buttonCalibrate
			// 
			this->buttonCalibrate->Enabled = false;
			this->buttonCalibrate->Location = System::Drawing::Point(21, 324);
			this->buttonCalibrate->Name = L"buttonCalibrate";
			this->buttonCalibrate->Size = System::Drawing::Size(116, 46);
			this->buttonCalibrate->TabIndex = 39;
			this->buttonCalibrate->Text = L"Calibrate";
			this->buttonCalibrate->UseVisualStyleBackColor = true;
			this->buttonCalibrate->Click += gcnew System::EventHandler(this, &RoboticForm::buttonCalibrate_Click);
			// 
			// buttonMoveAA
			// 
			this->buttonMoveAA->Enabled = false;
			this->buttonMoveAA->Location = System::Drawing::Point(143, 324);
			this->buttonMoveAA->Name = L"buttonMoveAA";
			this->buttonMoveAA->Size = System::Drawing::Size(103, 46);
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
			this->checkBoxSpeedStep->Location = System::Drawing::Point(252, 340);
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
			this->tabPage3->Size = System::Drawing::Size(752, 378);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Angular Control";
			// 
			// calibrateAngle
			// 
			this->calibrateAngle->Enabled = false;
			this->calibrateAngle->Location = System::Drawing::Point(8, 334);
			this->calibrateAngle->Name = L"calibrateAngle";
			this->calibrateAngle->Size = System::Drawing::Size(74, 31);
			this->calibrateAngle->TabIndex = 67;
			this->calibrateAngle->Text = L"Calibrate";
			this->calibrateAngle->UseVisualStyleBackColor = true;
			this->calibrateAngle->Click += gcnew System::EventHandler(this, &RoboticForm::buttonCalibrate_Click);
			// 
			// moveAAAngle
			// 
			this->moveAAAngle->Enabled = false;
			this->moveAAAngle->Location = System::Drawing::Point(89, 334);
			this->moveAAAngle->Name = L"moveAAAngle";
			this->moveAAAngle->Size = System::Drawing::Size(106, 31);
			this->moveAAAngle->TabIndex = 65;
			this->moveAAAngle->Text = L"Move All Axis";
			this->moveAAAngle->UseVisualStyleBackColor = true;
			this->moveAAAngle->Click += gcnew System::EventHandler(this, &RoboticForm::moveAAAngle_Click);
			// 
			// angleBox6
			// 
			this->angleBox6->Location = System::Drawing::Point(526, 283);
			this->angleBox6->Name = L"angleBox6";
			this->angleBox6->Size = System::Drawing::Size(100, 20);
			this->angleBox6->TabIndex = 64;
			this->angleBox6->Text = L"0";
			// 
			// angleBox5
			// 
			this->angleBox5->Location = System::Drawing::Point(526, 232);
			this->angleBox5->Name = L"angleBox5";
			this->angleBox5->Size = System::Drawing::Size(100, 20);
			this->angleBox5->TabIndex = 63;
			this->angleBox5->Text = L"0";
			// 
			// angleBox4
			// 
			this->angleBox4->Location = System::Drawing::Point(526, 183);
			this->angleBox4->Name = L"angleBox4";
			this->angleBox4->Size = System::Drawing::Size(100, 20);
			this->angleBox4->TabIndex = 62;
			this->angleBox4->Text = L"0";
			// 
			// angleBox3
			// 
			this->angleBox3->Location = System::Drawing::Point(526, 132);
			this->angleBox3->Name = L"angleBox3";
			this->angleBox3->Size = System::Drawing::Size(100, 20);
			this->angleBox3->TabIndex = 61;
			this->angleBox3->Text = L"0";
			// 
			// angleBox2
			// 
			this->angleBox2->Location = System::Drawing::Point(526, 81);
			this->angleBox2->Name = L"angleBox2";
			this->angleBox2->Size = System::Drawing::Size(100, 20);
			this->angleBox2->TabIndex = 60;
			this->angleBox2->Text = L"0";
			// 
			// angleBox1
			// 
			this->angleBox1->Location = System::Drawing::Point(526, 27);
			this->angleBox1->Name = L"angleBox1";
			this->angleBox1->Size = System::Drawing::Size(100, 20);
			this->angleBox1->TabIndex = 59;
			this->angleBox1->Text = L"0";
			// 
			// checkSpeedAngle
			// 
			this->checkSpeedAngle->AutoSize = true;
			this->checkSpeedAngle->Location = System::Drawing::Point(201, 342);
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
			this->buttonAxis6Angular->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis6Angular_Click);
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
			this->buttonAxis5Angular->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis5Angular_Click);
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
			this->buttonAxis4Angular->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis4Angular_Click);
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
			this->buttonAxis3Angular->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis3Angular_Click);
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
			this->buttonAxis2Angular->Click += gcnew System::EventHandler(this, &RoboticForm::buttonAxis2Angular_Click);
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
			this->speedBoxAngle6->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedBoxAngle6->Location = System::Drawing::Point(632, 283);
			this->speedBoxAngle6->Name = L"speedBoxAngle6";
			this->speedBoxAngle6->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle6->TabIndex = 51;
			// 
			// speedBoxAngle5
			// 
			this->speedBoxAngle5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle5->FormattingEnabled = true;
			this->speedBoxAngle5->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedBoxAngle5->Location = System::Drawing::Point(632, 232);
			this->speedBoxAngle5->Name = L"speedBoxAngle5";
			this->speedBoxAngle5->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle5->TabIndex = 50;
			// 
			// speedBoxAngle4
			// 
			this->speedBoxAngle4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle4->FormattingEnabled = true;
			this->speedBoxAngle4->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedBoxAngle4->Location = System::Drawing::Point(632, 181);
			this->speedBoxAngle4->Name = L"speedBoxAngle4";
			this->speedBoxAngle4->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle4->TabIndex = 49;
			// 
			// speedBoxAngle3
			// 
			this->speedBoxAngle3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle3->FormattingEnabled = true;
			this->speedBoxAngle3->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedBoxAngle3->Location = System::Drawing::Point(632, 130);
			this->speedBoxAngle3->Name = L"speedBoxAngle3";
			this->speedBoxAngle3->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle3->TabIndex = 48;
			// 
			// speedBoxAngle2
			// 
			this->speedBoxAngle2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle2->FormattingEnabled = true;
			this->speedBoxAngle2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
			this->speedBoxAngle2->Location = System::Drawing::Point(632, 79);
			this->speedBoxAngle2->Name = L"speedBoxAngle2";
			this->speedBoxAngle2->Size = System::Drawing::Size(114, 21);
			this->speedBoxAngle2->TabIndex = 47;
			// 
			// speedBoxAngle1
			// 
			this->speedBoxAngle1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->speedBoxAngle1->FormattingEnabled = true;
			this->speedBoxAngle1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"5", L"4", L"3", L"2", L"1", L"0" });
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
			this->angleBar6->Scroll += gcnew System::EventHandler(this, &RoboticForm::angleBar6_Scroll);
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
			this->angleBar5->Scroll += gcnew System::EventHandler(this, &RoboticForm::angleBar5_Scroll);
			// 
			// angleBar4
			// 
			this->angleBar4->Location = System::Drawing::Point(86, 181);
			this->angleBar4->Maximum = 100;
			this->angleBar4->Minimum = -100;
			this->angleBar4->Name = L"angleBar4";
			this->angleBar4->Size = System::Drawing::Size(434, 45);
			this->angleBar4->TabIndex = 43;
			this->angleBar4->Scroll += gcnew System::EventHandler(this, &RoboticForm::angleBar4_Scroll);
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
			this->angleBar3->Scroll += gcnew System::EventHandler(this, &RoboticForm::angleBar3_Scroll);
			// 
			// angleBar2
			// 
			this->angleBar2->Location = System::Drawing::Point(86, 79);
			this->angleBar2->Maximum = 66;
			this->angleBar2->Minimum = -33;
			this->angleBar2->Name = L"angleBar2";
			this->angleBar2->Size = System::Drawing::Size(434, 45);
			this->angleBar2->TabIndex = 41;
			this->angleBar2->Scroll += gcnew System::EventHandler(this, &RoboticForm::angleBar2_Scroll);
			// 
			// angleBar1
			// 
			this->angleBar1->LargeChange = 10;
			this->angleBar1->Location = System::Drawing::Point(86, 28);
			this->angleBar1->Maximum = 80;
			this->angleBar1->Minimum = -80;
			this->angleBar1->Name = L"angleBar1";
			this->angleBar1->Size = System::Drawing::Size(434, 45);
			this->angleBar1->TabIndex = 40;
			this->angleBar1->Scroll += gcnew System::EventHandler(this, &RoboticForm::angleBar1_Scroll);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage4->Controls->Add(this->pictureBox1);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->buttonGoToPos);
			this->tabPage4->Controls->Add(this->posYawBox);
			this->tabPage4->Controls->Add(this->posPitchBox);
			this->tabPage4->Controls->Add(this->posRollBox);
			this->tabPage4->Controls->Add(this->posZBox);
			this->tabPage4->Controls->Add(this->posYBox);
			this->tabPage4->Controls->Add(this->posXBox);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(752, 378);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"PositionControl";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(349, 57);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(372, 219);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(98, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Yaw (º)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(101, 154);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Roll (º)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(95, 180);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Pitch (º)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(80, 117);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Z pos (mm)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(80, 91);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Y pos (mm)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(80, 65);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 13);
			this->label12->TabIndex = 7;
			this->label12->Text = L"X pos (mm)";
			// 
			// buttonGoToPos
			// 
			this->buttonGoToPos->Enabled = false;
			this->buttonGoToPos->Location = System::Drawing::Point(141, 253);
			this->buttonGoToPos->Name = L"buttonGoToPos";
			this->buttonGoToPos->Size = System::Drawing::Size(104, 23);
			this->buttonGoToPos->TabIndex = 6;
			this->buttonGoToPos->Text = L"Go To Position";
			this->buttonGoToPos->UseVisualStyleBackColor = true;
			this->buttonGoToPos->Click += gcnew System::EventHandler(this, &RoboticForm::buttonGoToPos_Click);
			// 
			// posYawBox
			// 
			this->posYawBox->Location = System::Drawing::Point(145, 203);
			this->posYawBox->Name = L"posYawBox";
			this->posYawBox->Size = System::Drawing::Size(100, 20);
			this->posYawBox->TabIndex = 5;
			// 
			// posPitchBox
			// 
			this->posPitchBox->Location = System::Drawing::Point(145, 177);
			this->posPitchBox->Name = L"posPitchBox";
			this->posPitchBox->Size = System::Drawing::Size(100, 20);
			this->posPitchBox->TabIndex = 4;
			// 
			// posRollBox
			// 
			this->posRollBox->Location = System::Drawing::Point(145, 151);
			this->posRollBox->Name = L"posRollBox";
			this->posRollBox->Size = System::Drawing::Size(100, 20);
			this->posRollBox->TabIndex = 3;
			// 
			// posZBox
			// 
			this->posZBox->Location = System::Drawing::Point(145, 114);
			this->posZBox->Name = L"posZBox";
			this->posZBox->Size = System::Drawing::Size(100, 20);
			this->posZBox->TabIndex = 2;
			// 
			// posYBox
			// 
			this->posYBox->Location = System::Drawing::Point(145, 88);
			this->posYBox->Name = L"posYBox";
			this->posYBox->Size = System::Drawing::Size(100, 20);
			this->posYBox->TabIndex = 1;
			// 
			// posXBox
			// 
			this->posXBox->Location = System::Drawing::Point(145, 62);
			this->posXBox->Name = L"posXBox";
			this->posXBox->Size = System::Drawing::Size(100, 20);
			this->posXBox->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 603);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RoboticForm::button1_Click);
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
			this->groupBox3->Location = System::Drawing::Point(12, 422);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(756, 175);
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
			this->groupBox4->Location = System::Drawing::Point(452, 10);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(218, 165);
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
			this->buttonUpdateAA->Enabled = false;
			this->buttonUpdateAA->Location = System::Drawing::Point(676, 27);
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
			this->buttonUpdateA5->Click += gcnew System::EventHandler(this, &RoboticForm::buttonUpdateA5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->stepAxis5);
			this->groupBox2->Controls->Add(this->stepAxis4);
			this->groupBox2->Controls->Add(this->stepAxis3);
			this->groupBox2->Controls->Add(this->stepAxis2);
			this->groupBox2->Controls->Add(this->stepAxis1);
			this->groupBox2->Location = System::Drawing::Point(282, 10);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(170, 165);
			this->groupBox2->TabIndex = 30;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Step";
			// 
			// stepAxis5
			// 
			this->stepAxis5->Enabled = false;
			this->stepAxis5->Location = System::Drawing::Point(5, 135);
			this->stepAxis5->Name = L"stepAxis5";
			this->stepAxis5->Size = System::Drawing::Size(159, 20);
			this->stepAxis5->TabIndex = 23;
			this->stepAxis5->Text = L"Axis 5";
			// 
			// stepAxis4
			// 
			this->stepAxis4->Enabled = false;
			this->stepAxis4->Location = System::Drawing::Point(6, 106);
			this->stepAxis4->Name = L"stepAxis4";
			this->stepAxis4->Size = System::Drawing::Size(158, 20);
			this->stepAxis4->TabIndex = 22;
			this->stepAxis4->Text = L"Axis 4";
			// 
			// stepAxis3
			// 
			this->stepAxis3->Enabled = false;
			this->stepAxis3->Location = System::Drawing::Point(5, 77);
			this->stepAxis3->Name = L"stepAxis3";
			this->stepAxis3->Size = System::Drawing::Size(159, 20);
			this->stepAxis3->TabIndex = 21;
			this->stepAxis3->Text = L"Axis 3";
			// 
			// stepAxis2
			// 
			this->stepAxis2->Enabled = false;
			this->stepAxis2->Location = System::Drawing::Point(5, 48);
			this->stepAxis2->Name = L"stepAxis2";
			this->stepAxis2->Size = System::Drawing::Size(159, 20);
			this->stepAxis2->TabIndex = 20;
			this->stepAxis2->Text = L"Axis 2";
			// 
			// stepAxis1
			// 
			this->stepAxis1->Enabled = false;
			this->stepAxis1->Location = System::Drawing::Point(5, 19);
			this->stepAxis1->Name = L"stepAxis1";
			this->stepAxis1->Size = System::Drawing::Size(159, 20);
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
			this->buttonUpdateA4->Click += gcnew System::EventHandler(this, &RoboticForm::buttonUpdateA4_Click);
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
			this->groupBox1->Size = System::Drawing::Size(195, 165);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Angular";
			// 
			// angleAxis5
			// 
			this->angleAxis5->Enabled = false;
			this->angleAxis5->Location = System::Drawing::Point(6, 135);
			this->angleAxis5->Name = L"angleAxis5";
			this->angleAxis5->Size = System::Drawing::Size(183, 20);
			this->angleAxis5->TabIndex = 23;
			this->angleAxis5->Text = L"Axis 5";
			// 
			// angleAxis4
			// 
			this->angleAxis4->Enabled = false;
			this->angleAxis4->Location = System::Drawing::Point(6, 106);
			this->angleAxis4->Name = L"angleAxis4";
			this->angleAxis4->Size = System::Drawing::Size(183, 20);
			this->angleAxis4->TabIndex = 22;
			this->angleAxis4->Text = L"Axis 4";
			// 
			// angleAxis3
			// 
			this->angleAxis3->Enabled = false;
			this->angleAxis3->Location = System::Drawing::Point(6, 77);
			this->angleAxis3->Name = L"angleAxis3";
			this->angleAxis3->Size = System::Drawing::Size(183, 20);
			this->angleAxis3->TabIndex = 21;
			this->angleAxis3->Text = L"Axis 3";
			// 
			// angleAxis2
			// 
			this->angleAxis2->Enabled = false;
			this->angleAxis2->Location = System::Drawing::Point(6, 48);
			this->angleAxis2->Name = L"angleAxis2";
			this->angleAxis2->Size = System::Drawing::Size(183, 20);
			this->angleAxis2->TabIndex = 20;
			this->angleAxis2->Text = L"Axis 2";
			// 
			// angleAxis1
			// 
			this->angleAxis1->Enabled = false;
			this->angleAxis1->Location = System::Drawing::Point(6, 19);
			this->angleAxis1->Name = L"angleAxis1";
			this->angleAxis1->Size = System::Drawing::Size(183, 20);
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
			this->buttonUpdateA3->Click += gcnew System::EventHandler(this, &RoboticForm::buttonUpdateA3_Click);
			// 
			// buttonUpdateA1
			// 
			this->buttonUpdateA1->Location = System::Drawing::Point(6, 27);
			this->buttonUpdateA1->Name = L"buttonUpdateA1";
			this->buttonUpdateA1->Size = System::Drawing::Size(75, 23);
			this->buttonUpdateA1->TabIndex = 24;
			this->buttonUpdateA1->Text = L"Update A1";
			this->buttonUpdateA1->UseVisualStyleBackColor = true;
			this->buttonUpdateA1->Click += gcnew System::EventHandler(this, &RoboticForm::buttonUpdateA1_Click);
			// 
			// buttonUpdateA2
			// 
			this->buttonUpdateA2->Location = System::Drawing::Point(6, 56);
			this->buttonUpdateA2->Name = L"buttonUpdateA2";
			this->buttonUpdateA2->Size = System::Drawing::Size(75, 23);
			this->buttonUpdateA2->TabIndex = 25;
			this->buttonUpdateA2->Text = L"Update A2";
			this->buttonUpdateA2->UseVisualStyleBackColor = true;
			this->buttonUpdateA2->Click += gcnew System::EventHandler(this, &RoboticForm::buttonUpdateA2_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 637);
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
			this->ClientSize = System::Drawing::Size(788, 659);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"RoboticForm";
			this->Text = L"RoboticForm";
			this->Load += gcnew System::EventHandler(this, &RoboticForm::RoboticForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->angleBar1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void motor_status_all(){
			char steparray[6];
			double theta[5], posAtt[6];
			all_motor_status(Cp, steparray);
			for (size_t i = 0; i < 5; i++)
			{
				theta[i] = steps_to_degrees((unsigned char)steparray[i], i + 1);
			}


			angleAxis1->Text = Convert::ToString(theta[0]);
			angleAxis2->Text = Convert::ToString(theta[1]);
			angleAxis3->Text = Convert::ToString(theta[2]);
			angleAxis4->Text = Convert::ToString(theta[3]);
			angleAxis5->Text = Convert::ToString(theta[4]);

			angleBox1->Text = Convert::ToString((int)theta[0]);
			angleBox2->Text = Convert::ToString((int)theta[1]);
			angleBox3->Text = Convert::ToString((int)theta[2]);
			angleBox4->Text = Convert::ToString((int)theta[3]);
			angleBox5->Text = Convert::ToString((int)theta[4]);


			direct_kinematic(theta, posAtt);
			labelX->Text = Convert::ToString(posAtt[0]);
			labelY->Text = Convert::ToString(posAtt[1]);
			labelZ->Text = Convert::ToString(posAtt[2]);
			labelPitch->Text = Convert::ToString(posAtt[4]);
			labelRoll->Text = Convert::ToString(posAtt[3]);
			labelYaw->Text = Convert::ToString(posAtt[5]);

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
			buttonCalibrate->Enabled = TRUE;
			buttonUpdateAA->Enabled = TRUE;
			calibrateAngle->Enabled = TRUE;

			speedStep1->SelectedIndex = 2;
			speedStep2->SelectedIndex = 2;
			speedStep3->SelectedIndex = 2;
			speedStep4->SelectedIndex = 2;
			speedStep5->SelectedIndex = 2;
			speedStep6->SelectedIndex = 2;

			speedBoxAngle1->SelectedIndex = 2;
			speedBoxAngle2->SelectedIndex = 2;
			speedBoxAngle3->SelectedIndex = 2;
			speedBoxAngle4->SelectedIndex = 2;
			speedBoxAngle5->SelectedIndex = 2;
			speedBoxAngle6->SelectedIndex = 2;
			button1->Enabled = FALSE;
		}

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
		trackBar1->Value = axis;
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
		int steps = motor_status(Cp, 1);
		stepAxis1->Text = Convert::ToString(steps);
		angleAxis1->Text = Convert::ToString(steps_to_degrees(steps, 1));
		updateGripperPosition();
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
		trackBar2->Value = axis;
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
		updateGripperPosition();
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
		trackBar3->Value = axis;
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
		updateGripperPosition();
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
		trackBar4->Value = axis;
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
		updateGripperPosition();
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
		trackBar5->Value = axis;
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
		updateGripperPosition();
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
		trackBar6->Value = axis;
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
	private: System::Void buttonCalibrate_Click(System::Object^  sender, System::EventArgs^  e) {
		int steps[6] = { 128, 170, 0, 128, 128, 0 };
		int angle[6] = { 0, 0, 0, 0, -100 };
		//Write Values to the trackbars in Step Page
		trackBar1->Value = steps[0];
		trackBar2->Value = steps[1];
		trackBar3->Value = steps[2];
		trackBar4->Value = steps[3];
		trackBar5->Value = steps[4];
		trackBar6->Value = steps[5];
		//Write the values of Motor steps in the step control page
		textStepA1->Text = Convert::ToString(steps[0]);
		textStepA2->Text = Convert::ToString(steps[1]);
		textStepA3->Text = Convert::ToString(steps[2]);
		textStepA4->Text = Convert::ToString(steps[3]);
		textStepA5->Text = Convert::ToString(steps[4]);
		textStepA6->Text = Convert::ToString(steps[5]);
		move_multiple_axis(Cp, steps);
		//Write Values to the trackbars in Step Page
		angleBar1->Value = angle[0];
		angleBar2->Value = angle[1];
		angleBar3->Value = angle[2];
		angleBar4->Value = angle[3];
		angleBar5->Value = angle[4];
		angleBar6->Value = angle[5];
		//Write the values of Motor steps in the step control page
		angleBox1->Text = Convert::ToString(angle[0]);
		angleBox2->Text = Convert::ToString(angle[1]);
		angleBox3->Text = Convert::ToString(angle[2]);
		angleBox4->Text = Convert::ToString(angle[3]);
		angleBox5->Text = Convert::ToString(angle[4]);
		angleBox6->Text = Convert::ToString(angle[5]);
		//Update all motor status
		motor_status_all();
		//Enable Step buttons
		buttonAxis1Step->Enabled = TRUE;
		buttonAxis2Step->Enabled = TRUE;
		buttonAxis3Step->Enabled = TRUE;
		buttonAxis4Step->Enabled = TRUE;
		buttonAxis5Step->Enabled = TRUE;
		buttonAxis6Step->Enabled = TRUE;
		buttonMoveAA->Enabled = TRUE;
		//Enable angle buttons
		buttonAxis1Angular->Enabled = TRUE;
		buttonAxis2Angular->Enabled = TRUE;
		buttonAxis3Angular->Enabled = TRUE;
		buttonAxis4Angular->Enabled = TRUE;
		buttonAxis5Angular->Enabled = TRUE;
		buttonAxis6Angular->Enabled = TRUE;
		moveAAAngle->Enabled = TRUE;
		//Enable Go To Position
		buttonGoToPos->Enabled = TRUE;
		updateGripperPosition();
	}
	private: System::Void buttonUpdateA1_Click(System::Object^  sender, System::EventArgs^  e) {
		int step = motor_status(Cp, 1);
		angleAxis1->Text = Convert::ToString(steps_to_degrees(step, 1));
		stepAxis1->Text = Convert::ToString(step);
		updateGripperPosition();
	}
	private: System::Void buttonUpdateA2_Click(System::Object^  sender, System::EventArgs^  e) {
		int step = motor_status(Cp, 2);
		angleAxis2->Text = Convert::ToString(steps_to_degrees(step, 2));
		stepAxis2->Text = Convert::ToString(step);
		updateGripperPosition();
	}
	private: System::Void buttonUpdateA3_Click(System::Object^  sender, System::EventArgs^  e) {
		int step = motor_status(Cp, 3);
		angleAxis3->Text = Convert::ToString(steps_to_degrees(step, 3));
		stepAxis3->Text = Convert::ToString(step);
		updateGripperPosition();
	}
	private: System::Void buttonUpdateA4_Click(System::Object^  sender, System::EventArgs^  e) {
		int step = motor_status(Cp, 4);
		angleAxis4->Text = Convert::ToString(steps_to_degrees(step, 4));
		stepAxis4->Text = Convert::ToString(step);
		updateGripperPosition();
	}
	private: System::Void buttonUpdateA5_Click(System::Object^  sender, System::EventArgs^  e) {
		int step = motor_status(Cp, 5);
		angleAxis5->Text = Convert::ToString(steps_to_degrees(step, 5));
		stepAxis5->Text = Convert::ToString(step);
		updateGripperPosition();
	}
	private: System::Void moveAAAngle_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis[6];

		try{
			axis[0] = Convert::ToInt32(angleBox1->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 1");
			angleBox1->Text = Convert::ToString(angleBar1->Value);
			return;
		}
		try{
			axis[1] = Convert::ToInt32(angleBox2->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 2");
			angleBox2->Text = Convert::ToString(angleBar2->Value);
			return;
		}
		try{
			axis[2] = Convert::ToInt32(angleBox3->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 3");
			angleBox3->Text = Convert::ToString(angleBar3->Value);
			return;
		}
		try{
			axis[3] = Convert::ToInt32(angleBox4->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 4");
			angleBox4->Text = Convert::ToString(angleBar4->Value);
			return;
		}
		try{
			axis[4] = Convert::ToInt32(angleBox5->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 5");
			angleBox5->Text = Convert::ToString(angleBar5->Value);
			return;
		}
		try{
			axis[5] = Convert::ToInt32(angleBox6->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 6");
			angleBox6->Text = Convert::ToString(angleBar6->Value);
			return;
		}
		if (axis[0] > 80 || axis[0] < -80){
			MessageBox::Show("Input incorrecto! Eixo 1");
			angleBox1->Text = Convert::ToString(angleBar1->Value);
			return;
		}
		if (axis[1] > 66 || axis[1] < -33){
			MessageBox::Show("Input incorrecto! Eixo 2");
			angleBox2->Text = Convert::ToString(angleBar2->Value);
			return;
		}
		if (axis[2] > 0 || axis[2] < -100){
			MessageBox::Show("Input incorrecto! Eixo 3");
			angleBox3->Text = Convert::ToString(angleBar3->Value);
			return;
		}
		if (axis[3] > 100 || axis[3] < -100){
			MessageBox::Show("Input incorrecto! Eixo 4");
			angleBox4->Text = Convert::ToString(angleBar4->Value);
			return;
		}
		if (axis[4] > 0 || axis[4] < -200){
			MessageBox::Show("Input incorrecto! Eixo 5");
			angleBox5->Text = Convert::ToString(angleBar5->Value);
			return;
		}
		if (axis[5] > 60 || axis[5] < 0){
			MessageBox::Show("Input incorrecto! Eixo 6");
			angleBox6->Text = Convert::ToString(angleBar6->Value);
			return;
		}
		angleBar1->Value = axis[0];
		angleBar2->Value = axis[1];
		angleBar3->Value = axis[2];
		angleBar4->Value = axis[3];
		angleBar5->Value = axis[4];
		angleBar6->Value = axis[5];
		int steps[6];
		for (size_t i = 0; i < 5; i++)
		{
			degrees_to_steps((double)axis[i], i+1);
		}
		steps[5] = mm_to_steps((double)axis[5]);
		if (checkSpeedAngle->Checked == TRUE){
			int speed[6];
			speed[0] = Convert::ToInt32(speedBoxAngle1->SelectedItem);
			speed[1] = Convert::ToInt32(speedBoxAngle2->SelectedItem);
			speed[2] = Convert::ToInt32(speedBoxAngle3->SelectedItem);
			speed[3] = Convert::ToInt32(speedBoxAngle4->SelectedItem);
			speed[4] = Convert::ToInt32(speedBoxAngle5->SelectedItem);
			speed[5] = Convert::ToInt32(speedBoxAngle6->SelectedItem);
			for (size_t i = 0; i < 6; i++)
			{
				if (speed[i] < 0 || speed[i] > 5){
					MessageBox::Show("Speed 0-5, by default speed=3");
					speed[i] = 3;
				}
			}
			move_multiple_axis_speed(Cp, steps, speed);
		}
		else
		{
			move_multiple_axis(Cp, steps);
		}
		motor_status_all();
	}
	private: System::Void buttonAxis1Angular_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis;

		try{
			axis = Convert::ToInt32(angleBox1->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 1");
			angleBox1->Text = Convert::ToString(angleBar1->Value);
			return;
		}
		if (axis > 80 || axis < -80){
			MessageBox::Show("Input incorrecto! Eixo 1");
			angleBox1->Text = Convert::ToString(angleBar1->Value);
			return;
		}
		angleBar1->Value = axis;
		int steps = degrees_to_steps((double)axis, 1);
		if (checkSpeedAngle->Checked == TRUE){
			int speed = Convert::ToInt32(speedBoxAngle1->SelectedItem);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 1, steps, speed);
		}
		else
		{
			move_one_axis(Cp, 1, steps);
		}
		steps = motor_status(Cp, 1);
		stepAxis1->Text = Convert::ToString(steps);
		angleAxis1->Text = Convert::ToString(steps_to_degrees(steps, 1));
		updateGripperPosition();
	}
	private: System::Void buttonAxis2Angular_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis;

		try{
			axis = Convert::ToInt32(angleBox2->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 2");
			angleBox2->Text = Convert::ToString(angleBar2->Value);
			return;
		}
		if (axis > 66 || axis < -33){
			MessageBox::Show("Input incorrecto! Eixo 2");
			angleBox2->Text = Convert::ToString(angleBar2->Value);
			return;
		}
		angleBar2->Value = axis;
		int steps = degrees_to_steps((double)axis, 2);
		if (checkSpeedAngle->Checked == TRUE){
			int speed = Convert::ToInt32(speedBoxAngle2->SelectedItem);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 2, steps, speed);
		}
		else
		{
			move_one_axis(Cp, 2, steps);
		}
		steps = motor_status(Cp, 2);
		stepAxis2->Text = Convert::ToString(steps);
		angleAxis2->Text = Convert::ToString(steps_to_degrees(steps, 2));
		updateGripperPosition();
	}
	private: System::Void buttonAxis3Angular_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis;

		try{
			axis = Convert::ToInt32(angleBox3->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 3");
			angleBox3->Text = Convert::ToString(angleBar3->Value);
			return;
		}
		if (axis > 0 || axis < -100){
			MessageBox::Show("Input incorrecto! Eixo 2");
			angleBox3->Text = Convert::ToString(angleBar3->Value);
			return;
		}
		angleBar3->Value = axis;
		int steps = degrees_to_steps((double)axis, 3);
		if (checkSpeedAngle->Checked == TRUE){
			int speed = Convert::ToInt32(speedBoxAngle3->SelectedItem);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 3, steps, speed);
		}
		else
		{
			move_one_axis(Cp, 3, steps);
		}
		steps = motor_status(Cp, 3);
		stepAxis3->Text = Convert::ToString(steps);
		angleAxis3->Text = Convert::ToString(steps_to_degrees(steps, 3));
		updateGripperPosition();
	}
	private: System::Void buttonAxis4Angular_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis;

		try{
			axis = Convert::ToInt32(angleBox4->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 4");
			angleBox4->Text = Convert::ToString(angleBar4->Value);
			return;
		}
		if (axis > 100 || axis < -100){
			MessageBox::Show("Input incorrecto! Eixo 4");
			angleBox4->Text = Convert::ToString(angleBar4->Value);
			return;
		}
		angleBar4->Value = axis;
		int steps = degrees_to_steps((double)axis, 4);
		if (checkSpeedAngle->Checked == TRUE){
			int speed = Convert::ToInt32(speedBoxAngle4->SelectedItem);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 4, steps, speed);
		}
		else
		{
			move_one_axis(Cp, 4, steps);
		}
		steps = motor_status(Cp, 4);
		stepAxis4->Text = Convert::ToString(steps);
		angleAxis4->Text = Convert::ToString(steps_to_degrees(steps, 4));
		updateGripperPosition();
	}
	private: System::Void buttonAxis5Angular_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis;

		try{
			axis = Convert::ToInt32(angleBox5->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 5");
			angleBox5->Text = Convert::ToString(angleBar5->Value);
			return;
		}
		if (axis > 0 || axis < -200){
			MessageBox::Show("Input incorrecto! Eixo 5");
			angleBox5->Text = Convert::ToString(angleBar5->Value);
			return;
		}
		angleBar5->Value = axis;
		int steps = degrees_to_steps((double)axis, 5);
		if (checkSpeedAngle->Checked == TRUE){
			int speed = Convert::ToInt32(speedBoxAngle5->SelectedItem);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 5, steps, speed);
		}
		else
		{
			move_one_axis(Cp, 5, steps);
		}
		steps = motor_status(Cp, 5);
		stepAxis5->Text = Convert::ToString(steps);
		angleAxis5->Text = Convert::ToString(steps_to_degrees(steps, 5));
		updateGripperPosition();

	}
	private: System::Void buttonAxis6Angular_Click(System::Object^  sender, System::EventArgs^  e) {
		int axis;

		try{
			axis = Convert::ToInt32(angleBox6->Text);
		}
		catch (...){
			MessageBox::Show("Input incorrecto! Eixo 6");
			angleBox6->Text = Convert::ToString(angleBar6->Value);
			return;
		}
		if (axis > 60 || axis < 0){
			MessageBox::Show("Input incorrecto! Eixo 6");
			angleBox6->Text = Convert::ToString(angleBar6->Value);
			return;
		}
		angleBar6->Value = axis;
		int steps = mm_to_steps((double)axis);
		if (checkSpeedAngle->Checked == TRUE){
			int speed = Convert::ToInt32(speedBoxAngle6->SelectedItem);

			if (speed < 0 || speed > 5){
				MessageBox::Show("Speed 0-5, by default speed=3");
				speed = 3;
			}

			move_one_axis_speed(Cp, 6, steps, speed);
		}
		else
		{
			move_one_axis(Cp, 6, steps);
		}
		//steps = motor_status(Cp, 2);
		//stepAxis1->Text = Convert::ToString(steps);
		//angleAxis1->Text = Convert::ToString(steps_to_degrees(steps, 2));
	}
	private: System::Void angleBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		angleBox1->Text = Convert::ToString(angleBar1->Value);
	}
	private: System::Void angleBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
		angleBox2->Text = Convert::ToString(angleBar2->Value);
	}
	private: System::Void angleBar3_Scroll(System::Object^  sender, System::EventArgs^  e) {
		angleBox3->Text = Convert::ToString(angleBar3->Value);
	}
	private: System::Void angleBar4_Scroll(System::Object^  sender, System::EventArgs^  e) {
		angleBox4->Text = Convert::ToString(angleBar4->Value);
	}
	private: System::Void angleBar5_Scroll(System::Object^  sender, System::EventArgs^  e) {
		angleBox5->Text = Convert::ToString(angleBar5->Value);
	}
	private: System::Void angleBar6_Scroll(System::Object^  sender, System::EventArgs^  e) {
		angleBox6->Text = Convert::ToString(angleBar6->Value);
	}
	//Update the gripper position using forward kinematics
	private: System::Void updateGripperPosition(){
		int steps[5];
		double angle[5], posAtt[6];
		steps[0] = Convert::ToInt32(stepAxis1->Text);
		steps[1] = Convert::ToInt32(stepAxis2->Text);
		steps[2] = Convert::ToInt32(stepAxis3->Text);
		steps[3] = Convert::ToInt32(stepAxis4->Text);
		steps[4] = Convert::ToInt32(stepAxis5->Text);

		for (size_t i = 0; i < 5; i++)
		{
			angle[i] = steps_to_degrees(steps[i], i + 1);
		}

		direct_kinematic(angle, posAtt);

		labelX->Text = Convert::ToString(posAtt[0]);
		labelY->Text = Convert::ToString(posAtt[1]);
		labelZ->Text = Convert::ToString(posAtt[2]);
		labelPitch->Text = Convert::ToString(posAtt[4]);
		labelRoll->Text = Convert::ToString(posAtt[3]);
		labelYaw->Text = Convert::ToString(posAtt[5]);

	}
			 // Vector posAtt 1: X 2: Y 3: Z 4: Roll 5: Pitch 6: Yaw
	private: System::Void buttonGoToPos_Click(System::Object^  sender, System::EventArgs^  e) {
		double posAtt[6], theta[5];
		int steps[6];

		posAtt[0] = Convert::ToDouble(posXBox->Text);
		posAtt[1] = Convert::ToDouble(posYBox->Text);
		posAtt[2] = Convert::ToDouble(posZBox->Text);
		posAtt[3] = Convert::ToDouble(posRollBox->Text);
		posAtt[4] = Convert::ToDouble(posPitchBox->Text);
		posAtt[5] = Convert::ToDouble(posYawBox->Text);

		//TODO
		//CREATE INTEGRITY FUNCTION
		if (integrityCheck(posAtt)){
			backward_kinematic(posAtt, theta);
			for (size_t i = 0; i < 5; i++)
			{
				steps[i] = degrees_to_steps(theta[i], i + 1);
			}
			steps[6] = 0;
			move_multiple_axis(Cp, steps);
		}
		else{
			MessageBox::Show("Robot Integrity Violation detected!!!!");
		}

		
	}
	private: bool integrityCheck(double* posAtt){
		double d = sqrt(pow(posAtt[0], 2) + pow(posAtt[1], 2));
		return ((d > 50) && posAtt[2]>0);
	}
};
}
