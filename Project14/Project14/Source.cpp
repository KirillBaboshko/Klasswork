#include <iostream>
using namespace std;

void init(int** array, int size,int size2)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size2; j++)
			array[i][j] = rand() % 10;
}

void print(int** matrix, int size, int size2)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
			cout << matrix[i][j] << " ";
		cout << "\n";
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int size;
	int size2;
	int sum=0;
	cout << "Введите длинну массива: ";
	cin >> size;
	cout << "Введите ширину массива: ";
	cin >> size2;
	cout << "Массив: \n";
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
	matrix[i] = new int[size2];
	init(matrix, size, size2);
	print(matrix, size, size2);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (i == j)
			{
				sum += matrix[i][j];
			}
			if (j == size - 1 - i)
			{
				sum += matrix[i][j];
			}
		}
	}
	cout << "Сумма: " << sum << "\n";

	return 0;
}