#include "Header.h"

int main()
{

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int Array[SIZE]{};
	int Array2[SIZE/2]{};

	Filling(Array, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 5 == 0)
		{
			cout << endl;
		}
		cout << setw(6) << *(Array + i);

	}
	cout << endl << endl;

	Task(Array, Array2, SIZE);


}


