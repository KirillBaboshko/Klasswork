#include<iostream>
#include "Header.h"
#define pi 3.14
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	/*int a, b, c;
	cout << "������� �����\n";
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
		cout << "��� �����\n";
		cout << x1 << "\n";
		cout << x2 << "\n";
	}
	if (d == 0)
	{
		cout << "���� ������";
		cout << x1 << "\n";

	}
	if (d < 0)
	{
		cout << "������ ���";
	}*/
	//cout << pi;
	int size;
	cout << "������� ������ �������";
	cin >> size;
	int* array = new int[size];
	init(array, size);
	cout << "������: \n";
	print(array, size);
	//Sortbuble(array, size);
	//cout << "���������� ������� ��������: \n";
	//print(array, size);
	//cout << "���������� ������� �������: \n";
	//SortArrayInsert(array, size);
	//print(array, size);
	sortbin(array, size);




	return 0;
}