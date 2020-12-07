#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;



int main()
{

			setlocale(LC_ALL, "ru");
			int const SIZE = 200;
			
			int arr[SIZE];
			/*основной массив*/
			for (int i = 0; i < SIZE; i++)
			{
				arr[i] = rand() % 21 - 11;
			}
			for (int i = 0; i < SIZE; i++)
			{
				cout << arr[i] << " ";
				if (i == 0)
				{
					continue;
				}
				if (i % 20 == 0)
				{
					cout << endl;
				}
			}
			/*доп массив*/
			int const SIZE2 = 200;
			int arr2[SIZE2];
			int j = 0;
			
			cout << endl<< endl << endl;
			for (int j = 0; j < SIZE2; j++)
			{
				cout << arr2[j] << " ";
				if ((j % 20 == 0) && (j != 0))
				{
					cout << endl;
				}
			}
			cout << endl<< endl<< endl<< endl;
			/**/
			int summa = 0;
			int aver = 0;
			int k = 0;
			for (int i = 0; i < SIZE; i++)
			{
				if ((arr[i]>=0)&&(arr[i+1]<0))
				{
					
					k++;
					summa += arr[i];					
					aver = summa / k;					
					if (k >= 2)
					{
						for (int i2 = i; arr[i2] > 0; arr[i2] = arr[i2 - 1])
						{
							if (arr[i] < aver)
							{
								arr[i] = aver;
								arr2[i] = arr[i];
							}
						}
						summa = 0;
						aver = 0;
						k = 0;
					}

				}
				if (arr[i] >= 0)
				{
					k++;
					summa += arr[i];
					
					
				}
				if (arr[i] < 0)
				{
					arr2[i] = arr[i];
				}
				
			}
			/*вывод нового массива*/
			j = 0;
			for (; j < SIZE2; j++)
			{
				cout << arr2[j] << " ";
				if ((j % 20 == 0) && (j != 0))
				{
					cout << endl;
				}
			}


}


