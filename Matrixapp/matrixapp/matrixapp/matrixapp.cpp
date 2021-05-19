#include "Source.h"

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    /*Размеры матрицы*/
    int N = 3;
    int M = 3;

    /*           Матрицы         */
     
    float** A = new float* [N];
    float** B = new float* [N];
    float** C = new float* [N];
    
    for (int i = 0; i < N; i++)
    {
        A[i] = new float[M];
        B[i] = new float[M];
        C[i] = new float[M];
    }



    cout << "\nВыберете способ заполнения матрицы:\n";
    cout << "1 - Ввод с клавиатуры\n";
    cout << "2 - Автозаполнение\n";
    cout << "---> ";
    int choice;
    while (true)
    {
        cin >> choice;
        if (choice == 1)
        {
            cout << "\nВведите матрицу А:\n";
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    cout << "\nA[" << i << "][" << j << "] = ";
                    cin >> A[i][j];
                }
            }
            cout << "\nВведите матрицу B:\n";
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    cout << "\nB[" << i << "][" << j << "] = ";
                    cin >> B[i][j];
                }
            }
            break;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    A[i][j] = rand() % 10;
                    B[i][j] = rand() % 10;
                }
            }

            break;
        }
        else
        {
            cout << "\n\tНеверный ввод, попробуйте еще раз.\n";
            continue;
        }
    }

    /*Вывод матрицы на экран*/
    cout << "\nМатрица А:\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "\nМатрица B:\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(4) << B[i][j];
        }
        cout << endl;
    }


    /*Умножение матриц*/

    C = MatrixMultiply(A, B, N, M);
    
    cout << endl;


    /*Вывод умноженной матрицы*/
    cout << "\nA*B = " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout<< setw(4) << C[i][j];
        }
        cout << endl;
    }
    /*-------------------------*/




    /*Сумма элементов над главной диагональю*/


    float sum = SumAboveMainD(A, N, M);

    cout << "\nСумма элементов над главной диагональю: " << sum << endl;

    /*-----------------------------------*/


    /*Умножение матрицы на число*/
    
    float num;
    cout << "\nВведите число, на которое нужно умножить матрицу: ";
    cin >> num;

    C = MultiplyByNumber(A, N, M, num);

    /*Вывод умноженной матрицы*/
    cout << "\nA*num = " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(4) << C[i][j];
        }
        cout << endl;
    }
    /*-------------------------*/








    system("pause");
}
