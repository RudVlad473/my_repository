#include "Header.h"
using namespace std;

Opers* head = NULL;

Opers* tail = NULL;

void menu()
{
    cout << "\nВыберите функцию:\n";
    cout << "1 - Создание списка\n";
    cout << "2 - Печать списка\n";
    cout << "3 - Поиск по критерию\n";
    cout << "4 - Добавление элемента в заданное место\n";
    cout << "5 - Удаление элемента по номеру\n";
    cout << "6 - Сортировка\n";
    cout << "7 - Запись списка в файл\n";
    cout << "8 - Создание нового списка из файла\n";
    cout << "9 - Выход\n";
    cout << "10 - Меню\n";
}

void Сreate(Opers newdata)
{
    Opers* temp = new Opers;

    temp->next = NULL;

    /*Добавление данных в список*/
    for (int i = 0; i < strsize; i++)
    {

        temp->Name[i] = newdata.Name[i];
        if (newdata.Name[i] == '\0') break;
    }
    for (int i = 0; i < strsize; i++)
    {
        temp->SUBD[i] = newdata.SUBD[i];
        if (newdata.SUBD[i] == '\0') break;
    }
    temp->outmem = newdata.outmem;
    temp->minRam = newdata.minRam;
    temp->cost = newdata.cost;
    /*-----------------------*/

    if (head == NULL)
    {
        head = temp;
        tail = head;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }


    //delete temp;
    //temp = nullptr;
}

void Print()
{
    Opers* temp;
    temp = head;
    if (temp == NULL)
    {
        cout << "\nСписок пустой\n";
        return;
    }
    do
    {
        cout << "\n\t Данные:\n";

        for (int i = 0; i < strsize; i++)
        {
            if (temp->Name[i] == '\0') break;
            cout << temp->Name[i];
        }
        cout << endl;
        for (int i = 0; i < strsize; i++)
        {
            if (temp->SUBD[i] == '\0') break;
            cout << temp->SUBD[i];
        }
        cout << endl;
        cout << temp->outmem << endl;
        cout << temp->minRam << endl;
        cout << temp->cost << endl;
        temp = temp->next;
        cout << endl << endl << endl;
    } while (temp != NULL);
}

void Add(int pos, Opers newdata)
{
    Opers* temp = new Opers;

    if (pos == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        Opers* temp_pos = head;
        for (int i = 1; i < (pos - 1); i++)
        {
            temp_pos = temp_pos->next;

        }
        temp->next = temp_pos->next;
        temp_pos->next = temp;
    }

    for (int i = 0; i < strsize; i++)
    {
        temp->Name[i] = newdata.Name[i];
        if (temp->Name[i] == '\0') break;
    }
    for (int i = 0; i < strsize; i++)
    {
        
        temp->SUBD[i] = newdata.SUBD[i];
        if (temp->SUBD[i] == '\0') break;
    }
    temp->outmem = newdata.outmem;
    temp->minRam = newdata.minRam;
    temp->cost = newdata.cost;
}

void Delete(int pos)
{
    Opers* temp_pos = head;   

    if (pos == 0) 
    {	        
        head = head->next;   
                                
        delete temp_pos;         
    }
    else
    {			
        for (int i = 1; i < (pos - 1); i++)
        {
            temp_pos = temp_pos->next;
        }

        Opers* temp = temp_pos->next; 

        if (temp->next == NULL)     
        {
            temp_pos->next = NULL;
        } 
        else
        {
            temp_pos->next = temp->next;
        } 
                                        
        delete temp;  
    }



    
}

