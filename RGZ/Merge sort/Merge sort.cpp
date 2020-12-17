#include <chrono>
#include <iostream>
#include <iomanip>
using namespace std;
int const SIZE1 = 20;
int arrbuff[SIZE1];
int const L = 100;

int* merge_sort(int* up, int* down, unsigned int left, unsigned int right)
{
	
	
	
		
		if (left == right)
		{
			down[left] = up[left];
			return down;
		}

		unsigned int middle = (left + right) / 2;


		int* l_buff = merge_sort(up, down, left, middle);
		int* r_buff = merge_sort(up, down, middle + 1, right);


		int* target = l_buff == up ? down : up;

		unsigned int l_cur = left, r_cur = middle + 1;
		for (unsigned int i = left; i <= right; i++)
		{
			if (l_cur <= middle && r_cur <= right)
			{
				if (l_buff[l_cur] < r_buff[r_cur])
				{
					target[i] = l_buff[l_cur];
					l_cur++;
				}
				else
				{
					target[i] = r_buff[r_cur];
					r_cur++;
				}
			}
			else if (l_cur <= middle)
			{
				target[i] = l_buff[l_cur];
				l_cur++;
			}
			else
			{
				target[i] = r_buff[r_cur];
				r_cur++;
			}
		}
		return target;
		
		
	
	
};


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	cout << "---------------------------------------------------" << endl;
	cout << "|            Расчетно-графическое задание         |" << endl;
	cout << "|      Сравнительный анализ методов сортировки    |" << endl;
	cout << "|             Сортировка слиянием                 |" << endl;
	cout << "---------------------------------------------------" << endl;




	cout << "          Сортировка неупорядоченного массива      " << endl;

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
	double sum1 = 0;
	for (int i = 0; i < L; i++)
	{
		auto start = chrono::high_resolution_clock::now();
		merge_sort(arr1, arrbuff, 0, SIZE1 - 1);
		auto end = chrono::high_resolution_clock::now();

		chrono::duration<double> duration = end - start;
		sum1 += duration.count();
	}
	cout << "Время исполнения сортировки: " << setw(6) << sum1/L << " s" << endl;
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
	double sum2 = 0;
	for (int i = 0; i < L; i++)
	{
		auto start = chrono::high_resolution_clock::now();
		merge_sort(arr1, arrbuff, 0, SIZE1 - 1);
		auto end = chrono::high_resolution_clock::now();

		chrono::duration<double> duration = end - start;
		sum2 += duration.count();
	}
	cout << "Время исполнения сортировки: " << setw(6) << sum2 / L << " s" << endl;
	
	cout << "       Упорядоченый массив:  " << endl;
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
	for (int i = SIZE1 - 1; i >= 0; i--)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	double sum3 = 0;
	for (int i = 0; i < L; i++)
	{
		auto start = chrono::high_resolution_clock::now();
		merge_sort(arr1, arrbuff, 0, SIZE1 - 1);
		auto end = chrono::high_resolution_clock::now();

		chrono::duration<double> duration = end - start;
		sum3 += duration.count();
	}
	cout << "Время исполнения сортировки: " << setw(6) << sum3 / L << " s" << endl;
	
	cout << "       Упорядоченый массив:  " << endl;
	for (int i = 0; i < SIZE1; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	cout << "--------------------------------------------------------------" << endl;






}