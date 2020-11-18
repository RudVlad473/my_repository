#include <iostream>

void main()
{
    setlocale(LC_ALL, "Rus");
    using namespace std;
    cout << "Введите стороны треугольника: ";
    int a, b, c;
    float S, p;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Площадь треугольника: " << S << endl;
}

