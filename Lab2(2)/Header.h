//#pragma once
#include <string>
#include <iostream>
using namespace std;

#define PRINT_TYPE
#define DEBUG

const int SIZE = 3;
struct OperSistem
{
    string Name;
    string SUBD;
    int outmem;
    int minRam;
    int cost;
};
void Vvod(OperSistem Array[], string arr[], int SIZE);
void Randomly(OperSistem arr[], int Size);
void Sorting(OperSistem Array[], int Size);
void Print(OperSistem Array[], int Size);