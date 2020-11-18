#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    long sec_a_day, sec_a_week, sec_a_year, sec_a_100, sec_a_1000;
    sec_a_day = 60 * 60 * 24;
    sec_a_week = sec_a_day * 7;
    sec_a_year = sec_a_day * 365;
    sec_a_100 = sec_a_year * 100;
    sec_a_1000 = sec_a_year * 1000;
    cout << "Секунд в году: " << sec_a_year << endl << "Секунд в столетии: " << sec_a_100 << endl << "Секунд в тысячилетии: " << sec_a_1000 << endl;
}