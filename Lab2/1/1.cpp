﻿#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    char OS1[5] = "OS/2", OS2[11] = "Windows/NT", OS3[9] = "SCO/Unix";
    char subd1[4] = "DB2", subd2[10] = "SQLServer", subd3[7] = "Oracle";
    int out1 = 130, out2 = 230, out3 = 110;
    int oper1 = 22, oper2 = 24, oper3 = 48;
    int price1 = 3343, price2 = 2685, price3 = 3745;
    /*printf("1. Введите название, тип, температуру и скорость 1-го вещества:  \n");
    scanf_s("%*s %c %hd %d", name1, &type, &temp1, &speed1);
    printf("2. Введите название, тип, температуру и скорость 2-го вещества:  \n");
    scanf_s("%*s %c %hd %d", name2, &type, &temp2, &speed2);
    printf("3. Введите название, тип, температуру и скорость 3-го вещества:  \n");
    scanf_s("%*s %c %hd %d", name3, &type, &temp3, &speed3);*/
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                          Конфигурация програмных средств информационных систем                                        |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|   Операционная система  |    СУБД    |Мин.объем внешней памяти (MB)|  Мин.объем оперативной памяти (MB)  |   Приблизительная цена ($) |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| %22s  | %9s  | %26d  | %35d | %26d |\n", OS1, subd1, out1, oper1, price1);
    printf("| %22s  | %8s  | %26d  | %35d | %26d |\n", OS2, subd2, out2, oper2, price2);
    printf("| %22s  | %9s  | %26d  | %35d | %26d |\n", OS3, subd3, out3, oper3, price3);
    printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|Примечание: принималась цена лицензии на 8 пользователей                                                                               |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------");
}