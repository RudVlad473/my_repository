#include "Header.h"
void Filling(int* mas, int size)
{

	for (int i = 0; i < SIZE; i++)
	{
		*(mas + i) = rand() % 100 - 50;
	}
	
	
	
}


void Task(int* mas, int* mas2,const int size)
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

	cout << "���-�� ������������� � ������: " << pe << endl << endl;
	cout << "���-�� ������������� � ��������: " << modd << endl << endl;
	cout << "���-�� ������������� � ������: " << me << endl << endl;



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
		cout << setw(6) << *(mas + i);
	}


	cout << endl;
	
}