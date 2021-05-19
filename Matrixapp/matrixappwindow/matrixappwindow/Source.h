#pragma once

#include <iostream>
#include <windows.h>
#include <fstream>
#include <time.h>
#include <iomanip>

using namespace System;

float** MatrixMultiply(float** A, float** B, int N, int M);

float SumAboveMainD(float** A, int N, int M);

float** MultiplyByNumber(float** A, int N, int M, int num);

void ReadingMatrix(float** (&A), int& N, int& M, std::string filename);/*������ ������� �� �����*/

float** MatrixSum(float** A, float** B, int N, int M);

std::string & Convert_String_to_string(String^ s, std::string& os);//����������� System::string^ � std::string

String^ Convert_string_to_String(std::string& os, String^ s);// ����������� std::string � System::string ^












