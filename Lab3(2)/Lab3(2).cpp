#include "Header.h"

int main()
{

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int Array[SIZE]{};
	int Array2[SIZE]{};

	Filling(Array, SIZE);


	Task(Array, Array2, SIZE);

	

}


