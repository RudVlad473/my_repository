#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a = 1, b = 2, c;
	cout << "Способ 1" << endl << "a = " << a << ' ' << "b = " << b << endl;
	c = a; a = b; b = c;
	cout << "a = " << a << ' ' << "b = " << b << endl;
	a = 1;
	b = 2;
	cout << "Способ 2" << endl << "a = " << a << ' ' << "b = " << b << endl;
	a = a + b;
	b = b - a;
	b = -b;
	a = a - b;
	cout << "a = " << a << ' ' << "b = " << b << endl;
}