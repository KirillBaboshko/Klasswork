#include <iostream>
using namespace std;
//void printarray(int* array, int N)
//{
//
//	for (int i = 0; i < N; i++)
//	{
//		cout << array[i] << " ";
//	}
//
//}
//
//void mackearray(int* array, int N)
//{
//	for (int i = 0; i < N; i++)
//		array[i] = rand() % 10;
//}
//
//void vstavka(int*& array, int& N, int index, int value)
//{
//	int* temparray = new int[N + 1];
//	for (int i = 0; i < index; i++)
//		temparray[i] = array[i];
//	temparray[index] = value;
//	for (int i = index + 1; i <= N; i++)
//		temparray[i] = array[i - 1];
//	N++;
//	delete[]array;
//	array = temparray;
//}
int main()
{
	setlocale(0, "");
	//int size;
	//int number;
	//int index;
	//cout << "������� ������ �������: \n";
	//cin >> size;
	//int* array = new int[size];
	//cout << "������: \n";
	//mackearray(array,size);
	//printarray(array, size);
	//cout << "\n������� ������� �� ������� ������ �������� ������: \n";
	//cin >> index;
	//cout << "������� ������ ������� ������ ��������: \n";
	//cin >> number;
	//cout << "������: \n";
	//vstavka(array,size,index,number);
	//printarray(array, size);

	int a,b,c;
	cout << "������� �����\n";
	cin >> a;
	cin >> b;
	cin >> c;
	int d;
	int n;
	int x1, x2;
	d = (b*b) - 4 * a * c;
	n=sqrt(d);
	cout << n;
	






	return 0;
}