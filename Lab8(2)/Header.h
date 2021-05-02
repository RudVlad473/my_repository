#pragma once
#include <iostream>
#include <string>
using namespace std;

#define strsize 255

struct Opers
{
    char Name[strsize];
    char SUBD[strsize];
    int outmem;
    int minRam;
    int cost;

    Opers* next;
};



void Ñreate(Opers newdata);

void Print();

void Add(int pos, Opers newdata);

void Delete(int pos);

void criteriy();

int listsize();

void Sorting(int choice3);

void infile();

void Read();

void menu();

