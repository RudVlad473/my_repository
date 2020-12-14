
#include <iostream>
using namespace std;
int a;
int b;
char foo(int a, int b);
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите 2 числа: ";
	int a;
	int b;
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	cout <<foo(a,b);
	
}
char foo(int a, int b)
{
	if (a > b)
	{
		return '>';
	}
	else if (a == b)
	{
		return '=';
	}
	else {
		return '<';
	}
}


