#include "Header.h"



int main()
{
    setlocale(LC_ALL, "ru");
#ifdef DEBUG
    SUM sum1;
    cout << "\nВведите значение x: ";
    cin >> sum1.x;
    cout << endl;
    cout << "\nВведите значение y:";
    cin >> sum1.y;
    sum1.countS();
    


#endif

#ifndef DEBUG

    SUM sum1;
    SUM* r = &sum1;
    cout << "\nВведите значение x: ";
    cin >> r->x;
    cout << endl;
    cout << "\nВведите значение y:";
    cin >> r->y;
    sum1.countS();
    
#endif
     
}


