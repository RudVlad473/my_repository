#include "Header.h"

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int Array[SIZE]{};
	
	for (int i = 0; i < SIZE; i++)
	{
		 *(Array+i) = rand() % 200 - 100;
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (i % 5 == 0)
		{
			cout << endl;
		}
		cout << Array[i]<<"\t" ;

	}
	cout << endl<< endl;
	for (int i = 0; i < SIZE; i++)
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
	for (int i = 0, j =0; i < SIZE; i++)
	{
		if ((*(Array + i) < 0) && (*(Array + i) % 2 == 0))
		{
			*(arr+j) = *(Array + i);
			j++;
		}
		
	}

	for (int i = 0; i < me; i++)
	{
		cout << *(arr+i)<< "\t";
	}

	delete []arr;
	cout << endl;
	

}


