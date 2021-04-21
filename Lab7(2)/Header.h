#pragma once
#include <iostream>
using namespace std;
struct OperSistem
{
    char Name[10];
    char SUBD[10];
    int outmem;
    int minRam;
    int cost;
};

OperSistem OS2{}, WindowsNT{}, SCOUnix{};

void vvodIzapis(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix);

void randomly(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix);

void vnachalo(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix);

void vkonec(OperSistem OS2, OperSistem WindowsNT, OperSistem SCOUnix);

void ponomery(int temp);

void vse();

















