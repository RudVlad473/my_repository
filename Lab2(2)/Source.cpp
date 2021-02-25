#include "Header.h"
#include <iomanip>
using namespace std;
void Vvod(OperSistem Array[], string arr[], int SIZE)
{
#ifdef DEBUG 
    cout << endl << "����: " << __DATE__ << endl << "������� �����: " << __TIME__ << endl << "������ ��� �����: " << __FILE__ << endl << "��� ����������� �������: " << __FUNCTION__ << endl;
#endif
        /*���� � ������*/
    for (int i = 0; i < SIZE; i++)
    {
        cout << "������� ��������� �������� � ����������: " << endl;

        cout << "\t��� ��: ";
        cin >> Array[i].Name;
        cout << endl;

        cout << "\t����: ";
        cin >> Array[i].SUBD;
        cout << endl;

        cout << "\t���.����� ������� ������ (MB): ";
        cin >> Array[i].outmem;
        cout << endl;

        cout << "\t���.����� ����������� ������ (MB): ";
        cin >> Array[i].minRam;
        cout << endl;

        cout << "\t��������������� ���� ($): ";
        cin >> Array[i].cost;
        cout << endl << endl << endl;
    }

}
void Randomly(OperSistem arr[], int Size)
{
#ifdef DEBUG 
    cout<< endl <<"����: " <<__DATE__<< endl<<"������� �����: " << __TIME__ << endl<< "������ ��� �����: " << __FILE__ << endl<<"��� ����������� �������: " << __FUNCTION__ << endl;
#endif
    string Array[] = { "OS/2","Windows/NT","SCO/Unix" };
    string Array2[] = { "DB2", "SQLServer", "Oracle" };
    for (int i = 0; i < Size; i++)
    {
        arr[i].Name = Array[i];
        cout << endl << "��� ��: " << arr[i].Name << endl;

        arr[i].SUBD = Array2[i];
        cout << "����: " << arr[i].SUBD << endl;

        arr[i].outmem = rand() % 250;
        cout << "���.����� ������� ������ (MB): " << arr[i].outmem << endl;

        arr[i].minRam = rand() % 50;
        cout << "���.����� ����������� ������ (MB): " << arr[i].minRam << endl;

        arr[i].cost = rand() % 4000;
        cout << "��������������� ���� ($): " << arr[i].cost << endl;
    }

}
void Sorting(OperSistem Array[], int Size)
{
#ifdef DEBUG 
    cout << endl << "����: " << __DATE__ << endl << "������� �����: " << __TIME__ << endl << "������ ��� �����: " << __FILE__ << endl << "��� ����������� �������: " << __FUNCTION__ << endl;
#endif
    /*����������*/
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
    /*������*/
#ifdef DEBUG 
    cout << endl << "����: " << __DATE__ << endl << "������� �����: " << __TIME__ << endl << "������ ��� �����: " << __FILE__ << endl << "��� ����������� �������: " << __FUNCTION__ << endl;
#endif

    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                          ������������ ���������� ������� �������������� ������                                        |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|   ������������ �������  |    ����    |���.����� ������� ������ (MB)|  ���.����� ����������� ������ (MB)  |   ��������������� ���� ($) |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < Size; i++)
    {
        cout << "|" << setw(25) << Array[i].Name << "|" << setw(12) << Array[i].SUBD << "|" << setw(29) << Array[i].outmem << "|" << setw(37) << Array[i].minRam << "|" << setw(28) << Array[i].cost << "|" << endl;
    }
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|����������: ����������� ���� �������� �� 8 �������������                                                                               |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------");
}