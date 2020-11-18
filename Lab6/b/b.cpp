#include <iostream>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "ru");
    printf("Тест на знание таблицы умножения\n");
    srand(time(NULL));
    int i = 0, m, r = 0, a,b;

    while (i < 10)
    {
        printf("  %d * %d = ", a = rand() % 9 + 1, b = rand() % 9 + 1);
        scanf_s("%d", &m);
        if (m == a * b)
        {
            printf("  Ответ верный\n\n");
            ++i;
            ++r;
        }
        else
        {
            printf("  Ответ неверный\n\n");
            ++i;
        };
    }
    printf("Ваш балл за тест: %d", r);
}
