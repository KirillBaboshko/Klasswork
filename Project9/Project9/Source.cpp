#include<iostream>
using namespace std;

void printarray(int* array,int N)
{

	for (int i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}
	
}

void mackearray(int* array, int N)
{
	for (int i = 0; i < N; i++)
		array[i] = rand() % 10;
}

void vstavka(int* &array,int &N,int index,int value)
{
	int* temparray = new int[N + 1];
	for (int i = 0; i < index; i++)
			temparray[i] = array[i];
		temparray[index] = value;
	for (int i = index+1; i <= N; i++)
		temparray[i] = array[i-1];
	N++;
	delete[]array;
	array = temparray;
}

void printmatrix(int N, int M)
{
	int** matrix = new int* [N];
	for (int i = 0; i < N; i++)
		matrix[i] = new int[M];
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % 10;
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}

}

int main()
{
	srand(time(NULL));
	setlocale(0, "");
	int N;
	cout << "¬ведите размер массива: ";
	cin >> N;
	int* array=new int[N];
	mackearray(array, N);
	printarray(array, N);
	int index;
	int value;
	cout << "\n¬ведите куда хотите поставить цыфру\n";
	cin >> index;
	cout << "¬ведите какую цыфру вы хотите вставить\n";
	cin >> value;
	vstavka(array, index, N,value);
	printarray(array,N);
	delete[] array;



	/*srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int N,M;
	cout << "¬ведите высоту массива: ";
	cin >> N;
	cout << "¬ведите ширину массива: ";
	cin >> M;
	printarray(N, M);

	int pos;
	cout << "\n¬ведите куда хотите добавить строку \n";
	cin >> pos;
	int** matrix1 = new int* [N+1];
	for (int i = 0; i < N; i++)
		matrix1[i] = new int[M+1];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix1 = matrix;
			matrix1[pos][j] = 0;
			cout << matrix1[i][j] << " ";
		}
		cout << "\n";
	}

	/*for (int i = 0; i < N; i++)
		delete[]matrix1[i];
	delete[]matrix1;
	for (int i = 0; i < N; i++)
		delete[]matrix[i];
	delete[]matrix*/;

	return 0;
}