#include "MyForm.h"
#include "Source.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	matrixappwindow::MyForm form;
	Application::Run(% form);
}

float** A, ** B;
int N_A = 0, M_A = 0, N_B = 0, M_B = 0;

System::Void matrixappwindow::MyForm::dataGridViewMatrA_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::numericUpDownN_A_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::numericUpDownM_A_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonCreate_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*Размеры матрицы*/
	N_A = Convert::ToInt32(numericUpDownN_A->Value);
	M_A = Convert::ToInt32(numericUpDownM_A->Value);



	/*Создание матрицы*/
	A = new float* [N_A];
	for (int i = 0; i < N_A; i++)
	{
		A[i] = new float[M_A];
	}

	/*Обнуление матрицы*/
	for (int i = 0; i < N_A; i++)
	{
		for (int j = 0; j < M_A; j++)
		{
			A[i][j] = 0;
		}
	}


	/*Создание таблицы*/
	dataGridViewMatrA->RowCount = N_A;
	dataGridViewMatrA->ColumnCount = M_A;

	/*Показ таблицы*/
	ShowA();

	/*Выравнивание таблицы*/
	dataGridViewMatrA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrA->AutoResizeColumns();/*столбцы*/

	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonGenerate_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A == 0 && M_A == 0)
	{
		MessageBox::Show("Матрица отсутствует!", "Error");
		return;
	}

	/*Генерируем значения*/
	std::srand(time(NULL));
	for (int i = 0; i < N_A; i++)
	{
		for (int j = 0; j < M_A; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	ShowA();
	/*Выравнивание таблицы*/
	dataGridViewMatrA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrA->AutoResizeColumns();/*столбцы*/
	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonMultiplyBy_A_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (N_A == 0 || M_A == 0)
	{
		MessageBox::Show("Матрица отсутствует!", "Error");
		return;
	}
	//Считывание числа
	int num = Convert::ToInt32(numericUpDownMult_A->Value);

	//Умножение
	float** C = MultiplyByNumber(A, N_A, M_A, num);

	ShowResult(C, N_A, M_A);

	/*Выравнивание таблицы*/
	dataGridViewMatrA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrA->AutoResizeColumns();/*столбцы*/



	return System::Void();
}

System::Void matrixappwindow::MyForm::numericUpDownMult_A_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonSumAboveD_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A == 0 && M_A == 0)
	{
		MessageBox::Show("Матрица отсутствует!", "Error");
		return;
	}
	
	int num = SumAboveMainD(A, N_A, M_A);

	textBoxActionC_1->Text = Convert::ToString(num);


	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonReading_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxReadFile_A->Text == "")
	{
		MessageBox::Show("Введите имя файла!", "Error");
		return;
	}
	std::string filename;
	Convert_String_to_string(textBoxReadFile_A->Text, filename);

	/*Считывание данных из файла*/
	ReadingMatrix(A, N_A, M_A, filename);

	/*Создание таблицы*/
	dataGridViewMatrA->RowCount = N_A;
	dataGridViewMatrA->ColumnCount = M_A;

	ShowA();

	/*Выравнивание таблицы*/
	dataGridViewMatrA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrA->AutoResizeColumns();/*столбцы*/
	return System::Void();
}

System::Void matrixappwindow::MyForm::textBoxReadFile_A_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::dataGridViewMatrB_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::numericUpDownN_B_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::numericUpDownM_B_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonCreate_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*Размеры матрицы*/
	N_B = Convert::ToInt32(numericUpDownN_B->Value);
	M_B = Convert::ToInt32(numericUpDownM_B->Value);



	/*Создание матрицы*/
	B = new float* [N_B];
	for (int i = 0; i < N_B; i++)
	{
		B[i] = new float[M_B];
	}

	/*Обнуление матрицы*/
	for (int i = 0; i < N_B; i++)
	{
		for (int j = 0; j < M_B; j++)
		{
			B[i][j] = 0;
		}
	}


	/*Создание таблицы*/
	dataGridViewMatrB->RowCount = N_B;
	dataGridViewMatrB->ColumnCount = M_B;

	/*Показ таблицы*/
	ShowB();

	/*Выравнивание таблицы*/
	dataGridViewMatrB->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrB->AutoResizeColumns();/*столбцы*/

	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonGenerate_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_B == 0 && M_B == 0)
	{
		MessageBox::Show("Матрица отсутствует!", "Error");
		return;
	}

	/*Генерируем значения*/
	std::srand(time(NULL));
	for (int i = 0; i < N_B; i++)
	{
		for (int j = 0; j < M_B; j++)
		{
			B[i][j] = rand() % 10;
		}
	}
	/*Показ таблицы*/
	ShowB();

	/*Выравнивание таблицы*/
	dataGridViewMatrB->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrB->AutoResizeColumns();/*столбцы*/
	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonMultiplyBy_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_B == 0 || M_B == 0)
	{
		MessageBox::Show("Матрица отсутствует!", "Error");
		return;
	}
	//Считывание числа
	int num = Convert::ToInt32(numericUpDownMult_B->Value);

	//Умножение
	float** C = MultiplyByNumber(B, N_B, M_B, num);

	ShowResult(C, N_B, M_B);

	/*Выравнивание таблицы*/
	dataGridViewMatrB->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrB->AutoResizeColumns();/*столбцы*/



	return System::Void();



}

