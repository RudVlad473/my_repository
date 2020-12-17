
#include <iostream>
#include <iomanip>
using namespace std;
int const N = 9;
int const M = 9;
int j;
int i;
void foo(int arr[]);
int main()
{
	setlocale(LC_ALL, "ru");
	
	int arr[N * M]{};
	for (i = 0; i < N * M; i++)
	{
		arr[i] = i+1;
	}
	cout << "Одномерный массив:" << endl;
	for (i = 0; i < N * M; i++)
	{	
		cout<<setw(4) <<arr[i];
	}
	cout << endl << endl << endl << endl;
	foo(arr);
	cout << endl;
	
	
	
	
}
void foo (int arr[])
{
	int arr4[N*M];
	int arr3[N][M];
	cout << "Двумерный массив" << endl;
	int arr2[N][M]{};
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++) {
			arr2[i][j] = arr[i * N + j];
			cout <<setw(4)<< arr2[i][j];
		}
		cout << endl;
	}
	
	cout << endl << endl << endl << endl;
	cout << "Обработанный двумерный массив: " << endl;
	for (i = 0; i < N; i++) 
	{	
		
		for (j = 0; j < M; j++)
		{
			int k = 0;
			int t = 0;
			k = arr2[j][j];
			t = arr2[i][j];
			t = t * k;
			arr3[i][j] = t;

			cout << setw(8) << t;
		}
		
		cout << endl;
	}
	
	cout << endl << endl << endl << endl;
	cout << "Обработанный одномерный массив: " << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			arr[i * M + j] = arr3[i][j];
			cout  << arr[i*M+j]<< " ";
		}
		
	}
	

}



