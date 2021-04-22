#pragma once
#include <iostream>
using namespace std;
struct OperSistem
{
    char Name[11];
    char SUBD[11];
    int outmem;
    int minRam;
    int cost;
};

void vvodIzapis(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix);

void randomly(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix);

void vnachalo();

void vkonec(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix);

void ponomery(int temp);

void vse();

















