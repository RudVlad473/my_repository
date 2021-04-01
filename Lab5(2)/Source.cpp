#include "Source.h"


#ifdef DEBUG
void mas12(int* arr, int size)
{
    


    /* Задание*/


    int k = 1;
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (((i < j) && ((i + j) > (size - 1))) || ((i > j) && ((i + j) < (size - 1))))
            {
                *(arr + i * size + j) = k;
                k++;
            }
            else
            {
                *(arr + i * size + j) = 0;
            }
        }
    }
    
    /*---------------------*/

}
#endif

#ifndef DEBUG
void mas22(int** array, int size)
{

    cout << endl;
    cout << "Задание:" << endl;
    int k = 1;
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (((i < j) && ((i + j) > (size - 1))) || ((i > j) && ((i + j) < (size - 1))))
            {
                *(*(array+i)+j) = k;
                k++;
            }
            else
            {
                *(*(array + i) + j) = 0;
            }
        }
    }




}
#endif