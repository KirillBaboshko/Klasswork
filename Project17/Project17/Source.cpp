#include <iostream>
#include <string>
using namespace std;
void printmatrix(int N, int M)
{
	int** matrix = new int* [N];
	for (int i = 0; i < N; i++)
		matrix[i] = new int[M];
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = 0;
			cout << matrix[i][j] << " ";
			
		}
		cout << "\n";
	}

}
void vstavka(int*& array, int& N, int index, int value)
{
	int* temparray = new int[N + 1];
	for (int i = 0; i < index; i++)
		temparray[i] = array[i];
	temparray[index] = value;
	for (int i = index + 1; i <= N; i++)
		temparray[i] = array[i - 1];
	N++;
	delete[]array;
	array = temparray;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int size;
	cin >> size;
	int* array = new int[size];
	int N, M;
	cin >> N;
	cin >> M;
	printmatrix(N, M);



	return 0;
}