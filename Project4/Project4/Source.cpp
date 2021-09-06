#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

//массивы
/*const int N{ 4 };
	const int M{ 6 };
	const int L{ 3 };
	int array[N];//одномерный массив
	int Matrix[N][M];//двумерный массив
	int coub[N][M][L];//трёх мерный массив*/

//Двумерный массив
/*srand(time(NULL));
	const int N{ 10 };
	const int M{ 10 };
	int array[N];
	int Matrix[N][M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			Matrix[i][j] = rand() % 100;
			cout << Matrix[i][j] << " ";
		}
		cout << "\n";
	}*/
	
//хз как вывести
/*srand(time(NULL));
	const int N{ 4 };
	const int M{ 5 };
	int array[N];
	int Matrix[N][M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			Matrix[i][j] = rand() % 10;
			cout << Matrix[i][j] << " ";
		}
		cout << "\n";
	}

	int steps;
	cout << "Введите число\n";
	cin >> steps;
	int temp;
	int v;
	cout << "Сдвиг влево-1\n";
	cout << "Сдвиг вправо-2\n";
	cout << "Сдвиг вниз-3\n";
	cout << "Сдвиг вверх-4\n";
	cin >> v;
	if (v == 1)
	{
		for (int s = 0; s < steps % M; s++)
		{
			for (int i = 0; i < N; i++)
			{
				temp = Matrix[i][0];
				for (int j = 0; j < M - 1; j++)
					Matrix[i][j] = Matrix[i][j + 1];
				Matrix[i][M - 1] = temp;
			}
		}
	}
	if (v == 2)
	{
		for (int s = 0; s < steps % M; s++)
		{
			for (int i = 0; i < N; i++)
			{
				temp = Matrix[i][M - 1];
				for (int j = M - 1; j > 0; j--)
					Matrix[i][j] = Matrix[i][j - 1];
				Matrix[i][0] = temp;

			}
		}
	}
	if (v == 3)
	{
		for (int s = 0; s < steps % N; s++)
		{
			for (int j = 0; j < N; j++)
			{
				{
					temp = Matrix[0][j];
					for (int i = 0; i < N - 1; i++)
						Matrix[i][j] = Matrix[i + 1][j];
					Matrix[N - 1][j] = temp;
				}
			}

		}
	}
	if (v == 4)
	{
		for (int s = 0; s < steps % N; s++)
		{
			for (int j = 0; j < M; j++)
			{
				{
					temp = Matrix[N - 1][j];
					for (int i = N - 1; i > 0; i--)
						Matrix[i][j] = Matrix[i - 1][j];
					Matrix[0][j] = temp;
					
				}
			}
		}
	}*/

	return 0;
}
