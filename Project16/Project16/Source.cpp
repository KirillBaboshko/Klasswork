#include<iostream>
#include "Header.h"
#define pi 3.14
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	/*int a, b, c;
	cout << "Введите числа\n";
	cin >> a;
	cin >> b;
	cin >> c;
	int d;
	int n;
	int x1, x2;
	d = (b * b) - (4 * a * c);
	n = sqrt(d);
	x1 = (-b + n) / (2 * a);
	x2 = (-b - n) / (2 * a);
	if (d > 0)
	{
		cout << "два корня\n";
		cout << x1 << "\n";
		cout << x2 << "\n";
	}
	if (d == 0)
	{
		cout << "один корень";
		cout << x1 << "\n";

	}
	if (d < 0)
	{
		cout << "корней нет";
	}*/
	//cout << pi;
	int size;
	cout << "Введите размер массива";
	cin >> size;
	int* array = new int[size];
	init(array, size);
	cout << "Массив: \n";
	print(array, size);
	//Sortbuble(array, size);
	//cout << "Сортировка методом пузырька: \n";
	//print(array, size);
	//cout << "Сортировка методом вставки: \n";
	//SortArrayInsert(array, size);
	//print(array, size);
	sortbin(array, size);




	return 0;
}