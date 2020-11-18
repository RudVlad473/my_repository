#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a = rand() % 100, p, i = 0;
	printf("Попытайтесь угадать число, введенное компьютером\n");
	while (true)
	{
		printf("Ваше число: ");
		scanf_s("%d", &p);
		if (p != a)
		{
			printf("Неверно!\n");
			if (p > a)
			{
				printf("Ваше число больше загаданного компьютером.\n");
				i++;
				printf("Кол-во попыток: %d \n\n", i);
				continue;
			}
			if (p < a)
			{
				printf("Ваше число меньше загаданного компьютером.\n");
				i++;
				printf("Кол-во попыток: %d \n\n", i);
				continue;
			}
		}
		if (p == a)
		{
			printf("Вы угадали!\n");
			i++;
			printf("Кол-во попыток: %d \n\n", i);
			break;
		}
	}
}
