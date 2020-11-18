#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void) {
    setlocale(LC_ALL, "ru");
    double x, y;
    while (true)
    {
        printf("Введите координату x :");
        scanf_s("%lf", &x);
        printf("Введите координату y :");
        scanf_s("%lf", &y);
        printf("x = %lf;  y=%lf\n", x, y);
        if ((y <= 1) && (y >= 0)
            && (x <= 1) && (x >= 0) && (pow(x, 2) + pow(y, 2) >= 1))
            printf("Точка попадает в область\n");
        else printf("Точка не попадает в область\n");

    }
}

