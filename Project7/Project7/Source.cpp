#include <iostream>
using namespace std;
//создание массива
void masivArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
		array[i] = rand() % 100;
}
//печать массива
void PrintArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << "\n";
}
//замена 1 переменной на другую
void goodswap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
//сортировка выбором
void SortArraySelect(int* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minindex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[minindex])
				minindex = j;
		}
		goodswap(array[i], array[minindex]);
	}
}
//сортировка пузырька
void Sortbuble(int* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		bool isSort=true;
		for (int j = size - 1; j > i; j--)
			if (array[j] < array[j - 1])
			{
				goodswap(array[j], array[j - 1]);
				isSort = false;
			}
		if (isSort)
			break;
	}
}
int main()
{
	/*const int U = 100;
	int n{ 10 };
	int m{ 20 };
	int* ptr = &n;
	ptr = &m;

	const int* cptr;//Указатель на константу(нельзя заменять переменную)
	cptr = &n;
	int* const cptr2 = &n;//Константный указатель(можно заменить переменную)
	*cptr2 = 50;
	const int* const sperconst = &U;//Константный указатель на константу(менять нельзя ничего вообще)*/
	
	/*const int size{ 10 };
	int array[size];
	masivArray(array, size);
	PrintArray(array, size);
	int* darray = new int[size];
	masivArray(darray, size);
	PrintArray(darray, size);

	int n = 20, m = 30;
	cout << n << " " << m << "\n";
	goodswap(n, m);
	cout << n << " " << m << "\n";*/
	const int size{ 10 };
	int array[size];
	masivArray(array, size);
	//PrintArray(array, size);
	//SortArraySelect(array, size);
	//PrintArray(array, size);
	PrintArray(array, size);
	Sortbuble(array, size);
	PrintArray(array, size);




	return 0;
}