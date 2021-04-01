#include "Header.h"




int main()
{
	setlocale(LC_ALL, "rus");
	
	int size=255;

	
	

	
	char* arr1 = new char[size];
	char* arr2 = new char[size];



	printf("Введите строку №1 (нажатие Enter завершит ввод): ");
	
	
	/* Ввод строки 1*/
	strEnter(arr1);
	printf("\n");
	printf("Введенная строка: ");
	printf("%s", arr1);

	printf("\n");
	/*Нахождение размера строки*/
	
	printf("Размер строки: %d", strleng(arr1));
	printf("\n\n");

	/*--------------*/
	


	/*            Ввод строки 2         */

	printf("Введите строку №2 (нажатие Enter завершит ввод): ");
	
	strEnter(arr2);
	printf("Введенная строка: ");
	printf("%s", arr2);
	printf("\n");
	/*Нахождение размера строки*/

	printf("Размер строки: %d", strleng(arr2));

	printf("\n\n");





	/*--------------*/

	

	/*   Функция по задаче   */
	int p, n;
	printf("Введите позицию, с которой следует начать замену: ");
	scanf_s("%d", &p);
	printf("\n");
	printf("Введите кол-во символов, которые следует заменить: ");
	scanf_s("%d", &n);
	printf("\n");
	


	Task(arr1, arr2, p, n);


	printf("Итоговая строка : %s", arr1);

	delete[]arr1;
	delete[]arr2;
	return 0;
}


