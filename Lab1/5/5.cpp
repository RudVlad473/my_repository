#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Игра: ПК vs Человек" << '\n' << "Загадайте число большее , чем загаданное компьютером!" << endl;
	int a, b;
	cin >> a;
	b = a + 1;
	cout << "Введенное вами число: " << a << '\n' << "Число , введенное компьютером: " << b << '\n' << "Вы проиграли!" << endl;
}
