#include "Header.h"
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int SIZE;
	cout << "Введите размер массива: ";
	cin >> SIZE;
	int* Array = new int[SIZE];

	Fulfill(Array, SIZE);

	Task(Array, SIZE);


	delete[]Array;
}
