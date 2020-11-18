#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c;
    double D, x1, x2;
    while (true)
    {
        printf("Квадратное уравнение имеет вид ax^2+bx+c=0. Введите коэффициенты a, b, c: ");
        scanf_s("%lf %lf %lf", &a, &b, &c);
        D = pow(b, 2) - 4 * a * c;
        if (D < 0)
        {
            printf("Дискриминант меньше нуля: у данного уравнения нет корней.");
        }
        if (D == 0)
        {
            x1 = (-b - sqrt(D)) / (2 * a);
            printf("Дискриминант равняется нулю: у данного уравнения один корень.\n");
            printf("x = %lf", x1);
        }
        if (D > 0)
        {
            x1 = (-b - sqrt(D)) / (2 * a);
            x2 = (-b + sqrt(D)) / (2 * a);
            printf("Корни квадратного уравнения x1 = %f, x2 = %f", x1, x2);
        }
    }
}
