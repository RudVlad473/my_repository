#include "Source.h"






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
            if (j > 1)
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
