#include "Header.h"

void Fulfill(int *Array, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(Array + i) = rand() % 100 - 50;
	}
	for (int i = 0; i < size; i++)
	{
		if (i % 5 == 0)
		{
			cout << endl;
		}
		cout << *(Array + i) << "\t";
	}
	cout << endl << endl << endl;
}

void Task(int *Array, int size)
{
	int pe = 0;
	int modd = 0;
	int me = 0;
	for (int i = 0; i < size; i++)
	{
		if ((*(Array + i) > 0) && (*(Array + i) % 2 == 0))
		{
			pe++;
		}
		if ((*(Array + i) < 0) && (*(Array + i) % 2 != 0))
		{
			modd++;
		}
		if ((*(Array + i) < 0) && (*(Array + i) % 2 == 0))
		{
			me++;
		}
	}
	cout << "Кол-во положительных и четных: " << pe << endl << endl;
	cout << "Кол-во отрицательных и нечетных: " << modd << endl << endl;
	cout << "Кол-во отрицательных и четных: " << me << endl << endl;

	int* arr = new int[me] {};

	for (int i = 0, j = 0; i < size; i++)
	{
		if ((*(Array + i) < 0) && (*(Array + i) % 2 == 0))
		{
			*(arr + j) = *(Array + i);
			j++;
		}

	}


	for (int i = 0; i < me; i++)
	{
		if (i % 5 == 0)
		{
			cout << endl;
		}
		cout << *(arr + i) << "\t";
	}

	delete[]arr;

}