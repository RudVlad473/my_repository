
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    char a;
    int const SIZE = 10;
    bool arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 2 - 1;
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Вы курите?(Y или N): ";
    cin >> a;
    
    if (a == 'y')
    {
        for (int i = 0; i <= 5; i++)
        {
            if (arr[i] == 1)
            {
                cout << "Ваше место: №" << i + 1 << endl;
                break;
            }
            else if (i == 4 && arr[i]!=1)
            {

            }
            else
            {
                continue;
            }
        }
    }
    else if (a == 'n')
    {
        for (int i = 6; i < SIZE; i++)
        {
            if (arr[i] == 1)
            {
                cout << "Ваше место: №" << i + 1 << endl;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    else
    {
        cout << "Введен некоректный символ" << endl;
    }
    

    
    
}


