#pragma once

namespace matrixappwindow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBoxMatrA_1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDownM_A;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownN_A;
	private: System::Windows::Forms::DataGridView^ dataGridViewMatrA;
	private: System::Windows::Forms::Label^ labelА;
	private: System::Windows::Forms::Button^ buttonGenerate_A;
	private: System::Windows::Forms::Button^ buttonCreate_A;
	private: System::Windows::Forms::GroupBox^ groupBoxMatrA_2;


	private: System::Windows::Forms::Button^ buttonSumAboveD_A;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownMult_A;
	private: System::Windows::Forms::Button^ buttonMultiplyBy_A;



	private: System::Windows::Forms::TextBox^ textBoxReadFile_A;

	private: System::Windows::Forms::Button^ buttonReading_A;
	private: System::Windows::Forms::GroupBox^ groupBoxMatrB_1;
		   
	private: System::Windows::Forms::Button^ buttonGenerate_B;

	private: System::Windows::Forms::Button^ buttonCreate_B;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownM_B;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownN_B;
	private: System::Windows::Forms::DataGridView^ dataGridViewMatrB;
	private: System::Windows::Forms::Label^ labelB;
	private: System::Windows::Forms::GroupBox^ groupBoxMatrB_2;
	private: System::Windows::Forms::TextBox^ textBoxReadFile_B;

	private: System::Windows::Forms::Button^ buttonReading_B;

	private: System::Windows::Forms::Button^ buttonSumAboveD_B;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownMult_B;


	private: System::Windows::Forms::Button^ buttonMultiplyBy_B;
	private: System::Windows::Forms::GroupBox^ groupBoxMatrC_1;
	private: System::Windows::Forms::TextBox^ textBoxActionC_2;
	private: System::Windows::Forms::TextBox^ textBoxActionC_1;
	private: System::Windows::Forms::Label^ labelC_2;
	private: System::Windows::Forms::Label^ labelC_1;
	private: System::Windows::Forms::DataGridView^ dataGridViewMatrC;
	private: System::Windows::Forms::Label^ labelC;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonMulti;
	private: System::Windows::Forms::Button^ buttonAddition;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBoxMatrA_1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonGenerate_A = (gcnew System::Windows::Forms::Button());
			this->buttonCreate_A = (gcnew System::Windows::Forms::Button());
			this->numericUpDownM_A = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownN_A = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridViewMatrA = (gcnew System::Windows::Forms::DataGridView());
			this->labelА = (gcnew System::Windows::Forms::Label());
			this->groupBoxMatrA_2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxReadFile_A = (gcnew System::Windows::Forms::TextBox());
			this->buttonReading_A = (gcnew System::Windows::Forms::Button());
			this->buttonSumAboveD_A = (gcnew System::Windows::Forms::Button());
			this->numericUpDownMult_A = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonMultiplyBy_A = (gcnew System::Windows::Forms::Button());
			this->groupBoxMatrB_1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonGenerate_B = (gcnew System::Windows::Forms::Button());
			this->buttonCreate_B = (gcnew System::Windows::Forms::Button());
			this->numericUpDownM_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownN_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridViewMatrB = (gcnew System::Windows::Forms::DataGridView());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->groupBoxMatrB_2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxReadFile_B = (gcnew System::Windows::Forms::TextBox());
			this->buttonReading_B = (gcnew System::Windows::Forms::Button());
			this->buttonSumAboveD_B = (gcnew System::Windows::Forms::Button());
			this->numericUpDownMult_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonMultiplyBy_B = (gcnew System::Windows::Forms::Button());
			this->groupBoxMatrC_1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxActionC_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxActionC_1 = (gcnew System::Windows::Forms::TextBox());
			this->labelC_2 = (gcnew System::Windows::Forms::Label());
			this->labelC_1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewMatrC = (gcnew System::Windows::Forms::DataGridView());
			this->labelC = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonMulti = (gcnew System::Windows::Forms::Button());
			this->buttonAddition = (gcnew System::Windows::Forms::Button());
			this->groupBoxMatrA_1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM_A))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN_A))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrA))->BeginInit();
			this->groupBoxMatrA_2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMult_A))->BeginInit();
			this->groupBoxMatrB_1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrB))->BeginInit();
			this->groupBoxMatrB_2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMult_B))->BeginInit();
			this->groupBoxMatrC_1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrC))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxMatrA_1
			// 
			this->groupBoxMatrA_1->Controls->Add(this->buttonGenerate_A);
			this->groupBoxMatrA_1->Controls->Add(this->buttonCreate_A);
			this->groupBoxMatrA_1->Controls->Add(this->numericUpDownM_A);
			this->groupBoxMatrA_1->Controls->Add(this->numericUpDownN_A);
			this->groupBoxMatrA_1->Controls->Add(this->dataGridViewMatrA);
			this->groupBoxMatrA_1->Controls->Add(this->labelА);
			this->groupBoxMatrA_1->Location = System::Drawing::Point(26, 24);
			this->groupBoxMatrA_1->Name = L"groupBoxMatrA_1";
			this->groupBoxMatrA_1->Size = System::Drawing::Size(293, 518);
			this->groupBoxMatrA_1->TabIndex = 0;
			this->groupBoxMatrA_1->TabStop = false;
			this->groupBoxMatrA_1->Text = L"Матрица А";
			// 
			// buttonGenerate_A
			// 
			this->buttonGenerate_A->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGenerate_A->Location = System::Drawing::Point(31, 461);
			this->buttonGenerate_A->Name = L"buttonGenerate_A";
			this->buttonGenerate_A->Size = System::Drawing::Size(229, 50);
			this->buttonGenerate_A->TabIndex = 5;
			this->buttonGenerate_A->Text = L"Сгенерировать";
			this->buttonGenerate_A->UseVisualStyleBackColor = true;
			this->buttonGenerate_A->Click += gcnew System::EventHandler(this, &MyForm::buttonGenerate_A_Click);
			// 
			// buttonCreate_A
			// 
			this->buttonCreate_A->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCreate_A->Location = System::Drawing::Point(31, 405);
			this->buttonCreate_A->Name = L"buttonCreate_A";
			this->buttonCreate_A->Size = System::Drawing::Size(229, 50);
			this->buttonCreate_A->TabIndex = 4;
			this->buttonCreate_A->Text = L"Создать";
			this->buttonCreate_A->UseVisualStyleBackColor = true;
			this->buttonCreate_A->Click += gcnew System::EventHandler(this, &MyForm::buttonCreate_A_Click);
			// 
			// numericUpDownM_A
			// 
			this->numericUpDownM_A->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownM_A->Location = System::Drawing::Point(160, 368);
			this->numericUpDownM_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownM_A->Name = L"numericUpDownM_A";
			this->numericUpDownM_A->Size = System::Drawing::Size(100, 38);
			this->numericUpDownM_A->TabIndex = 3;
			this->numericUpDownM_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownM_A->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownM_A_ValueChanged);
			// 
			// numericUpDownN_A
			// 
			this->numericUpDownN_A->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownN_A->Location = System::Drawing::Point(31, 368);
			this->numericUpDownN_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownN_A->Name = L"numericUpDownN_A";
			this->numericUpDownN_A->Size = System::Drawing::Size(100, 38);
			this->numericUpDownN_A->TabIndex = 2;
			this->numericUpDownN_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownN_A->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownN_A_ValueChanged);
			// 
			// dataGridViewMatrA
			// 
			this->dataGridViewMatrA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrA->Location = System::Drawing::Point(0, 61);
			this->dataGridViewMatrA->Name = L"dataGridViewMatrA";
			this->dataGridViewMatrA->Size = System::Drawing::Size(290, 290);
			this->dataGridViewMatrA->TabIndex = 1;
			this->dataGridViewMatrA->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridViewMatrA_CellContentClick);
			// 
			// labelА
			// 
			this->labelА->AutoSize = true;
			this->labelА->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelА->Location = System::Drawing::Point(86, 31);
			this->labelА->Name = L"labelА";
			this->labelА->Size = System::Drawing::Size(116, 27);
			this->labelА->TabIndex = 0;
			this->labelА->Text = L"Матрица А";
			// 
			// groupBoxMatrA_2
			// 
			this->groupBoxMatrA_2->Controls->Add(this->textBoxReadFile_A);
			this->groupBoxMatrA_2->Controls->Add(this->buttonReading_A);
			this->groupBoxMatrA_2->Controls->Add(this->buttonSumAboveD_A);
			this->groupBoxMatrA_2->Controls->Add(this->numericUpDownMult_A);
			this->groupBoxMatrA_2->Controls->Add(this->buttonMultiplyBy_A);
			this->groupBoxMatrA_2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxMatrA_2->Location = System::Drawing::Point(26, 548);
			this->groupBoxMatrA_2->Name = L"groupBoxMatrA_2";
			this->groupBoxMatrA_2->Size = System::Drawing::Size(293, 312);
			this->groupBoxMatrA_2->TabIndex = 1;
			this->groupBoxMatrA_2->TabStop = false;
			this->groupBoxMatrA_2->Text = L"Функции работы с матрицей А";
			// 
			// textBoxReadFile_A
			// 
			this->textBoxReadFile_A->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxReadFile_A->Location = System::Drawing::Point(170, 245);
			this->textBoxReadFile_A->Name = L"textBoxReadFile_A";
			this->textBoxReadFile_A->Size = System::Drawing::Size(120, 35);
			this->textBoxReadFile_A->TabIndex = 4;
			this->textBoxReadFile_A->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxReadFile_A_TextChanged);
			// 
			// buttonReading_A
			// 
			this->buttonReading_A->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonReading_A->Location = System::Drawing::Point(7, 205);
			this->buttonReading_A->Name = L"buttonReading_A";
			this->buttonReading_A->Size = System::Drawing::Size(156, 100);
			this->buttonReading_A->TabIndex = 3;
			this->buttonReading_A->Text = L"Считать матрицу из файла";
			this->buttonReading_A->UseVisualStyleBackColor = true;
			this->buttonReading_A->Click += gcnew System::EventHandler(this, &MyForm::buttonReading_A_Click);
			// 
			// buttonSumAboveD_A
			// 
			this->buttonSumAboveD_A->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSumAboveD_A->Location = System::Drawing::Point(7, 121);
			this->buttonSumAboveD_A->Name = L"buttonSumAboveD_A";
			this->buttonSumAboveD_A->Size = System::Drawing::Size(286, 77);
			this->buttonSumAboveD_A->TabIndex = 2;
			this->buttonSumAboveD_A->Text = L"Сумма э-тов над главной диагональю";
			this->buttonSumAboveD_A->UseVisualStyleBackColor = true;
			this->buttonSumAboveD_A->Click += gcnew System::EventHandler(this, &MyForm::buttonSumAboveD_A_Click);
			// 
			// numericUpDownMult_A
			// 
			this->numericUpDownMult_A->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownMult_A->Location = System::Drawing::Point(170, 60);
			this->numericUpDownMult_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMult_A->Name = L"numericUpDownMult_A";
			this->numericUpDownMult_A->Size = System::Drawing::Size(120, 35);
			this->numericUpDownMult_A->TabIndex = 1;
			this->numericUpDownMult_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMult_A->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownMult_A_ValueChanged);
			// 
			// buttonMultiplyBy_A
			// 
			this->buttonMultiplyBy_A->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultiplyBy_A->Location = System::Drawing::Point(7, 38);
			this->buttonMultiplyBy_A->Name = L"buttonMultiplyBy_A";
			this->buttonMultiplyBy_A->Size = System::Drawing::Size(156, 77);
			this->buttonMultiplyBy_A->TabIndex = 0;
			this->buttonMultiplyBy_A->Text = L"Умножить матрицу на";
			this->buttonMultiplyBy_A->UseVisualStyleBackColor = true;
			this->buttonMultiplyBy_A->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiplyBy_A_Click);
			// 
			// groupBoxMatrB_1
			// 
			this->groupBoxMatrB_1->Controls->Add(this->buttonGenerate_B);
			this->groupBoxMatrB_1->Controls->Add(this->buttonCreate_B);
			this->groupBoxMatrB_1->Controls->Add(this->numericUpDownM_B);
			this->groupBoxMatrB_1->Controls->Add(this->numericUpDownN_B);
			this->groupBoxMatrB_1->Controls->Add(this->dataGridViewMatrB);
			this->groupBoxMatrB_1->Controls->Add(this->labelB);
			this->groupBoxMatrB_1->Location = System::Drawing::Point(437, 24);
			this->groupBoxMatrB_1->Name = L"groupBoxMatrB_1";
			this->groupBoxMatrB_1->Size = System::Drawing::Size(293, 518);
			this->groupBoxMatrB_1->TabIndex = 2;
			this->groupBoxMatrB_1->TabStop = false;
			this->groupBoxMatrB_1->Text = L"Матрица В";
			// 
			// buttonGenerate_B
			// 
			this->buttonGenerate_B->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGenerate_B->Location = System::Drawing::Point(31, 461);
			this->buttonGenerate_B->Name = L"buttonGenerate_B";
			this->buttonGenerate_B->Size = System::Drawing::Size(229, 50);
			this->buttonGenerate_B->TabIndex = 5;
			this->buttonGenerate_B->Text = L"Сгенерировать";
			this->buttonGenerate_B->UseVisualStyleBackColor = true;
			this->buttonGenerate_B->Click += gcnew System::EventHandler(this, &MyForm::buttonGenerate_B_Click);
			// 
			// buttonCreate_B
			// 
			this->buttonCreate_B->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCreate_B->Location = System::Drawing::Point(31, 405);
			this->buttonCreate_B->Name = L"buttonCreate_B";
			this->buttonCreate_B->Size = System::Drawing::Size(229, 50);
			this->buttonCreate_B->TabIndex = 4;
			this->buttonCreate_B->Text = L"Создать";
			this->buttonCreate_B->UseVisualStyleBackColor = true;
			this->buttonCreate_B->Click += gcnew System::EventHandler(this, &MyForm::buttonCreate_B_Click);
			// 
			// numericUpDownM_B
			// 
			this->numericUpDownM_B->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownM_B->Location = System::Drawing::Point(160, 368);
			this->numericUpDownM_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownM_B->Name = L"numericUpDownM_B";
			this->numericUpDownM_B->Size = System::Drawing::Size(100, 38);
			this->numericUpDownM_B->TabIndex = 3;
			this->numericUpDownM_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownM_B->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownM_B_ValueChanged);
			// 
			// numericUpDownN_B
			// 
			this->numericUpDownN_B->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownN_B->Location = System::Drawing::Point(31, 368);
			this->numericUpDownN_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownN_B->Name = L"numericUpDownN_B";
			this->numericUpDownN_B->Size = System::Drawing::Size(100, 38);
			this->numericUpDownN_B->TabIndex = 2;
			this->numericUpDownN_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownN_B->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownN_B_ValueChanged);
			// 
			// dataGridViewMatrB
			// 
			this->dataGridViewMatrB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrB->Location = System::Drawing::Point(0, 61);
			this->dataGridViewMatrB->Name = L"dataGridViewMatrB";
			this->dataGridViewMatrB->Size = System::Drawing::Size(290, 290);
			this->dataGridViewMatrB->TabIndex = 1;
			this->dataGridViewMatrB->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridViewMatrB_CellContentClick);
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelB->Location = System::Drawing::Point(86, 31);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(114, 27);
			this->labelB->TabIndex = 0;
			this->labelB->Text = L"Матрица B";
			// 
			// groupBoxMatrB_2
			// 
			this->groupBoxMatrB_2->Controls->Add(this->textBoxReadFile_B);
			this->groupBoxMatrB_2->Controls->Add(this->buttonReading_B);
			this->groupBoxMatrB_2->Controls->Add(this->buttonSumAboveD_B);
			this->groupBoxMatrB_2->Controls->Add(this->numericUpDownMult_B);
			this->groupBoxMatrB_2->Controls->Add(this->buttonMultiplyBy_B);
			this->groupBoxMatrB_2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxMatrB_2->Location = System::Drawing::Point(437, 548);
			this->groupBoxMatrB_2->Name = L"groupBoxMatrB_2";
			this->groupBoxMatrB_2->Size = System::Drawing::Size(293, 312);
			this->groupBoxMatrB_2->TabIndex = 3;
			this->groupBoxMatrB_2->TabStop = false;
			this->groupBoxMatrB_2->Text = L"Функции работы с матрицей А";
			// 
			// textBoxReadFile_B
			// 
			this->textBoxReadFile_B->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxReadFile_B->Location = System::Drawing::Point(170, 245);
			this->textBoxReadFile_B->Name = L"textBoxReadFile_B";
			this->textBoxReadFile_B->Size = System::Drawing::Size(120, 35);
			this->textBoxReadFile_B->TabIndex = 4;
			this->textBoxReadFile_B->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxReadFile_B_TextChanged);
			// 
			// buttonReading_B
			// 
			this->buttonReading_B->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonReading_B->Location = System::Drawing::Point(7, 205);
			this->buttonReading_B->Name = L"buttonReading_B";
			this->buttonReading_B->Size = System::Drawing::Size(156, 100);
			this->buttonReading_B->TabIndex = 3;
			this->buttonReading_B->Text = L"Считать матрицу из файла";
			this->buttonReading_B->UseVisualStyleBackColor = true;
			this->buttonReading_B->Click += gcnew System::EventHandler(this, &MyForm::buttonReading_B_Click);
			// 
			// buttonSumAboveD_B
			// 
			this->buttonSumAboveD_B->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSumAboveD_B->Location = System::Drawing::Point(7, 121);
			this->buttonSumAboveD_B->Name = L"buttonSumAboveD_B";
			this->buttonSumAboveD_B->Size = System::Drawing::Size(286, 77);
			this->buttonSumAboveD_B->TabIndex = 2;
			this->buttonSumAboveD_B->Text = L"Сумма э-тов над главной диагональю";
			this->buttonSumAboveD_B->UseVisualStyleBackColor = true;
			this->buttonSumAboveD_B->Click += gcnew System::EventHandler(this, &MyForm::buttonSumAboveD_B_Click);
			// 
			// numericUpDownMult_B
			// 
			this->numericUpDownMult_B->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownMult_B->Location = System::Drawing::Point(170, 60);
			this->numericUpDownMult_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMult_B->Name = L"numericUpDownMult_B";
			this->numericUpDownMult_B->Size = System::Drawing::Size(120, 35);
			this->numericUpDownMult_B->TabIndex = 1;
			this->numericUpDownMult_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMult_B->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownMult_B_ValueChanged);
			// 
			// buttonMultiplyBy_B
			// 
			this->buttonMultiplyBy_B->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultiplyBy_B->Location = System::Drawing::Point(7, 38);
			this->buttonMultiplyBy_B->Name = L"buttonMultiplyBy_B";
			this->buttonMultiplyBy_B->Size = System::Drawing::Size(156, 77);
			this->buttonMultiplyBy_B->TabIndex = 0;
			this->buttonMultiplyBy_B->Text = L"Умножить матрицу на";
			this->buttonMultiplyBy_B->UseVisualStyleBackColor = true;
			this->buttonMultiplyBy_B->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiplyBy_B_Click);
			// 
			// groupBoxMatrC_1
			// 
			this->groupBoxMatrC_1->Controls->Add(this->textBoxActionC_2);
			this->groupBoxMatrC_1->Controls->Add(this->textBoxActionC_1);
			this->groupBoxMatrC_1->Controls->Add(this->labelC_2);
			this->groupBoxMatrC_1->Controls->Add(this->labelC_1);
			this->groupBoxMatrC_1->Controls->Add(this->dataGridViewMatrC);
			this->groupBoxMatrC_1->Controls->Add(this->labelC);
			this->groupBoxMatrC_1->Location = System::Drawing::Point(842, 24);
			this->groupBoxMatrC_1->Name = L"groupBoxMatrC_1";
			this->groupBoxMatrC_1->Size = System::Drawing::Size(293, 455);
			this->groupBoxMatrC_1->TabIndex = 4;
			this->groupBoxMatrC_1->TabStop = false;
			this->groupBoxMatrC_1->Text = L"Матрица А";
			// 
			// textBoxActionC_2
			// 
			this->textBoxActionC_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxActionC_2->Location = System::Drawing::Point(175, 412);
			this->textBoxActionC_2->Name = L"textBoxActionC_2";
			this->textBoxActionC_2->Size = System::Drawing::Size(100, 29);
			this->textBoxActionC_2->TabIndex = 7;
			// 
			// textBoxActionC_1
			// 
			this->textBoxActionC_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxActionC_1->Location = System::Drawing::Point(175, 369);
			this->textBoxActionC_1->Name = L"textBoxActionC_1";
			this->textBoxActionC_1->Size = System::Drawing::Size(100, 29);
			this->textBoxActionC_1->TabIndex = 6;
			// 
			// labelC_2
			// 
			this->labelC_2->AutoSize = true;
			this->labelC_2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelC_2->Location = System::Drawing::Point(6, 413);
			this->labelC_2->Name = L"labelC_2";
			this->labelC_2->Size = System::Drawing::Size(163, 27);
			this->labelC_2->TabIndex = 5;
			this->labelC_2->Text = L"Действие над В";
			// 
			// labelC_1
			// 
			this->labelC_1->AutoSize = true;
			this->labelC_1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelC_1->Location = System::Drawing::Point(4, 370);
			this->labelC_1->Name = L"labelC_1";
			this->labelC_1->Size = System::Drawing::Size(165, 27);
			this->labelC_1->TabIndex = 4;
			this->labelC_1->Text = L"Действие над А";
			// 
			// dataGridViewMatrC
			// 
			this->dataGridViewMatrC->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrC->Location = System::Drawing::Point(0, 61);
			this->dataGridViewMatrC->Name = L"dataGridViewMatrC";
			this->dataGridViewMatrC->Size = System::Drawing::Size(290, 290);
			this->dataGridViewMatrC->TabIndex = 1;
			// 
			// labelC
			// 
			this->labelC->AutoSize = true;
			this->labelC->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelC->Location = System::Drawing::Point(86, 31);
			this->labelC->Name = L"labelC";
			this->labelC->Size = System::Drawing::Size(114, 27);
			this->labelC->TabIndex = 0;
			this->labelC->Text = L"Матрица C";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1178, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// buttonMulti
			// 
			this->buttonMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMulti->Location = System::Drawing::Point(346, 197);
			this->buttonMulti->Name = L"buttonMulti";
			this->buttonMulti->Size = System::Drawing::Size(56, 52);
			this->buttonMulti->TabIndex = 6;
			this->buttonMulti->Text = L"*";
			this->buttonMulti->UseVisualStyleBackColor = true;
			this->buttonMulti->Click += gcnew System::EventHandler(this, &MyForm::buttonMulti_Click);
			// 
			// buttonAddition
			// 
			this->buttonAddition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddition->Location = System::Drawing::Point(346, 255);
			this->buttonAddition->Name = L"buttonAddition";
			this->buttonAddition->Size = System::Drawing::Size(56, 52);
			this->buttonAddition->TabIndex = 7;
			this->buttonAddition->Text = L"+";
			this->buttonAddition->UseVisualStyleBackColor = true;
			this->buttonAddition->Click += gcnew System::EventHandler(this, &MyForm::buttonAddition_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1178, 948);
			this->Controls->Add(this->buttonAddition);
			this->Controls->Add(this->buttonMulti);
			this->Controls->Add(this->groupBoxMatrC_1);
			this->Controls->Add(this->groupBoxMatrB_2);
			this->Controls->Add(this->groupBoxMatrB_1);
			this->Controls->Add(this->groupBoxMatrA_2);
			this->Controls->Add(this->groupBoxMatrA_1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->groupBoxMatrA_1->ResumeLayout(false);
			this->groupBoxMatrA_1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM_A))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN_A))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrA))->EndInit();
			this->groupBoxMatrA_2->ResumeLayout(false);
			this->groupBoxMatrA_2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMult_A))->EndInit();
			this->groupBoxMatrB_1->ResumeLayout(false);
			this->groupBoxMatrB_1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrB))->EndInit();
			this->groupBoxMatrB_2->ResumeLayout(false);
			this->groupBoxMatrB_2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMult_B))->EndInit();
			this->groupBoxMatrC_1->ResumeLayout(false);
			this->groupBoxMatrC_1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrC))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void dataGridViewMatrA_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void numericUpDownN_A_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownM_A_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCreate_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonGenerate_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMultiplyBy_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownMult_A_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSumAboveD_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonReading_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxReadFile_A_TextChanged(System::Object^ sender, System::EventArgs^ e);


private: System::Void dataGridViewMatrB_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void numericUpDownN_B_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownM_B_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCreate_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonGenerate_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMultiplyBy_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownMult_B_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSumAboveD_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonReading_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxReadFile_B_TextChanged(System::Object^ sender, System::EventArgs^ e);

private: void matrixappwindow::MyForm::ShowA();
private: void matrixappwindow::MyForm::ShowB();

private: System::Void buttonMulti_Click(System::Object^ sender, System::EventArgs^ e);

private: void ShowResult(float** C, int N, int M);

private: System::Void buttonAddition_Click(System::Object^ sender, System::EventArgs^ e);
};
}
