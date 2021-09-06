#include<iostream>
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

//Сортировка расческой
void hairbrush(int* array,int size)
{
	int step = size - 1;
	while (step>=1)
	{
		for (int i = 0; i + step < size; i++)
			if (array[i] > array[i + step])
			{
				goodswap(array[i], array[i + step]);
			}
			step /= 1.247;
	}

}

int main()
{
	setlocale(LC_ALL, "Rus");
	/*int const Max = 5;
	char line[Max]={'C','A','T','!'};
	cout << "Слово: ";
	for (int i = 0; i < Max; i++)
		cout << line[i];
	cout << "\n";
	char line1[Max] = { "CAT!" };
	cout << "Слово: ";
	cout << line[2] << "\n";
	char array[12][10]{ "Январь ","Февраль ","Март ","Апрель " ,"Май " ,"Июнь " ,"Июль ","Август ","Сентябрь ","Октябрь ","Ноябрь ","Декабрь "};
	for(int i =0;i<12;i++)
	cout << array[i];*/

	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	cout << "Массив: ";
	int* array=new int[size];
	init(array, size);
	print(array, size);
	cout << "Отсортированный массив: ";
	hairbrush(array, size);
	print(array, size);


	return 0;
}