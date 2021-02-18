#include <string>
#include <iostream>
using namespace std;
struct OperSistem {
    
    string SUBD;
    int outmem;
    short minRam;
    int cost;

};
int main()
{
    OperSistem OS2;
    OperSistem WindowsNT;
    OperSistem SCOUnix;
    
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
    cout << endl<<endl<<endl;

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
    cout << endl << endl<<endl;
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

    /*Случайным образом*/

                                /*----------------------1------------------------*/
    cout << "Для OS/2: " << endl;
    cout << "СУБД: ";
    OS2.SUBD= "DB2";
    cout << endl;

    cout << "Мин.объем внешней памяти (MB): ";
    OS2.outmem = 130;
    cout << endl;

    cout << "Мин.объем оперативной памяти (MB): ";
    OS2.minRam = 22;
    cout << endl;

    cout << "Приблизительная цена ($): ";
    OS2.cost = 3343;
    cout << endl<<endl<<endl;

                               /*--------------------------2------------------------*/
    cout << "Для Windows/NT: " << endl;
    cout << "СУБД: ";
    WindowsNT.SUBD ="SQLServer";
    cout << endl;

    cout << "Мин.объем внешней памяти (MB): ";
    WindowsNT.outmem = 230;
    cout << endl;

    cout << "Мин.объем оперативной памяти (MB): ";
    WindowsNT.minRam= 24;
    cout << endl;

    cout << "Приблизительная цена ($): ";
    WindowsNT.cost= 2685;
    cout << endl << endl<<endl;
                                /*--------------------------3------------------------*/
    cout << "Для SCO/Unix: " << endl;
    cout << "СУБД: ";
    SCOUnix.SUBD ="Oracle";
    cout << endl;

    cout << "Мин.объем внешней памяти (MB): ";
    SCOUnix.outmem;
    cout << endl;

    cout << "Мин.объем оперативной памяти (MB): ";
    SCOUnix.minRam;
    cout << endl;

    cout << "Приблизительная цена ($): ";
    SCOUnix.cost;
    cout << endl << endl << endl;
                                 /*---------------------------------------------------*/



    return 0;
}

