#pragma once
#include <iostream>
using namespace std;
void goodswap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void init(int* array, int size)
{
	for (int i = 0; i < size; i++)
		array[i] = rand() % 10;
}
void print(int* array, int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << "\n";
}
void Sortbuble(int* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		bool isSort = true;
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
void SortArrayInsert(int* array, int size)
{
	for (int i = 1; i < size; i++)
	{
		int temp = array[i];
		int j;
		for (j = i - 1; j >= 0; j--)
		{
			if (array[j] > temp)
				array[j + 1] = array[j];
			else
				break;
		}
		array[j + 1] = temp;
	}
}
void sortbin(int* array, int size)
{
	int max, min;
	float sr = 0;
	int n = 0;
	for (int i = 0; i < size; i++)
	{
		if (n == 0)
		{
			max = array[i];
			n++;
			min = array[i];
		}
		if (array[i]>max)
			max = array[i];
		if (array[i]<min)
			min=array[i];
	}
	sr = (max + min) / 2;
	
	cout << sr;
	cout << max;
	cout << min;

}