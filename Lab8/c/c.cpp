#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите число: ";
	int a, n=0 , s = 0, r,k;
	cin >> a;
	while (a % 10 != 0)
	{
		a /= 10;
		n++;
	}
	cout << "Кол-во цифр в числе: " << n << endl;
	for (int s = 0; a != 0; s += a % 10)
	{
		a /= 10;
	}
	cout << "Сумма цифр числа: " << s << endl;
}