void criteriy()
{

    cout << "\nВыберите критерий, по которому следует вести поиск:\n";
    cout << "\t1 - Имя\n";
    cout << "\t2 - СУБД\n";
    cout << "\t3 - Объем внешней памяти\n";
    cout << "\t4 - Объем оперативной памяти\n";
    cout << "\t5 - Цена\n";

    int choice = 0;

    cout << "\n--->";
    cin >> choice;

    if (choice == 1)
    {
        Opers* temp1 = head;

        int c;

        char tempcriteria[strsize]{};

        cout << "\nВведите имя: ";


        for (int i = 0; i < strsize; i++)
        {

            cin.get(tempcriteria[i]);
            if ((tempcriteria[i] == '\n') && (i == 0))
            {
                tempcriteria[i] = 0;
                i--;
                continue;
            }
            else if ((tempcriteria[i] == '\n') && (i != 0))
            {
                tempcriteria[i] = '\0';
                break;
            }

        }
           
        while (true)
        {
            


            if (temp1 == NULL) break;
            
            c = 0;

            for (int i = 0; i < strsize; i++)
            {
                if (tempcriteria[i] == '\0')
                {

                    break;
                }
                else if (tempcriteria[i] == temp1->Name[i]) c++;
                
                else break;
            }

            if ((strlen(tempcriteria) == c))
            {
                cout << "\nИскомые данные:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temp1->Name[i] == '\0') break;
                    cout << temp1->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temp1->SUBD[i] == '\0') break;
                    cout << temp1->SUBD[i];
                }
                cout << endl;
                cout << temp1->outmem << endl;
                cout << temp1->minRam << endl;
                cout << temp1->cost << endl;

                cout << endl << endl;
            }

            temp1 = temp1->next;
        }

        
        temp1 = nullptr;
    }
    else if (choice == 2)
    {
        Opers* temp2 = head;

        int c;

        char tempcriteria[strsize]{};

        cout << "\nВведите СУБД: ";


        for (int i = 0; i < strsize; i++)
        {

            cin.get(tempcriteria[i]);
            if ((tempcriteria[i] == '\n') && (i == 0))
            {
                tempcriteria[i] = 0;
                i--;
                continue;
            }
            else if ((tempcriteria[i] == '\n') && (i != 0))
            {
                tempcriteria[i] = '\0';
                break;
            }

        }








        while (true)
        {



            if (temp2 == NULL) break;

            c = 0;

            for (int i = 0; i < strsize; i++)
            {
                if (tempcriteria[i] == '\0')
                {

                    break;
                }
                else if (tempcriteria[i] == temp2->SUBD[i]) c++;

                else break;
            }

            if ((strlen(tempcriteria) == c))
            {
                cout << "\nИскомые данные:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temp2->Name[i] == '\0') break;
                    cout << temp2->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temp2->SUBD[i] == '\0') break;
                    cout << temp2->SUBD[i];
                }
                cout << endl;
                cout << temp2->outmem << endl;
                cout << temp2->minRam << endl;
                cout << temp2->cost << endl;

                cout << endl << endl;
            }

            temp2 = temp2->next;
        }

        temp2 = nullptr;
    }
    else if (choice == 3)
    {
        int temp = 0;
        cout << "\nВведите объем внешней памяти: ";
        cin >> temp;
        Opers* temps = head;
        while (true)
        {
            if (temps == NULL) break;
            
            if (temp == temps->outmem)
            {
                cout << "\nИскомые данные:\n";

                for (int i = 0; i < strsize; i++)
                {
                    if (temps->Name[i] == '\0') break;
                    cout << temps->Name[i];
                }
                cout << endl;
                for (int i = 0; i < strsize; i++)
                {
                    if (temps->SUBD[i] == '\0') break;
                    cout << temps->SUBD[i];
                }
                cout << endl;
                cout << temps->outmem << endl;
                cout << temps->minRam << endl;
                cout << temps->cost << endl;

                cout << endl << endl;
            }
            temps = temps->next;
        }
        temps = nullptr;
    }
    else if (choice == 4)
    {
    int temp = 0;
    cout << "\nВведите объем оперативной памяти: ";
    cin >> temp;
    Opers* temps2 = head;
    while (true)
    {
        if (temps2 == NULL) break;

        if (temp == temps2->minRam)
        {
            cout << "\nИскомые данные:\n";

            for (int i = 0; i < strsize; i++)
            {
                if (temps2->Name[i] == '\0') break;
                cout << temps2->Name[i];
            }
            cout << endl;
            for (int i = 0; i < strsize; i++)
            {
                if (temps2->SUBD[i] == '\0') break;
                cout << temps2->SUBD[i];
            }
            cout << endl;
            cout << temps2->outmem << endl;
            cout << temps2->minRam << endl;
            cout << temps2->cost << endl;

            cout << endl << endl;
        }
        temps2 = temps2->next;
    }
    temps2 = nullptr;
    }
    else if (choice == 5)
    {
    int temp = 0;
    cout << "\nВведите цену: ";
    cin >> temp;
    Opers* temps3 = head;
    while (true)
    {
        if (temps3 == NULL) break;

        if (temp == temps3->cost)
        {
            cout << "\nИскомые данные:\n";

            for (int i = 0; i < strsize; i++)
            {
                if (temps3->Name[i] == '\0') break;
                cout << temps3->Name[i];
            }
            cout << endl;
            for (int i = 0; i < strsize; i++)
            {
                if (temps3->SUBD[i] == '\0') break;
                cout << temps3->SUBD[i];
            }
            cout << endl;
            cout << temps3->outmem << endl;
            cout << temps3->minRam << endl;
            cout << temps3->cost << endl;

            cout << endl << endl;
        }
        temps3 = temps3->next;
    }
    temps3 = nullptr;
    }
}

