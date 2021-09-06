#include <iostream>
using namespace std;
template <typename V1>
void goodswap(V1& x, V1& y)
{
	int temp = x;
	x = y;
	y = temp;
}
template <typename T1>
void init(T1* array, T1 size)
{
	for (T1 i = 0; i < size; i++)
		array[i] = rand() % 10;

}
template <typename B1>
void print(B1* array, B1 size)
{
	for (B1 i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << "\n";
}
template <typename A>
void SortArrayQuick(A* array, A left, A rigth)
{
	A currLeft{ left };
	A currRigth{ rigth };
	A seredina{ array[(left + rigth) / 2] };
	do {
		while (array[currLeft] < seredina)
			currLeft++;
		while (array[currRigth] > seredina)
			currRigth--;
		if (currLeft <= currRigth)
		{
			goodswap(array[currLeft], array[currRigth]);
				currLeft++;
				currRigth--;
		}
	} while (currLeft <= currRigth);
	if (left < currRigth)
		SortArrayQuick(array, left, currRigth);
	if (rigth > currLeft)
		SortArrayQuick(array, currLeft, rigth);



}

int main()
{
	setlocale(LC_ALL, "Rus");
	int size;
	cout << "¬ведите размер массива\n";
	cin >> size;
	int* array = new int[size];
	init(array, size);
	print(array, size);
	SortArrayQuick(array, 0, size - 1);
	print(array, size);

	return 0;
}