#include <iostream>

#define strsize 255

using namespace std;

struct Opers
{
    char Name[strsize];
    char SUBD[strsize];
    int outmem;
    int minRam;
    int cost;

    Opers* next;
    Opers* prev;
};

Opers* head = NULL;
Opers* tail = NULL;

void Create(Opers newdata)
{
    Opers* temp = new Opers;
    if (head == NULL)
    {
        temp->prev = NULL;
        head = tail = temp;
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
    /*---------------*/
}

void printfromstart()
{
    Opers* temp = head;
    while (temp != NULL)
    {
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
        cout << endl << endl;
    }
    temp = temp->next;

}

void printfromend()
{
    Opers* temp = tail;
    while (temp != NULL)
    {
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
        cout << endl << endl;
    }
    temp = temp->prev;
}

void criteriafromstart(int choice)
{
    int choice = 0;

    cout << "\n--->";
    cin >> choice;

    if (choice == 1)
    {

        int t = 0;
        int k = 0;

        char tempcriteria[strsize]{};

        cout << "\nÂâåäèòå èìÿ:";

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
                cout << "\nÈñêîìûå äàííûå:\n";

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

        cout << "\nÂâåäèòå ÑÓÁÄ:";

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
                cout << "\nÈñêîìûå äàííûå:\n";

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
        cout << "\nÂâåäèòå îáúåì âíåøíåé ïàìÿòè: ";
        cin >> temp;
        Opers* temps = head;
        while (true)
        {
            if (temp == NULL) break;

            if (temp == temps->outmem)
            {
                cout << "\nÈñêîìûå äàííûå:\n";

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
        cout << "\nÂâåäèòå îáúåì îïåðàòèâíîé ïàìÿòè: ";
        cin >> temp;
        Opers* temps = head;
        while (true)
        {
            if (temp == NULL) break;

            if (temp == temps->minRam)
            {
                cout << "\nÈñêîìûå äàííûå:\n";

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
        cout << "\nÂâåäèòå öåíó: ";
        cin >> temp;
        Opers* temps = head;
        while (true)
        {
            if (temp == NULL) break;

            if (temp == temps->cost)
            {
                cout << "\nÈñêîìûå äàííûå:\n";

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




int main()
{
    std::cout << "Hello World!\n";
}