System::Void matrixappwindow::MyForm::numericUpDownMult_B_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonSumAboveD_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_B == 0 && M_B == 0)
	{
		MessageBox::Show("Матрица отсутствует!", "Error");
		return;
	}

	int num = SumAboveMainD(B, N_B, M_B);

	textBoxActionC_2->Text = Convert::ToString(num);


	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonReading_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxReadFile_B->Text == "")
	{
		MessageBox::Show("Введите имя файла!", "Error");
		return;
	}
	std::string filename;
	Convert_String_to_string(textBoxReadFile_B->Text, filename);

	/*Считывание данных из файла*/
	ReadingMatrix(B, N_B, M_B, filename);

	/*Создание таблицы*/
	dataGridViewMatrB->RowCount = N_B;
	dataGridViewMatrB->ColumnCount = M_B;

	ShowB();

	/*Выравнивание таблицы*/
	dataGridViewMatrB->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrB->AutoResizeColumns();/*столбцы*/
	return System::Void();
}

System::Void matrixappwindow::MyForm::textBoxReadFile_B_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void matrixappwindow::MyForm::buttonMulti_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A == 0 && M_A == 0)
	{
		MessageBox::Show("Матрица A отсутствует!", "Error");
		return;
	}

	if (N_B == 0 && M_B == 0)
	{
		MessageBox::Show("Матрица B отсутствует!", "Error");
		return;
	}

	if (N_B != N_A && M_A != M_B)
	{
		MessageBox::Show("Размеры матриц должны совпадать.", "Error");
		return;
	}

	float** C = MatrixMultiply(A, B, N_A, M_A);

	

	/*Показ таблицы*/
	ShowResult(C, N_A, M_A);

	/*Выравнивание таблицы*/
	dataGridViewMatrC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrC->AutoResizeColumns();/*столбцы*/




	return System::Void();
}

void matrixappwindow::MyForm::ShowResult(float** C, int N, int M)
{
	/*Создаем таблицу*/
	dataGridViewMatrC->RowCount = N;
	dataGridViewMatrC->ColumnCount = M;


	/*Вывод матрицы B в таблицу */
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			/*Название таблицы в левом верхнем углу*/
			dataGridViewMatrC->TopLeftHeaderCell->Value = "Матрица C";


			/*Вывод номеров столбцов*/
			dataGridViewMatrC->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

			/*Вывод номеров строк*/
			dataGridViewMatrC->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

			/*Вывод значения матрицы*/
			dataGridViewMatrC->Rows[i]->Cells[j]->Value = C[i][j];

		}
	}

	
}

System::Void matrixappwindow::MyForm::buttonAddition_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A == 0 && M_A == 0)
	{
		MessageBox::Show("Матрица A отсутствует!", "Error");
		return;
	}

	if (N_B == 0 && M_B == 0)
	{
		MessageBox::Show("Матрица B отсутствует!", "Error");
		return;
	}

	if (N_B != N_A && M_A != M_B)
	{
		MessageBox::Show("Размеры матриц должны совпадать.", "Error");
		return;
	}

	float** C = MatrixSum(A, B, N_A, M_A); 



	/*Показ таблицы*/
	ShowResult(C, N_A, M_A);

	/*Выравнивание таблицы*/
	dataGridViewMatrC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);/*ячейки*/
	dataGridViewMatrC->AutoResizeColumns();/*столбцы*/




	return System::Void();
}

void matrixappwindow::MyForm::ShowA()
{
	/*Вывод матрицы А в таблицу */
	for (int i = 0; i < N_A; i++)
	{
		for (int j = 0; j < M_A; j++)
		{
			/*Название таблицы в левом верхнем углу*/
			dataGridViewMatrA->TopLeftHeaderCell->Value = "Матрица А";


			/*Вывод номеров столбцов*/
			dataGridViewMatrA->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

			/*Вывод номеров строк*/
			dataGridViewMatrA->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

			/*Вывод значения матрицы*/
			dataGridViewMatrA->Rows[i]->Cells[j]->Value = A[i][j];

		}
	}
}
void matrixappwindow::MyForm::ShowB()
{
	/*Вывод матрицы B в таблицу */
	for (int i = 0; i < N_B; i++)
	{
		for (int j = 0; j < M_B; j++)
		{
			/*Название таблицы в левом верхнем углу*/
			dataGridViewMatrB->TopLeftHeaderCell->Value = "Матрица B";


			/*Вывод номеров столбцов*/
			dataGridViewMatrB->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

			/*Вывод номеров строк*/
			dataGridViewMatrB->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

			/*Вывод значения матрицы*/
			dataGridViewMatrB->Rows[i]->Cells[j]->Value = B[i][j];

		}
	}
}









