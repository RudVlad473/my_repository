#include <iostream>
#include <time.h>
using namespace std;



int main()
{

			setlocale(LC_ALL, "ru");
			int const SIZE = 200;
			srand(time(NULL));
			int arr[SIZE];
			int sum = 0, sredarif;
			for (int i = 0; i < SIZE; i++)
			{
				arr[i] = rand() % 20;
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
			for (int i = 0; i < SIZE; i++)
			{
				sum = sum + arr[i];
			}
			sredarif = sum / 200;
			cout << endl << endl << "Сумма элементов массива = " << sum << endl << "Среднее арифметическое элементов массива = " << sredarif << endl << endl;
			for (int i = 0; i < SIZE; i++)
			{
				if ((arr[i] >= 0) && (arr[i + 1] >= 0) && (arr[i] < sredarif))
				{
					arr[i] = sredarif;
				}
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


}


