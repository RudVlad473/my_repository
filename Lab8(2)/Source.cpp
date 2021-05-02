#include "Header.h"
Opers* head = NULL;

Opers* tail = NULL;

void menu()
{
    cout << "\n�������� �������:\n";
    cout << "1 - �������� ������\n";
    cout << "2 - ������ ������\n";
    cout << "3 - ����� �� ��������\n";
    cout << "4 - ���������� �������� � �������� �����\n";
    cout << "5 - �������� �������� �� ������\n";
    cout << "6 - ����������\n";
    cout << "7 - ������ ������ � ����\n";
    cout << "8 - �������� ������ ������ �� �����\n";
    cout << "9 - �����\n";
    cout << "10 - ����\n";
}

void �reate(Opers newdata)
{
    Opers* temp = new Opers;

    temp->next = NULL;

    /*���������� ������ � ������*/
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
        cout << "\n������ ������\n";
        return;
    }
    do
    {
        cout << "\n\t ������:\n";

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
        for (int i = 0; i < pos - 2; i++)
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
        for (int i = 0; i < pos - 1; i++)
        {
            temp_pos = temp_pos->next;
        }

        Opers* temp = temp_pos->next; //��������� �� ��������� �������

        if (temp->next == NULL)     // ���������
        {
            temp_pos->next = NULL;
        } //NULL  � ������������� �������
        else
        {
            temp_pos->next = temp->next;
        } 
                                        
        delete temp;  
    }



    
}

void criteriy()
{

    cout << "\n�������� ��������, �� �������� ������� ����� �����:\n";
    cout << "\t1 - ���\n";
    cout << "\t2 - ����\n";
    cout << "\t3 - ����� ������� ������\n";
    cout << "\t4 - ����� ����������� ������\n";
    cout << "\t5 - ����\n";

    int choice = 0;

    cout << "\n--->";
    cin >> choice;

    if (choice == 1)
    {

        int t = 0;
        int k = 0;

        char tempcriteria[strsize]{};

        cout << "\n������� ���:";

        for (int i = 0; i < strsize; i++)
        {
            tempcriteria[i] = getchar();
            t++;

            if ((tempcriteria[i] == '\n') && (i != 0))
            {
                tempcriteria[i] = '\0';

                break;
            }

        }

        Opers* temp = head;
        while (true)
        {
            if (temp == NULL) break;
            for (; k < strsize;)
            {
                if (tempcriteria[k] == temp->Name[k]) k++;
                else if (temp->Name[k] == '\0') break;
                else break;
            }

            if ((t == k) && (t + k != 0))
            {
                cout << "\n������� ������:\n";

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

                cout << endl << endl;
            }

            temp = temp->next;
        }

    }
    else if (choice == 2)
    {
        int t = 0;
        int k = 0;

        char tempcriteria[strsize]{};

        cout << "\n������� ����:";

        for (int i = 0; i < strsize; i++)
        {
            tempcriteria[i] = getchar();
            t++;

            if ((tempcriteria[i] == '\n') && (i != 0))
            {
                tempcriteria[i] = '\0';

                break;
            }

        }

        Opers* temp = head;
        while (true)
        {
            if (temp == NULL) break;
            for (; k < strsize;)
            {
                if (tempcriteria[k] == temp->SUBD[k]) k++;
                else if (temp->SUBD[k] == '\0') break;
                else break;
            }

            if ((t == k) && (t + k != 0))
            {
                cout << "\n������� ������:\n";

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

                cout << endl << endl;
            }
            temp = temp->next;
        }


    }
    else if (choice == 3)
    {
        int temp = 0;
        cout << "\n������� ����� ������� ������: ";
        cin >> temp;
        Opers* temps = head;
        while (true)
        {
            if (temp == NULL) break;
            
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
        
    }
    else if (choice == 4)
    {
    int temp = 0;
    cout << "\n������� ����� ����������� ������: ";
    cin >> temp;
    Opers* temps = head;
    while (true)
    {
        if (temp == NULL) break;

        if (temp == temps->minRam)
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
    }
    else if (choice == 5)
    {
    int temp = 0;
    cout << "\n������� ����: ";
    cin >> temp;
    Opers* temps = head;
    while (true)
    {
        if (temp == NULL) break;

        if (temp == temps->cost)
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
        Opers* left = head;                 //������ ������� � ��� ����� ����� ������
        Opers* right = head->next;          //������ ������� � ��� ����� ����� ��������� �� ������� �������

        Opers* temp = new Opers;              //��������� ����� ��� �������� ��������������� ���� �������� ��������������� �����

        while (left->next)
        {                 //������� �� ���� �������, �� ����������� �������� �������
            while (right)
            {              //������� �� ���� �������, ������� ������� ������ (�� ���� ������������ ������� ������ �� ������� ������)
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
        Opers* left = head;                 //������ ������� � ��� ����� ����� ������
        Opers* right = head->next;          //������ ������� � ��� ����� ����� ��������� �� ������� �������

        Opers* temp = new Opers;              //��������� ����� ��� �������� ��������������� ���� �������� ��������������� �����

        while (left->next)
        {                 //������� �� ���� �������, �� ����������� �������� �������
            while (right)
            {              //������� �� ���� �������, ������� ������� ������ (�� ���� ������������ ������� ������ �� ������� ������)
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
        Opers* left = head;                 //������ ������� � ��� ����� ����� ������
        Opers* right = head->next;          //������ ������� � ��� ����� ����� ��������� �� ������� �������

        Opers* temp = new Opers;              //��������� ����� ��� �������� ��������������� ���� �������� ��������������� �����

        while (left->next)
        {                 //������� �� ���� �������, �� ����������� �������� �������
            while (right)
            {              //������� �� ���� �������, ������� ������� ������ (�� ���� ������������ ������� ������ �� ������� ������)
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
        �reate(temp);
        
    }
    fclose(f);
}


