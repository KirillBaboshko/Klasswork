#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	const int size{5};
	int matrix[size][size]{1,2,3,4,5,1,2,3,4,5,1,2,1,4,5,1,2,3,1,5,1,2,3,4,5};
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	int x,y;
	cin >> x;
	cin >> y;
	
	for (int i = 0; i < size; i++)
	{
		//for (int j = 0; j < size; j++)
		{
			cout << matrix[i][size-x-i] << " ";
		}
		//cout << "\n";
	}





	return 0;
}