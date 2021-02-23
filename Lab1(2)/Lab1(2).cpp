#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;


struct OperSistem 
{
    string Name;
    string SUBD;
    int outmem;
    int minRam;
    int cost;

};



void Vvod(OperSistem Array[],string arr[],int SIZE)
{
    /*Ввод с экрана*/

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Введите следующие значения с клавиатуры: " << endl;

        cout << "\tИмя ОС: ";
        cin >> Array[i].Name;
        cout << endl;

        cout << "\tСУБД: ";
        cin >> Array[i].SUBD;
        cout << endl;

        cout << "\tМин.объем внешней памяти (MB): ";
        cin >> Array[i].outmem;
        cout << endl;

        cout << "\tМин.объем оперативной памяти (MB): ";
        cin >> Array[i].minRam;
        cout << endl;

        cout << "\tПриблизительная цена ($): ";
        cin >> Array[i].cost;
        cout << endl << endl << endl;
    }


}

void Randomly(OperSistem arr[],int Size)
{
    string Array[] = { "OS/2","Windows/NT","SCO/Unix" };
    string Array2[] = { "DB2", "SQLServer", "Oracle" };
    for (int i = 0; i < Size; i++)
    {
        arr[i].Name = Array[i];
        cout << "Имя ОС: " << arr[i].Name << endl;

        arr[i].SUBD = Array2[i];
        cout << "СУБД: " << arr[i].SUBD << endl;

        arr[i].outmem = rand() % 250;
        cout << "Мин.объем внешней памяти (MB): " << arr[i].outmem << endl;

        arr[i].minRam = rand() % 50;
        cout << "Мин.объем оперативной памяти (MB): " << arr[i].minRam << endl;

        arr[i].cost = rand() % 4000;
        cout << "Приблизительная цена ($): " << arr[i].cost << endl;
    }                           
} 

void Sorting(OperSistem Array[],int Size)
{
    /*Сортировка*/
    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = i; j < Size; j++)
        {
            if (Array[i].Name > Array[j].Name)
            {

                swap(Array[i].Name, Array[j].Name);
            }
        }

    }

}


void Print(OperSistem Array[], int Size)
{
    /*Печать*/


    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                          Конфигурация програмных средств информационных систем                                        |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|   Операционная система  |    СУБД    |Мин.объем внешней памяти (MB)|  Мин.объем оперативной памяти (MB)  |   Приблизительная цена ($) |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < Size; i++)
    {
        cout << "|" << setw(25) << Array[i].Name << "|" << setw(12) << Array[i].SUBD << "|" << setw(29) << Array[i].outmem << "|" << setw(37) << Array[i].minRam << "|" << setw(28) << Array[i].cost << "|" << endl;
    }
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|Примечание: принималась цена лицензии на 8 пользователей                                                                               |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------");
}


int main()
{
    srand(time(NULL));
    const int SIZE = 3;
    setlocale(LC_ALL, "ru");
    OperSistem Array[SIZE];
    
    string arr[] = { "OS/2","Windows/NT","SCO/Unix" };
    for (int i = 0; i < SIZE; i++)
    {
                
    }

    int a;
    bool While = true;
    while (While)
    {
        cout << "\nВведите цифру для вызова функции: " << endl;
        cout << " 1 - Ввод данных с клавиатуры" << endl;
        cout << " 2 - Ввод случайным образом" << endl;
        cout << " 3 -  Сортировка " << endl;
        cout << " 4 -  Печать " << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            Vvod(Array, arr, SIZE);
            break;
            
        case 2:
            Randomly(Array, SIZE);
            break;
            
        case 3:
            Sorting(Array, SIZE);
            break;
            
        case 4:
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