int listsize()
{
    Opers* temp = head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
       
    }
    return count;
}

void Sorting(int choice3)
{
    if (choice3 == 1)
    {
        Opers* left = head;                 //Первый элемент — это пусть будет голова
        Opers* right = head->next;          //Второй элемент — это пусть будет следующий за головой элемент

        Opers* temp = new Opers;              //Временное звено для хранения переставляемого всех значений переставляемого звена

        while (left->next)
        {                 //Обходим по всем звеньям, за исключением крайнего правого
            while (right)
            {              //Обходим по всем звеньям, включая крайний правый (по всем относительно первого левого на текущий момент)
                if ((left->outmem) > (right->outmem))
                {
                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
    else if (choice3 == 2)
    {
        Opers* left = head;                 //Первый элемент — это пусть будет голова
        Opers* right = head->next;          //Второй элемент — это пусть будет следующий за головой элемент

        Opers* temp = new Opers;              //Временное звено для хранения переставляемого всех значений переставляемого звена

        while (left->next)
        {                 //Обходим по всем звеньям, за исключением крайнего правого
            while (right)
            {              //Обходим по всем звеньям, включая крайний правый (по всем относительно первого левого на текущий момент)
                if ((left->minRam) > (right->minRam))
                {
                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
    else if (choice3 == 3)
    {
        Opers* left = head;                 //Первый элемент — это пусть будет голова
        Opers* right = head->next;          //Второй элемент — это пусть будет следующий за головой элемент

        Opers* temp = new Opers;              //Временное звено для хранения переставляемого всех значений переставляемого звена

        while (left->next)
        {                 //Обходим по всем звеньям, за исключением крайнего правого
            while (right)
            {              //Обходим по всем звеньям, включая крайний правый (по всем относительно первого левого на текущий момент)
                if ((left->cost) > (right->cost))
                {
                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
    else if (choice3 == 4)
    {
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
                if ((strlen(left->Name)) > (strlen(right->Name)))
                {

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
    else if (choice3 == 5)
    {
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
                if ((strlen(left->SUBD)) > (strlen(right->SUBD)))
                {

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->Name[i] = left->Name[i];
                        left->Name[i] = right->Name[i];
                        right->Name[i] = temp->Name[i];
                        if (temp->Name[i] == '\0') break;
                    }

                    for (int i = 0; i < strsize; i++)
                    {
                        temp->SUBD[i] = left->SUBD[i];
                        left->SUBD[i] = right->SUBD[i];
                        right->SUBD[i] = temp->SUBD[i];
                        if (temp->SUBD[i] == '\0') break;
                    }

                    temp->outmem = left->outmem;
                    left->outmem = right->outmem;
                    right->outmem = temp->outmem;

                    temp->minRam = left->minRam;
                    left->minRam = right->minRam;
                    right->minRam = temp->minRam;

                    temp->cost = left->cost;
                    left->cost = right->cost;
                    right->cost = temp->cost;




                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
}

void infile()
{
    FILE* f;
    fopen_s(&f, "file.txt", "wt");
    if (f == NULL)
    {
        return;
    }
    Opers* temp = head;
    while (temp != NULL)
    {
        for (int i = 0; i < strsize; i++)
        {
            fwrite(&temp->Name[i], 1, 1, f);
            if (temp->Name[i] == '\0') break;

        }
        fputc('\n', f);
        for (int i = 0; i < strsize; i++)
        {
            fwrite(&temp->SUBD[i], 1, 1, f);
            if (temp->SUBD[i] == '\0') break;
        }
        fputc('\n', f);
        fprintf(f, "%d", temp->outmem);
        fputc('\n', f);
        fprintf(f, "%d", temp->minRam);
        fputc('\n', f);
        fprintf(f, "%d", temp->cost);
        fputc('\n', f);
        fputc('\n', f);
        temp = temp->next;
    }
    fclose(f);
}

void Read()
{
    FILE* f;
    fopen_s(&f, "file.txt", "r");
    if (f == NULL)
    {
        return;
    }
    
    while (true)
    {
        Opers temp{};
        
        
        for (int i = 0; i < strsize; i++)
        {
            fread(&temp.Name[i], 1, 1, f);
            if (temp.Name[i] == '\0') break;

        }
        
        for (int i = 0; i < strsize; i++)
        {
            fread(&temp.SUBD[i], 1, 1, f);
            if (temp.SUBD[i] == '\0') break;
        }
        
        
        
        fscanf_s(f, "%d", &temp.outmem);
        
        fscanf_s(f, "%d", &temp.minRam);
        
        fscanf_s(f, "%d",&temp.cost);
        if (feof(f)) break;
        Сreate(temp);
        
    }
    fclose(f);
}


