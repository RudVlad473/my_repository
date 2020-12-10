#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int const N = 10;
    int const M = 6;
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = rand() % 10;
            cout << setw(4) << arr[i][j];   
        }
        cout << endl;
    }
    cout << endl << endl << endl << endl;


}


