#include "Header.h"
void Filling(int* mas, int size)
{
	for (int i = 0; i < SIZE; i++)
	{
		*(mas + i) = rand() % 100 - 50;
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (i % 5 == 0)
		{
			cout << endl;
		}
		cout << setw(6) << *(mas + i);

	}
	cout << endl << endl;
}


void Task(int* mas, int* mas2, int size)
{
	unsigned int pe = 0;
	unsigned int modd = 0;
	unsigned int me = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if ((*(mas + i) > 0) && (*(mas + i) % 2 == 0))
		{
			pe++;
		}
		if ((*(mas + i) < 0) && (*(mas + i) % 2 != 0))
		{
			modd++;
		}
		if ((*(mas + i) < 0) && (*(mas + i) % 2 == 0))
		{
			me++;
		}
	}

	cout << "Кол-во положительных и четных: " << pe << endl << endl;
	cout << "Кол-во отрицательных и нечетных: " << modd << endl << endl;
	cout << "Кол-во отрицательных и четных: " << me << endl << endl;



	for (int i = 0, j = 0; i < SIZE; i++)
	{
		if ((*(mas + i) < 0) && (*(mas + i) % 2 == 0))
		{
			*(mas2 + j) = *(mas + i);
			j++;
		}

	}

	for (int i = 0; i < me; i++)
	{
		cout << setw(6) << *(mas2 + i);
	}


	cout << endl;
}