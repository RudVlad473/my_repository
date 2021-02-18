#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



struct OperSistem {
    
    string SUBD;
    int outmem;
    short minRam;
    int cost;

};
OperSistem OS2;
OperSistem WindowsNT;
OperSistem SCOUnix;

void Vvod()
{
    /*Ввод с экрана*/

                            /*----------------------1------------------------*/
    cout << "Введите следующие значения с клавиатуры(для OS/2): " << endl;
    cout << "СУБД: ";
    cin >> OS2.SUBD;
    cout << endl;

    cout << "Мин.объем внешней памяти (MB): ";
    cin >> OS2.outmem;
    cout << endl;

    cout << "Мин.объем оперативной памяти (MB): ";
    cin >> OS2.minRam;
    cout << endl;

    cout << "Приблизительная цена ($): ";
    cin >> OS2.cost;
    cout << endl << endl << endl;

    /*--------------------------2------------------------*/
    cout << "Введите следующие значения с клавиатуры(для Windows/NT): " << endl;
    cout << "СУБД: ";
    cin >> WindowsNT.SUBD;
    cout << endl;

    cout << "Мин.объем внешней памяти (MB): ";
    cin >> WindowsNT.outmem;
    cout << endl;

    cout << "Мин.объем оперативной памяти (MB): ";
    cin >> WindowsNT.minRam;
    cout << endl;

    cout << "Приблизительная цена ($): ";
    cin >> WindowsNT.cost;
    cout << endl << endl << endl;
    /*--------------------------3------------------------*/
    cout << "Введите следующие значения с клавиатуры(SCO/Unix): " << endl;
    cout << "СУБД: ";
    cin >> SCOUnix.SUBD;
    cout << endl;

    cout << "Мин.объем внешней памяти (MB): ";
    cin >> SCOUnix.outmem;
    cout << endl;

    cout << "Мин.объем оперативной памяти (MB): ";
    cin >> SCOUnix.minRam;
    cout << endl;

    cout << "Приблизительная цена ($): ";
    cin >> SCOUnix.cost;
    cout << endl << endl << endl;
    /*---------------------------------------------------*/
}

void Randomly() {
    /*Случайным образом*/

                                /*----------------------1------------------------*/
    cout << "Для OS/2: " << endl;
    cout << "СУБД: ";
    OS2.SUBD = "DB2";
    cout << OS2.SUBD;
    cout << endl;

    cout << "Мин.объем внешней памяти (MB): ";
    OS2.outmem = 130;
    cout << OS2.outmem;
    cout << endl;

    cout << "Мин.объем оперативной памяти (MB): ";
    OS2.minRam = 22;
    cout << OS2.minRam;
    cout << endl;

    cout << "Приблизительная цена ($): ";
    OS2.cost = 3343;
    cout << OS2.cost;
    cout << endl << endl << endl;

    /*--------------------------2------------------------*/
    cout << "Для Windows/NT: " << endl;
    cout << "СУБД: ";
    WindowsNT.SUBD = "SQLServer";
    cout << WindowsNT.SUBD;   
    cout << endl;

    cout << "Мин.объем внешней памяти (MB): ";
    WindowsNT.outmem = 230;
    cout << WindowsNT.outmem;
    cout << endl;

    cout << "Мин.объем оперативной памяти (MB): ";
    WindowsNT.minRam = 24;
    cout << WindowsNT.minRam;
    cout << endl;

    cout << "Приблизительная цена ($): ";
    WindowsNT.cost = 2685;
    cout << WindowsNT.cost;
    cout << endl << endl << endl;
    /*--------------------------3------------------------*/
    cout << "Для SCO/Unix: " << endl;
    cout << "СУБД: ";
    SCOUnix.SUBD = "Oracle";
    cout << SCOUnix.SUBD;
    cout << endl;

    cout << "Мин.объем внешней памяти (MB): ";
    SCOUnix.outmem = 110;
    cout << SCOUnix.outmem;
    cout << endl;

    cout << "Мин.объем оперативной памяти (MB): ";
    SCOUnix.minRam = 48;
    cout << SCOUnix.outmem;
    cout << endl;

    cout << "Приблизительная цена ($): ";
    SCOUnix.cost = 3745;
    cout << SCOUnix.cost;
    cout << endl << endl << endl;
    /*---------------------------------------------------*/
}

void Sorting()
{
    /*Сортировка*/
    string Arr[] = { "OS/2", "Windows/NT", "SCO/Unix" };
    std::vector<std::string> stringarray;
    std::sort(Arr, Arr + 3);
    for (int i = 0; i < 3; i++)
    {
        cout << Arr[i] << endl;
    }

}

void Print()
{
    /*Печать*/

    char OS1[5] = "OS/2", OS2[11] = "Windows/NT", OS3[9] = "SCO/Unix";
    char subd1[4] = "DB2", subd2[10] = "SQLServer", subd3[7] = "Oracle";
    int out1 = 130, out2 = 230, out3 = 110;
    int oper1 = 22, oper2 = 24, oper3 = 48;
    int price1 = 3343, price2 = 2685, price3 = 3745;
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                          Конфигурация програмных средств информационных систем                                        |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|   Операционная система  |    СУБД    |Мин.объем внешней памяти (MB)|  Мин.объем оперативной памяти (MB)  |   Приблизительная цена ($) |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| %22s  | %9s  | %26d  | %35d | %26d |\n", OS1, subd1, out1, oper1, price1);
    printf("| %22s  | %8s  | %26d  | %35d | %26d |\n", OS2, subd2, out2, oper2, price2);
    printf("| %22s  | %9s  | %26d  | %35d | %26d |\n", OS3, subd3, out3, oper3, price3);
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|Примечание: принималась цена лицензии на 8 пользователей                                                                               |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------");
}


int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "Введите цифру для вызова функции: " << endl;
    cout << " 1 - Ввод данных с клавиатуры" << endl;
    cout << " 2 - Ввод случайным образом" << endl;
    cout << " 3 -  Сортировка " << endl;
    cout << " 4 - Печать" << endl;
    cin >> a;
    if (a == 1)
    {
        Vvod();
    }
    if (a == 2)
    {
        Randomly();
    }
    if (a == 3)
    {
        Sorting();
    }
    if (a == 4)
    {
        Print();
    }


  

    

   
















    /*-----------------------------------------------*/


    return 0;
}

