#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int const SIZE = 20;
    cout << "Вставить в массив(размер массива ="<< SIZE << ") n элементов (1) или удалить из массива n элементов (2): "; 
    int d;
    cin >> d;
    int n;
    int arr[SIZE];
    for (int j = 0; j < SIZE; j++)
    {
        arr[j] = rand() % 101;
    }
    if (d == 1)
    {
     
        cout << "Введите кол-во элементов , которое хотите вставить в массив: ";
        cin >> n;
        int i = 0;
        int pos, elem;
        while (i < n)
        {
            cout << "Позиция элемента: ";
            cin >> pos;
            cout << "Элемент: ";
            cin >> elem;
            arr[pos-1] = elem;
            cout << "Элемент №" << pos << " = " << elem << endl << endl;
            i++;
        }
        for (int k = 0; k < SIZE; k++)
        {
            cout << arr[k] << " ";
        }
     
    }
    if (d == 2)
    {
        int n1, posit, m=0;
        cout << "Введите кол-во элементов , которое хотите удалить и позицию, с которой следует начать удаление: ";
        cin >> n1;
        cin >> posit;
        while (m< n1)
        {
            arr[posit+m] = arr[posit + 1];
            m++;
        }
        for (int k = 0; k < SIZE; k++)
        {
            cout << arr[k] << " ";
        }
        


    }
}


