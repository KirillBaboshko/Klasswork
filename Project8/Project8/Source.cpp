#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time (NULL));
	/*int N;
	cout << "¬ведите размер массива ";
	cin >> N;
	int* array = new int [N];
		for (int i = 0; i < N; i++)
			array[i] = rand() % 100;
		for (int i = 0; i < N; i++)
			cout << array[i] << " ";
		cout << "\n";
		cout << "ѕеревернутый массив"<<"\n";
		for (int i = 0; i < N / 2; i++)
		{
			int temp;
			temp = array[i];
			array[i] = array[N - 1 - i];
			array[N - 1 - i] = temp;
		}
		for (int i = 0; i < N; i++)
			cout << array[i] << " ";
		delete[]array;*/

	/*int N;
	int M;
	do
	{
		cout << "¬ведите высоту таблицы\n";
		cin >> N;
		cout << "¬ведите ширину таблицы\n";
		cin >> M;
		if (N <= 0 && M <= 0)
			cout << "¬ведите числа которые больше нул€!\n";
	} while (N<=0&&M<=0);
	
	int** matrix = new int* [N];
	for (int i = 0; i < N; i++)
		matrix[i] = new int[M];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			matrix[i][j] = rand() % 10;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << matrix[i][j] << " ";
		cout << "\n";
	}
	for (int i = 0; i < N; i++)
		delete[]matrix[i];
	delete[]matrix;*/

	int N;
	int M;
	do
	{
		cout << "¬ведите высоту таблицы\n";
		cin >> N;
		cout << "¬ведите ширину таблицы\n";
		cin >> M;
		if (N <= 0 && M <= 0)
			cout << "¬ведите числа которые больше нул€!\n";
	} while (N <= 0 && M <= 0);

	int** matrix = new int* [N];
	for (int i = 0; i < N; i++)
		matrix[i] = new int[M];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			matrix[i][j] = rand() % 10;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << matrix[i][j] << " ";
		cout << "\n";
	}
	int g;
	cout << "\n";
	cout << "¬ведите столбец в который хотите вставить нули\n";
	cin >> g;
	int** matrix1 = new int* [N];
	for (int i = 0; i < N; i++)
		matrix1[i] = new int[M+1];
	for(int i=0;i<N;i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (j < g - 1)
				matrix1[i][j] = matrix[i][j];
			else
			{
				matrix[i][j] = 0;
				break;
			}
		}
		for (int j = g - 1; j < M; j++)
			matrix1[i][j + 1] = matrix[i][j];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << matrix1[i][j] << " ";
		cout << "\n";
	}
	for (int i = 0; i < N; i++)
		delete[]matrix1[i];
	delete[]matrix1;
	for (int i = 0; i < N; i++)
		delete[]matrix[i];
	delete[]matrix;






	for (int i = 0; i < N; i++)
		delete[]matrix[i];
	delete[]matrix;




	return 0;
}