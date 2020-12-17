#include <chrono>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;



void Oddevensort(int arr1[], const int SIZE1)
{
	
	int z = 0;
	double sum = 0;
	while (z <= 100)
	{
		auto start = chrono::high_resolution_clock::now();
		for (size_t i = 0; i < SIZE1; i++)
		{
			for (size_t j = (i % 2) ? 0 : 1; j + 1 < SIZE1; j += 2)
			{
				if (arr1[j] > arr1[j + 1])
				{
					swap(arr1[j], arr1[j + 1]);

				}
			}
		}
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;
		
		z++;
		sum += duration.count();
	}
	cout << "Время исполнения сортировки: " << setw(6)<<sum / 100 << " s" << endl;
}


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	cout << "---------------------------------------------------" << endl;
	cout << "|            Расчетно-графическое задание         |" << endl;
	cout << "|      Сравнительный анализ методов сортировки    |" << endl;
	cout << "|             Четная-нечетная сортировка          |" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "          Сортировка неупорядоченного массива      " << endl;
	
	
	int const SIZE1 = 45;
	int arr1[SIZE1];
	for (int i = 0; i < SIZE1; i++)
	{
		arr1[i] = rand() % 50;
	}
	cout << "       Неупорядоченый массив :  " << endl;
	for (int i = 0; i < SIZE1; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	Oddevensort(arr1, SIZE1);
	cout << "       Упорядоченый массив:  " << endl;
	for (int i = 0; i < SIZE1; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "          Сортировка упорядоченного массива        " << endl;
	int arr2[SIZE1];
	cout << "       Упорядоченый массив:                                " << endl;
	for (int i = 0; i < SIZE1; i++)
	{
		arr2[i] = arr1[i];
	}
	for (int i = 0; i < SIZE1; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	Oddevensort(arr2, SIZE1);
	for (int i = 0; i < SIZE1; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl << endl;



	cout << "--------------------------------------------------------------" << endl;
	cout << "          Сортировка упорядоченного в обратном порядке массива        " << endl;
	int arr3[SIZE1];
	for (int i = SIZE1 - 1; i >= 0; i--)
	{
		arr3[i] = arr1[i];
	}
	cout << "          Массив , упорядоченный в обратном порядке:        " << endl;
	for (int i =SIZE1 - 1; i >= 0; i--)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	Oddevensort(arr3, SIZE1);
	for (int i = 0; i < SIZE1; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	cout << "--------------------------------------------------------------" << endl;

	




}
