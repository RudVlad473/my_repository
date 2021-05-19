#include "Source.h"
using namespace System;
using namespace System::Windows::Forms;



float** MatrixSum(float** A, float** B, int N,int M)
{
    /*Результирующая матрица*/
    float** C = new float* [N];
    for (int i = 0; i < N; i++)
    {
        C[i] = new float[M];
    }
    /*------------------*/


    /*Суммирование матриц*/
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

float** MatrixMultiply(float** A, float** B, int N, int M)
{
    /*Результирующая матрица*/
    float** C = new float* [N];
    for (int i = 0; i < N; i++)
    {
        C[i] = new float[M];
    }
    /*------------------*/

    /*Умножение матриц*/
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

float SumAboveMainD(float** A, int N, int M)
{
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (j > i)
            {
                sum += A[i][j];
            }
        }
    }
    return sum;
}

float** MultiplyByNumber(float** A, int N, int M, int num)
{
    //Результирующая матрица
    float** C = new float* [N];
    for (int i = 0; i < N; i++)
    {
        C[i] = new float[M];
    }

    /*Умножение матрицы на число*/
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            C[i][j] = A[i][j] * num;
        }
    }
    return C;
}

void ReadingMatrix(float** (&A), int& N, int& M, std::string filename)
{
    std::ifstream reading(filename);
    /*Сначала в файле хранится информация о размерах матрицы, а затем сама матрица*/

    /*Считывание размера*/
    reading >> N;
    reading >> M;

    /*Выделение памяти под матрицу*/
    A = new float* [N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i] = new float[M];
        }
    }


    /*Считывание матрицы*/
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            reading >> A[i][j];
        }
    }




    
    reading.close();
}

std::string& Convert_String_to_string(String^ s, std::string& os)
{
    using namespace Runtime::InteropServices;
    const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));

    return os;

}

String^ Convert_string_to_String(std::string& os, String^ s)
{
    s = gcnew System::String(os.c_str()); // конвертация

    return s;
}
