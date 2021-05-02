
#include "Header.h"






int main()
{
    setlocale(LC_ALL, "ru");

    
    menu();

    
    


    while (true)
    {
        int choice=0;
        while (true)
        {
            choice = 0;
            cout << "\n--->";

            cin >> choice;
            if ((choice < 1) || (choice > 9))
            {
                cout << "\nНеверный ввод, попробуйте еще раз.\n";              
            }
            else if ((int(choice) >= 1) && (int(choice) <= 9)) break;
            
        }
            
            
        

        if (choice == 1)
        {
            Opers temporary{};
            cout << "\n\tВведите данные для добавления в список:\n";

            cout << "\nИмя: ";
            char letter;
            for (int i = 0; i < strsize; i++)
            {
                letter = getchar();
                if ((letter == '\n') && (i != 0))
                {
                    temporary.Name[i] = '\0';
                    break;
                }
                temporary.Name[i] = letter;
            }

            cout << "\nСУБД: ";
            char letter1;
            for (int i = 0; i < strsize; i++)
            {
                letter1 = getchar();
                if ((letter1 == '\n') && (i != 0))
                {
                    temporary.SUBD[i] = '\0';
                    break;
                }
                temporary.SUBD[i] = letter1;
            }

            cout << "\nОбъем внешней памяти: ";
            cin >> temporary.outmem;

            cout << "\nОбъем оперативной памяти: ";
            cin >> temporary.minRam;

            cout << "\nЦена: ";
            cin >> temporary.cost;
            Сreate(temporary);
        }
        else if (choice == 2)
        {
            Print();
        }
        else if (choice == 3)
        {
            criteriy();
        }
        else if(choice == 4)
        {
            cout << "\nВведите место, в которое надо добавить элемент: ";
            int pos;
            int check = listsize();
            while (true)
            {
                cin >> pos;
                if (pos > check)
                {
                    cout << "\nВ списке нет такой позиции, попробуйте еще раз.\n";
                    continue;
                }
                else if (pos < 0)
                {
                    cout << "\nВ списке нет такой позиции, попробуйте еще раз.\n";
                    continue;
                }
                else break;

            }
            

            Opers temporary1{};
            cout << "\n\tВведите данные для добавления в список:\n";
            /*Заполнение структуры*/
            cout << "\nИмя: ";
            char letter2;
            for (int i = 0; i < strsize; i++)
            {
                letter2 = getchar();
                if ((letter2 == '\n') && (i != 0))
                {
                    temporary1.Name[i] = '\0';
                    break;
                }
                temporary1.Name[i] = letter2;
            }

            cout << "\nСУБД: ";
            char letter3;
            for (int i = 0; i < strsize; i++)
            {
                letter3 = getchar();
                if (letter3 == '\n' && (i != 0))
                {
                    temporary1.SUBD[i] = '\0';
                    break;
                }
                temporary1.SUBD[i] = letter3;
            }

            cout << "\nОбъем внешней памяти: ";
            cin >> temporary1.outmem;

            cout << "\nОбъем оперативной памяти: ";
            cin >> temporary1.minRam;

            cout << "\nЦена: ";
            cin >> temporary1.cost;
            /*----------------*/
            Add(pos, temporary1);
        }
        else if (choice == 5)
        {
            cout << "\nВведите номер элемента, который следует удалить: ";
            int pos1;
            cin >> pos1;
            Delete(pos1);
        }
        else if (choice == 6)
        {
            cout << "\nПо какому полю вы хотите отсортировать структуру?\n";

            cout << "\n1 - Объем внешней памяти\n";
            cout << "2 - Объем оперативной памяти\n";
            cout << "3 - Цена\n";
            cout << "4 - Имя\n";
            cout << "5 - СУБД\n";
            cout << "---> ";
            int choice3 = 0;
            cin >> choice3;
            if (choice3 == 1)
            {
                Sorting(choice3);
            }
            else if (choice3 == 2)
            {

            }
            else if (choice3 == 3)
            {

            }

        }
        else if (choice == 7)
        {
            infile();
        }
        else if (choice == 8)
        {
            Read();
        }
        else if (choice == 9) exit(0);
        else if (choice == 10) menu();

        
        
        


    }



    
    

}

