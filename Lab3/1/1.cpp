
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a = 6;
    double x = 8.7, y = 10;
    double t1, t2;
    /*scanf_s("%lf %lf", &x, &y);*/
    t1 = (pow(a, 4) + 2 * pow(a, 2) * x + 4 * pow(x, 2) * log(y) - 2 * pow(x, 2) * log(x)) / (4 * pow(a, 6) * pow(x, 2));
    t2 = (a * x + log(sin(a * x) * 3.141 / 180 + cos(a * x) * 3.141 / 180)) / (2 * a);
    printf("t1 = %lf, t2 = %lf", t1, t2);
    return 0;
}
