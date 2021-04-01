#include <iostream>
#include "Header.h"
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int Array[SIZE]{};
	int ArrayB[SIZE]{};
	int ArrayC[SIZE]{};
	int ArrayD[SIZE]{};

	Filling( Array, SIZE);

	cout << "	Изначальный массив А: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (i % 5 == 0)
		{
			cout << endl;
		}
		cout << setw(6) << *(Array + i);

	}
	cout << endl << endl;


	int m = 0, p = 0, n = 0;


	for (int i = 0; i < SIZE; i++)
	{
		if (*(Array + i) < 0)
		{
			*(ArrayB + m) = *(Array + i);
			m++;
		}
		if (*(Array + i) > 0)
		{
			*(ArrayC + p) = *(Array + i);
			p++;
		}
		if (*(Array + i) == 0)
		{
			*(ArrayD + n) = *(Array + i);
			n++;
		}
	};

	cout << "Массив B: " << endl;
	for (int i = 0; i < m; i++)
	{
		cout << setw(4) << *(ArrayB + i);
	}
	cout << endl << endl;

	cout << "Массив C: " << endl;
	for (int i = 0; i < p; i++)
	{
		cout << setw(4) << *(ArrayC + i);
	}
	cout << endl << endl;


	cout << "Массив D: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << *(ArrayD + i);
	}

	cout << endl << endl;






	for (int i = 0,j=0; i < n; i++,j++)
	{
		
		*(Array + i) = *(ArrayD + j);
		
	};

	for (int i = n,j =0; i < m; i++,j++)
	{
		*(Array + i) = *(ArrayB + j);
		
	};

	for (int i = m,j=0; i <p; i++,j++)
	{
		*(Array + i) = *(ArrayC + j);
	
		
	};




	cout << "	Итоговый массив А: " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 5 == 0)
		{
			cout << endl;
		}
		cout<<setw(6) << *(Array + i);
	};





}



