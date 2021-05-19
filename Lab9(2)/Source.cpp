#include "Header.h"

Opers* head = NULL;
Opers* tail = NULL;



void Create(Opers newdata)
{
    Opers* temp = new Opers;


    

    if (head == NULL)
    {
        temp->prev = NULL;
        head = temp;
        tail = head;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    /*-------------*/
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
    temp->next = NULL;
    /*---------------*/
}

void printfromstart()
{
    Opers* temp;
    temp = head;
    if (temp == NULL)
    {
        cout << "\n������ ������.\n";
        return;
    }
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                          ������������ ���������� ������� �������������� ������                                        |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|   ������������ �������  |    ����    |���.����� ������� ������ (MB)|  ���.����� ����������� ������ (MB)  |   ��������������� ���� ($) |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    while (true)
    {
        if (temp == NULL) break;
        cout << "|" << setw(25) << temp->Name << "|" << setw(12) << temp->SUBD << "|" << setw(29) << temp->outmem << "|" << setw(37) << temp->minRam << "|" << setw(28) << temp->cost << "|" << endl;
        printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");

        temp = temp->next;
        

    }
    cout << endl << endl;
        
   
    

}

void printfromend()
{
    Opers* temp = tail;
    if (temp == NULL)
    {
        cout << "\n������ ������.\n";
        return;
    }
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                          ������������ ���������� ������� �������������� ������                                        |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|   ������������ �������  |    ����    |���.����� ������� ������ (MB)|  ���.����� ����������� ������ (MB)  |   ��������������� ���� ($) |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    while (true)
    {
        if (temp == NULL) break;
        
        cout << "|" << setw(25) << temp->Name << "|" << setw(12) << temp->SUBD << "|" << setw(29) << temp->outmem << "|" << setw(37) << temp->minRam << "|" << setw(28) << temp->cost << "|" << endl;
        printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
       
        temp = temp->prev;
        
        
    }
    cout << endl << endl;
}

void criteriafromend(int choice)
{


    if (choice == 1)
        {
            Opers* temp1 = tail;

            int c;

            char tempcriteria[strsize]{};

            cout << "\n������� ���: ";


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
                    cout << "\n������� ������:\n";

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

                temp1 = temp1->prev;
            }


            temp1 = nullptr;
        }
    else if (choice == 2)
        {
            Opers* temp2 = tail;

            int c;

            char tempcriteria[strsize]{};

            cout << "\n������� ����: ";


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
                    cout << "\n������� ������:\n";

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

                temp2 = temp2->prev;
            }

            temp2 = nullptr;
        }
    else if (choice == 3)
        {
            int temp = 0;
            cout << "\n������� ����� ������� ������: ";
            cin >> temp;
            Opers* temps = tail;
            while (true)
            {
                if (temps == NULL) break;

                if (temp == temps->outmem)
                {
                    cout << "\n������� ������:\n";

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
                temps = temps->prev;
            }
            temps = nullptr;
        }
    else if (choice == 4)
        {
            int temp = 0;
            cout << "\n������� ����� ����������� ������: ";
            cin >> temp;
            Opers* temps2 = tail;
            while (true)
            {
                if (temps2 == NULL) break;

                if (temp == temps2->minRam)
                {
                    cout << "\n������� ������:\n";

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
                temps2 = temps2->prev;
            }
            temps2 = nullptr;
        }
    else if (choice == 5)
        {
            int temp = 0;
            cout << "\n������� ����: ";
            cin >> temp;
            Opers* temps3 = tail;
            while (true)
            {
                if (temps3 == NULL) break;

                if (temp == temps3->cost)
                {
                    cout << "\n������� ������:\n";

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
                temps3 = temps3->prev;
            }
            temps3 = nullptr;
        }


}

void criteriafromstart(int choice)
{
    if (choice == 1)
    {
        Opers* temp1 = head;

        int c;

        char tempcriteria[strsize]{};

        cout << "\n������� ���: ";


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
                cout << "\n������� ������:\n";

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

        cout << "\n������� ����: ";


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
                cout << "\n������� ������:\n";

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
        cout << "\n������� ����� ������� ������: ";
        cin >> temp;
        Opers* temps = head;
        while (true)
        {
            if (temps == NULL) break;

            if (temp == temps->outmem)
            {
                cout << "\n������� ������:\n";

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
        cout << "\n������� ����� ����������� ������: ";
        cin >> temp;
        Opers* temps2 = head;
        while (true)
        {
            if (temps2 == NULL) break;

            if (temp == temps2->minRam)
            {
                cout << "\n������� ������:\n";

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
        cout << "\n������� ����: ";
        cin >> temp;
        Opers* temps3 = head;
        while (true)
        {
            if (temps3 == NULL) break;

            if (temp == temps3->cost)
            {
                cout << "\n������� ������:\n";

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

void Add(int pos, Opers newdata)
{
    Opers* temp = new Opers;
    if (pos == 0)
    {
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
        head = temp;
    }
    else {
        Opers* temp_pos = head;
        for (int i = 1; i < (pos - 1); i++)
            temp_pos = temp_pos->next;
        if (temp_pos->next == NULL)
        {
            tail->next = temp;
            temp->prev = tail;
            temp->next = NULL;
            tail = temp;
        }
        else
        {
            temp->next = temp_pos->next;
            temp_pos->next = temp;
            temp->next->prev = temp;
            temp->prev = temp_pos;
        }
    }
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


}

void Delete(int pos)
{
    Opers* temp_pos = head;

    if (pos == 1)
    {
        head = head->next;

        delete temp_pos;
    }
    else
    {
        for (int i = 1; i < (pos-1 ); i++)
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

void Sorting(int choice3)
{
    if (choice3 == 1)
    {
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
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
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
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
        Opers* left = head;
        Opers* right = head->next;

        Opers* temp = new Opers;

        while (left->next)
        {
            while (right)
            {
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
    fopen_s(&f, "file.txt", "w");
    if (f == NULL) return;
    
    Opers* temp = head;

    while (temp != NULL)
    {
        for (int i = 0; i < strsize; i++)
        {
            fwrite(&temp->Name[i], sizeof(char), 1, f);
            if (temp->Name[i] == '\0') break;

        }
        fputc('\n', f);

        for (int i = 0; i < strsize; i++)
        {
            fwrite(&temp->SUBD[i], sizeof(char), 1, f);
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
    if (f == NULL) return;
    Opers temp{};

    while (true)
    {

        for (int i = 0; i < strsize; i++)
        {
            
            fread(&temp.Name[i], sizeof(char), 1, f);
            if (temp.Name[i] == '\n' && i == 0)
            {
                temp.Name[i] = 0;
                i--;
                continue;
            }
            else if (temp.Name[i] == '\n' && i !=0)
            {
                temp.Name[i] = '\0';
                break;
            }
            else if (temp.Name[i] == '\0') break;

        }

        for (int i = 0; i < strsize; i++)
        {
            
            fread(&temp.SUBD[i], sizeof(char), 1, f);
            if (temp.SUBD[i] == '\n' && i == 0)
            {
                temp.SUBD[i] = 0;
                i--;
                
                continue;
            }
            else if (temp.SUBD[i] == '\n' && i != 0)
            {
                temp.SUBD[i] = '\0';
                
                break;
            }
            else if (temp.SUBD[i] == '\0') break;
        }



        fscanf_s(f, "%d", &temp.outmem);

        fscanf_s(f, "%d", &temp.minRam);

        fscanf_s(f, "%d", &temp.cost);


        if (feof(f)) break;
        Create(temp);

    }
    fclose(f);
}

int listsize()
{
    Opers* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;

    }
    return count;
}

void menu()
{
    cout << "\n\t�������� �����:\n";
    cout << "1 - �������� ������ \n";
    cout << "2 - ������ ������ � ������\n";
    cout << "3 - ������ ������ � �����\n";
    cout << "4 - ����� �� �������� � ������ ������\n";
    cout << "5 - ����� �� �������� � ����� ������.\n";
    cout << "6 - ���������� �������� (� ����� �������� �����)\n";
    cout << "7 - �������� ������ ��������\n";
    cout << "8 - ����������\n";
    cout << "9 - ������ ������ ������ � ����\n";
    cout << "10 - �������� ������ ������ �� �����\n";
    cout << "11 - ����\n";
    cout << "12 - �����\n";
}