#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Ввведите число: ";
	int a, b, c, d;
	cin >> a;
	a *= a;
	a *= a;
	a *= a;
	cout << a;
}