#include "Header.h"
void Filling(int* mas, int size)
{

	for (int i1 = 0; i1 < SIZE; i1++)
	{
		*(mas + i1) = rand() % 101 -50;
	}
}

