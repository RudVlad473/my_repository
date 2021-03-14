
#include "Source.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int size;
    cout << "Введите размерность квадратной матрицы: ";
    cin >> size;
    
#ifdef DEBUG
    /*Работа с одномерным как с двумерным*/
    int* arr = new int[size * size]{};
    int** arr2 = new int* [size] {};
    for (int i = 0; i < size; i++)
    {
        arr2[i] = new int[size] {};
    }
    
    mas21(arr,arr2, size);
    


    for (int i = 0; i < (size*size); i++) 
    {
        if ((i % size) == 0)
        {
            cout << endl;
        }
        cout << setw(6) << arr[i];
    }


    for (int i = 0; i < size; i++)
    {
        delete[]arr;
    }
    for (int i = 0; i < size; i++)
    {
        delete[]arr2[i];
    }
    delete[]arr2;
    
    /*--------------------------------*/
#endif


#ifndef DEBUG
/*Работа с двумерным как с двумерным*/
    int** array = new int* [size] {};
    for (int i = 0; i < (size); i++)
    {
        array[i] = new int[size] {};
    }


    mas22(array, size);



    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(4) << array[i][j];
        }
        cout << endl;
    }


    for (int i = 0; i < (size); i++)
    {
        delete[]array[i];
    }
    delete[]array;

#endif
}


