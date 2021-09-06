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
void init(T1* array, T1 size,int start,int end)
{
	for (T1 i = 0; i < size; i++)
		array[i] = start + rand() % (end - start + 1);

}

template <typename B1>
void print(B1* array, B1 size)
{
	for (B1 i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << "\n";
}

template <typename N1>
void Sortbuble(N1* array, N1 size)
{
	for (N1 i = 0; i < size - 1; i++)
	{
		bool isSort = true;
		for (N1 j = size - 1; j > i; j--)
			if (array[j] < array[j - 1])
			{
				goodswap(array[j], array[j - 1]);
				isSort = false;
			}
		if (isSort)
			break;
	}
}

template <typename P1>
void SortArrayInsert(P1* array, P1 size)
{
	for (P1 i = 1; i < size; i++)
	{
		P1 temp = array[i];
		P1 j;
		for (j = i - 1; j >= 0; j--)
		{
			if (array[j] > temp)
				array[j + 1] = array[j];
			else
				break;
		}
		array[j + 1] = temp;
	}
}

void SortArrayQuick(int* array, int left, int rigth)
{
	int currLeft{ left };
	int currRigth{ rigth };
	int pivot{ array[(left + rigth) / 2] };
	do {
		while (array[currLeft] < pivot)
			currLeft++;
		while (array[currRigth] > pivot)
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
	setlocale(LC_ALL,"Rus");
	int size;
	int start, end;
	cout << "Введите диапозон случайных чисел в массиве\n";
	cout << "Введите первое число\n";
	cin >> start;
	cout << "Введите второе число\n";
	cin >> end;
	cout << "Введите размер массива\n";
	cin >> size;
	int* array = new int[size];
	cout << "Массив:\n";
	init(array, size,start,end);
	print(array, size);
	cout << "Отсортированный массив методом пузырька:\n";
	Sortbuble(array, size);
	print(array, size);
	cout << "Отсортированный массив методом вставки:\n";
	SortArrayInsert(array, size);
	print(array, size);
	SortArrayQuick(array,0, size-1);

	return 0;
}