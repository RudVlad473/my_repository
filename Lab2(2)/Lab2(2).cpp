
#include "Header.h"
#include <iostream>

int main()
{
    srand(time(NULL));
    
    setlocale(LC_ALL, "ru");
    OperSistem Array[SIZE];

    string arr[] = { "OS/2","Windows/NT","SCO/Unix" };


    char a;
    bool While = true;
    while (While)
    {
        cout << "\nВведите цифру для вызова функции: " << endl;
#ifdef PRINT_TYPE
        cout << " e - Ввод данных с клавиатуры" << endl;
#endif
#ifndef PRINT_TYPE
        cout << " r - Ввод случайным образом" << endl;
#endif
        cout << " s -  Сортировка " << endl;
        cout << " p -  Печать " << endl;
        cin >> a;
        switch (a)
        {
#ifdef PRINT_TYPE
        case 'e':
            Vvod(Array, arr, SIZE);
            break;
#endif
#ifndef PRINT_TYPE
        case 'r':
            Randomly(Array, SIZE);
            break;
#endif
        case 's':
            Sorting(Array, SIZE);
            break;

        case 'p':
            Print(Array, SIZE);
            break;

        default:
            cout << "Error\n";
            While = false;
            break;
        }
    }
    return 0;
}


