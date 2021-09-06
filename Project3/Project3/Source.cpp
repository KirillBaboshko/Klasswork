#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	/*srand(time(NULL));
	const int N=5;
	int array[N];
	for (int i = 0; i < N; i++)
	{
		 array[i]=rand()%100;
	}
	for (int i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}*/

	/*srand(time(NULL));
	const int N=5;
	int array[N];
	for (int i = 0; i < N; i++)
	{
		 array[i]=rand()%100;
		 cout << array[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < N/2; i++)
	{
		int temp;
		temp = array[i];
		array[i] = array[N-1-i];
		array[N - 1 - i] = temp;
	}
	for (int i = 0; i < N; i++)
		cout << array[i] << " ";*/

	/*int num1,num2, num3, num4, num5,num6;
	int n = 1;
	for (int i = 999999; i >0; i--)
	{
		num1 = i / 100000;
		num2 = i / 10000%10;
		num3 = i / 1000%10;
		num4 = i / 100%10;
		num5 = i / 10 % 10;
		num6 = i % 10;
		if (num1 + num2 + num3 == num4 + num5 + num6)
		{
			n+=1;
		}
	}
	cout << n;*/

	/*srand(time(NULL));
	const int N = 10;
	int array[N];
	for (int i = 0; i < N; i++)
	{
		array[i] = rand() % 100;
		cout << array[i] << " ";
	}
	cout << "\n";
	int M;
	cout << "¬ведите число=";
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int temp = array[0];
		for (int j = 0; j < N - 1; j++)
			array[j] = array[j + 1];
		array[N - 1] = temp;
	}

	for (int i = 0; i < N; i++)
		cout << array[i] << " ";*/
	
	return 0;
}