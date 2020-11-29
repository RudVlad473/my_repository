#include <iostream>
using namespace std;
int main()
{
	while (true)
	{
		setlocale(LC_ALL, "ru");
		cout << "Введите число: ";
		int a, n = 0, r, k;
		cin >> a;
		/*1*/
		while (a % 10 != 0)
		{
			a /= 10;
			n++;
		}
		cout << "Кол-во цифр в числе: " << n << endl;
		/*2*/
		int x, y;
		int sum = 0;
		cout << "Введите число: ";
		cin >> x;
		for (; x > 0;) {
			y = x % 10;
			sum += y;
			x /= 10;
		}
		cout << "Сумма цифр числа: " << sum << endl;
		/*3*/
		cout << "Введите число: ";
		cin >> x;
		for (; x > 0;)
		{
			y = x % 10;
			sum += y;
			x /= 10;
			cout << y;

		}
		cout << endl << endl;;
	}

}