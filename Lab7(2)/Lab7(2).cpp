#include "Header.h"




int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    /*-----------------*/

    OperSistem OS2{}, WindowsNT{}, SCOUnix{};
   



    /*---------------------*/
    cout << "\tВыберите действие:\n";
    cout << "1 - Ввод с экрана и запись в файл.\n";
    cout << "2 - Ввод случайным образом и запись в файл.\n";
    cout << "3 - Добавить запись в начало файла.\n";
    cout << "4 - Добавить запись в конец файла.\n";
    cout << "5 - Печать одной записи из файла по номеру.\n";
    cout << "6 - Печать всех записей из файла.\n";
    cout << "7 - Выход из программы.\n\n";
    while (true)
    {
        int a;
        cout << "Введите опцию: ";
        cin >> a;
      
        if (a == 1)
        {
            vvodIzapis(OS2, WindowsNT, SCOUnix);
        }
        else if (a == 2)
        {
            randomly(OS2, WindowsNT, SCOUnix);
            
        }
        else if (a == 3)
        {
            vnachalo();
        }
        else if (a == 4)
        {
            vkonec(OS2, WindowsNT, SCOUnix);
        }
        else if (a == 5)
        {
            int temp;
            cout << "Введите номер записи, которую хотите увидеть: ";    
            while (true)
            {
                cin >> temp;
                if (temp < 0 || temp >2)
                {
                    cout << "\n\tВыбраной вами записи не существует, попробуйте еще раз\n";

                }
                else break;
            }
            ponomery(temp);  

        }
        else if (a == 6)
        {
            vse();
        }
        else if (a == 7)
        {
            exit(0);
        }
        
        cout << endl << endl;
    }
}

