#include <iostream>
#include <time.h>
#include <math.h>
#include <iomanip>
using namespace std;



#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int Ar[100];   

int main(void) {
    setlocale(LC_ALL, "ru");
    int const SIZE = 200;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 21 - 11;
    }
    for (int i = 0; i < SIZE; i++)
    {
        if ((i != 0) && (i % 10 == 0))
        {
            cout << endl;
        }
        cout<< setw(4) << arr[i]  ;
        
    }
    for (int i = 0; i < SIZE; i++)
    {
        int k = 0;
        int s = 0;
        int aver = 0;
        if ((arr[i] >= 0))
        {
            k++;
            s += arr[i];

        }
        if ((arr[i] >= 0) && (k >= 2))
        {
            k++;
            s += arr[i];
            aver = s / k;
        }
            
    }
    
}


