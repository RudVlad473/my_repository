#include "Header.h"
#include <iomanip>
using namespace std;
void Vvod(OperSistem Array[], string arr[], int SIZE)
{
#ifdef DEBUG 
    cout << endl << "Дата: " << __DATE__ << endl << "Текущее время: " << __TIME__ << endl << "Полное имя файла: " << __FILE__ << endl << "Имя исполняемой функции: " << __FUNCTION__ << endl;
#endif
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
void Randomly(OperSistem arr[], int Size)
{
#ifdef DEBUG 
    cout<< endl <<"Дата: " <<__DATE__<< endl<<"Текущее время: " << __TIME__ << endl<< "Полное имя файла: " << __FILE__ << endl<<"Имя исполняемой функции: " << __FUNCTION__ << endl;
#endif
    string Array[] = { "OS/2","Windows/NT","SCO/Unix" };
    string Array2[] = { "DB2", "SQLServer", "Oracle" };
    for (int i = 0; i < Size; i++)
    {
        arr[i].Name = Array[i];
        cout << endl << "Имя ОС: " << arr[i].Name << endl;

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
void Sorting(OperSistem Array[], int Size)
{
#ifdef DEBUG 
    cout << endl << "Дата: " << __DATE__ << endl << "Текущее время: " << __TIME__ << endl << "Полное имя файла: " << __FILE__ << endl << "Имя исполняемой функции: " << __FUNCTION__ << endl;
#endif
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
#ifdef DEBUG 
    cout << endl << "Дата: " << __DATE__ << endl << "Текущее время: " << __TIME__ << endl << "Полное имя файла: " << __FILE__ << endl << "Имя исполняемой функции: " << __FUNCTION__ << endl;
#endif

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