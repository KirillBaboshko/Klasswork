#include<iostream>
using namespace std;
/*void init(int* array,int size)
{
	for (int i = 0; i < size; i++)
		array[i] = rand() % 10;
}
void init(int** array, int size,int size2)
{
	for (int i = 0; i < size; i++)
		for(int j=0;j<size2;j++)
		array[i][j] = rand() % 10;
}
void print(int* array, int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << "\n";
}
void print(int** matrix, int size,int size2)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
			cout << matrix[i][j] << " ";
		cout << "\n";
	}
}*/

/*template<typename T1,typename T2>
T1 skladivaet(T1 a, T2 b)
{
	return a + b;
}
template<typename D1, typename D2>
D1 vichitaet(D1 a, D2 b)
{
	return a - b;
}
template<typename P1, typename P2>
P1 ymnozaet(P1 a, P2 b)
{
	return a * b;
}
template<typename M1, typename M2>
M1 delit(M1 a, M2 b)
{
	return a / b;
}*/



int main()
{
	/*int size{ 5 };
	int size2{ 5 };
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
		matrix[i] = new int[size2];
	int* array = new int[size];
	init(array, size);
	init(matrix, size, size2);
	print(array, size);
	cout << "\n";
	print(matrix, size,size2);*/

	/*setlocale(0, "");
	int a,b;
	cout << "Введите первое число\n";
	cin >> a;
	cout << "Введите второе число\n";
	cin >> b;
	cout << "Сумма= " << skladivaet(a, b) << "\n";
	cout << "Разность= " << vichitaet(a, b) << "\n";
	cout << "Умножение= " << ymnozaet(a, b) << "\n";
	cout << "Деление= " << delit(a, b) << "\n";*/
	setlocale(0, "");
	int M;
	int N;
	int R;
	int P;
	cout << "Введите высоту";
	cin >> N;
	cout << "Введите ширину";
	cin >> M;
	cout << "Введите ширину зубца";
	cin >> R;
	cout << "Введите длинну основания расчески";
	cin >> P;
	int** matrix = new int* [N];
	for (int i = 0; i < R; i++)
		matrix[i] = new int[M];
	for (int i = R; i < 2 * R; i++)



	return 0;
}