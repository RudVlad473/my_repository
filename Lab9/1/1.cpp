#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int const N = 9;
    int const M = 9;
    int mas[N][M];
    int k = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ((i < j && i + j > N - 1) || (i > j && i + j < N - 1))
            {
                mas[i][j] = k;
                k++;
            }
            else mas[i][j] = 0;
        }
        
        
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(4) << mas[i][j];
        }
        cout << endl;
    }

    
    


}   

