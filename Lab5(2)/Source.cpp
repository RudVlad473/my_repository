#include "Source.h"


#ifdef DEBUG
void mas21(int* arr, int** arr2, int size)
{
    /*��������� ��������� ������ ��� ������ ������ ����*/


    /*--------*/

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            arr2[i][j] = arr[i * size + j];

        }

    }


    /* �������*/


    int k = 1;
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (((i < j) && ((i + j) > (size - 1))) || ((i > j) && ((i + j) < (size - 1))))
            {
                arr2[i][j] = k;
                k++;
            }
            else
            {
                arr2[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            arr[i * size + j] = arr2[i][j];

        }

    }

    /*---------------------*/

}
#endif

#ifndef DEBUG
void mas22(int** array, int size)
{

    cout << endl;
    cout << "�������:" << endl;
    int k = 1;
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (((i < j) && ((i + j) > (size - 1))) || ((i > j) && ((i + j) < (size - 1))))
            {
                array[i][j] = k;
                k++;
            }
            else
            {
                array[i][j] = 0;
            }
        }
    }




}
#endif