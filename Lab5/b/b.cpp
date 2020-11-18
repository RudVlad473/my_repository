#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int k;
    while (true)
    {
        printf("Введите кол-во грибов: ");
        scanf_s("%d", &k);
        if (k <= 20)
        {
            if (k == 0)
            {
                printf("У меня %d грибов\n", k);
            }
            if (k == 1)
            {
                printf("У меня 1 гриб\n");
            }
            if ((k >= 2) && (k <= 4))
            {
                printf("У меня %d гриба\n", k);
            }
            if ((k >= 5) && (k <= 20))
            {
                printf("У меня %d грибов\n", k);
            }
        }
        else
        {
            if (k == 111)
            {
                printf("У меня %d грибов\n", k);
                continue;
            }
            if ((k % 10 == 1) && (k / 10 > 100))
            {
                printf("У меня %d грибов\n", k);
                continue;
            }
            if (k % 10 == 1)
            {
                printf("У меня %d гриб\n", k);
            }
            if ((k % 10 >= 2) && (k % 10 <= 4))
            {
                printf("У меня %d гриба\n", k);
            }
            if ((k % 10 >= 5) && (k % 10 <= 10))
            {
                printf("У меня %d грибов\n", k);
            }
            if (k % 10 == 0)
            {
                printf("У меня %d грибов\n", k);
            }

        }
    }

}

