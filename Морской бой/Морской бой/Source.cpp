#include <iostream>
using namespace std;
int main()
{
	int countship=10;
	setlocale(LC_ALL, "Rus");
	const int size{ 10 };
	int matrix1[size][size];
	int matrix2[size][size];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix1[i][j] = 0;
			matrix2[i][j] = 0;
		}
	}
	int array2[size]{ 1,2,3,4,5,6,7,8,9,10 };
	char array1[11][2]{ " ","A", "B","C","D","E","F","G","H","I","J", };
	cout << "Поле №1\n";
	for (int i = 0; i < 11; i++)
	{
		cout << array1[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << array2[i] << " ";
		for (int j = 0; j < size; j++)
		{

			cout << matrix1[i][j] << " ";

		}
		cout << "\n";
	}
	cout << "Поле №2\n";
	for (int i = 0; i < 11; i++)
	{
		cout << array1[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << array2[i] << " ";
		for (int j = 0; j < size; j++)
		{
			cout << matrix2[i][j] << " ";
		}
		cout << "\n";
	}
	system("cls");

	//int singledeckship = 1;
	//do {
	//	int type = 0;
	//	cout << "Расставте  корабли\n";
	//	cout << "Введите тип корабля: Четырехпалубный-(4) Трехпалубный-(3) Двухпалубный-(2) Однопалубный-(1)\n";
	//	cin >> type;
	//	if (type == 1)
	//	{
	//		
	//		do
	//		{
	//			cout << "\nВведите координаты  "; cout << singledeckship; cout << "  палубы\n";
	//			int u = 0;
	//			char n;
	//			cin >> n;
	//			cin >> u;
	//			int y = u - 1;
	//			int x = 0;
	//			switch (n)
	//			{
	//			case 'A':
	//			{	x = 1 - 1;
	//			break;
	//			}
	//			case 'B':
	//			{	x = 2 - 1;
	//			break;
	//			}
	//			case 'C':
	//			{
	//				x = 3 - 1;
	//				break;
	//			}
	//			case 'D':
	//			{
	//				x = 4 - 1;
	//				break;
	//			}
	//			case 'E':
	//			{
	//				x = 5 - 1;
	//				break;
	//			}
	//			case 'F':
	//			{
	//				x = 6 - 1;
	//				break;
	//			}
	//			case 'G':
	//			{
	//				x = 7 - 1;
	//				break;
	//			}
	//			case 'H':
	//			{
	//				x = 8 - 1;
	//				break;
	//			}
	//			case 'I':
	//			{
	//				x = 9 - 1;
	//				break;
	//			}
	//			case 'J':
	//			{
	//				x = 10 - 1;
	//				break;
	//			}
	//			default:
	//			{
	//				cout << "Введенны не верные данные\n";
	//				break;
	//			}
	//			}

	//			system("cls");
	//			for (int i = 0; i < 11; i++)
	//			{
	//				cout << array1[i] << " ";
	//			}
	//			cout << "\n";
	//			for (int i = 0; i < size; i++)
	//			{

	//				cout << array2[i] << " ";
	//				for (int j = 0; j < size; j++)
	//				{

	//					matrix1[y][x] = 1;

	//					cout << matrix1[i][j] << " ";

	//				}
	//				cout << "\n";

	//			}


	//			if (matrix1[y][x] == matrix1[y - 1][x - 1] || matrix1[y][x] == matrix1[y - 1][x] || matrix1[y][x] == matrix1[y - 1][x + 1] || matrix1[y][x] == matrix1[y][x - 1] || matrix1[y][x] == matrix1[y][x + 1] || matrix1[y][x] == matrix1[y + 1][x - 1] || matrix1[y][x] == matrix1[y + 1][x] || matrix1[y][x] == matrix1[y + 1][x + 1])
	//			{
	//				cout << "Корабли не должны стоять рядом!\n";
	//				cout << "Введите другую координату\n";
	//				matrix1[y][x] = 0;
	//				singledeckship--;
	//			}
	//			
	//			singledeckship++;
	//			countship--;
	//		} while (singledeckship != 5);
	//	}
	//	if (type == 2)
	//	{
	//		int twodeckship = 1;
	//		do
	//		{
	//			int direction = 0;
	//			cout << "По горизонтали - введите 1\n";
	//			cout << "По вертикали - введите 2\n";
	//			cin >> direction;
	//			cout << "\nВведите координаты  "; cout << twodeckship; cout << "  палубы\n";
	//			int u = 0;
	//			char n;
	//			cin >> n;
	//			cin >> u;
	//			int y = u - 1;
	//			int x = 0;
	//			switch (n)
	//			{
	//			case 'A':
	//			{	x = 1 - 1;
	//			break;
	//			}
	//			case 'B':
	//			{	x = 2 - 1;
	//			break;
	//			}
	//			case 'C':
	//			{
	//				x = 3 - 1;
	//				break;
	//			}
	//			case 'D':
	//			{
	//				x = 4 - 1;
	//				break;
	//			}
	//			case 'E':
	//			{
	//				x = 5 - 1;
	//				break;
	//			}
	//			case 'F':
	//			{
	//				x = 6 - 1;
	//				break;
	//			}
	//			case 'G':
	//			{
	//				x = 7 - 1;
	//				break;
	//			}
	//			case 'H':
	//			{
	//				x = 8 - 1;
	//				break;
	//			}
	//			case 'I':
	//			{
	//				x = 9 - 1;
	//				break;
	//			}
	//			case 'J':
	//			{
	//				x = 10 - 1;
	//				break;
	//			}
	//			default:
	//			{
	//				cout << "Введенны не верные данные\n";
	//				break;
	//			}
	//			}
	//			system("cls");
	//			if (u > 10 || x > 10 || x < 0 || u < 1)
	//			{
	//				cout << "Корабль не может стоять за полем!\n";
	//				cout << "Введите другую координату\n";
	//				twodeckship--;
	//			}
	//			matrix1[y][x] = 1;
	//			if (direction == 1)
	//			{
	//				matrix1[y][x + 1] = 1;
	//				if (matrix1[y][x] == matrix1[y - 1][x - 1] || matrix1[y][x] == matrix1[y - 1][x] || matrix1[y][x] == matrix1[y - 1][x + 1] || matrix1[y][x] == matrix1[y - 1][x + 2] || matrix1[y][x] == matrix1[y][x - 1] || matrix1[y][x] == matrix1[y][x + 2] || matrix1[y][x] == matrix1[y - 1][x - 1] || matrix1[y][x] == matrix1[y + 1][x] || matrix1[y][x] == matrix1[y + 1][x + 1] || matrix1[y][x] == matrix1[y + 1][x + 2])
	//				{
	//					cout << "Корабли не должны стоять рядом!\n";
	//					cout << "Введите другую координату\n";
	//					matrix1[y][x] = 0;
	//					matrix1[y][x + 1] = 0;
	//					twodeckship--;
	//				}
	//			}
	//			if (direction == 2)
	//			{
	//				matrix1[y + 1][x] = 1;
	//				if (matrix1[y][x] == matrix1[y - 1][x - 1] || matrix1[y][x] == matrix1[y - 1][x] || matrix1[y][x] == matrix1[y - 1][x + 1] || matrix1[y][x] == matrix1[y][x - 1] || matrix1[y][x] == matrix1[y][x + 1] || matrix1[y][x] == matrix1[y + 1][x - 1] || matrix1[y][x] == matrix1[y + 1][x + 1] || matrix1[y][x] == matrix1[y + 2][x - 1] || matrix1[y][x] == matrix1[y + 2][x] || matrix1[y][x] == matrix1[y + 2][x + 1])
	//				{
	//					cout << "Корабли не должны стоять рядом!\n";
	//					cout << "Введите другую координату\n";
	//					matrix1[y][x] = 0;
	//					matrix1[y + 1][x] = 0;
	//					twodeckship--;
	//				}
	//			}
	//			for (int i = 0; i < 11; i++)
	//			{
	//				cout << array1[i] << " ";
	//			}
	//			cout << "\n";
	//			for (int i = 0; i < size; i++)
	//			{
	//				cout << array2[i] << " ";
	//				for (int j = 0; j < size; j++)
	//				{
	//					cout << matrix1[i][j] << " ";
	//				}
	//				cout << "\n";
	//			}
	//			twodeckship++;
	//			countship--;
	//		} while (twodeckship != 4);
	//	}

	//	if (type == 3)
	//	{
	//		int threedeckship = 1;
	//		do
	//		{
	//			int direction = 0;
	//			cout << "По горизонтали - введите 1\n";
	//			cout << "По вертикали - введите 2\n";
	//			cin >> direction;
	//			cout << "\nВведите координаты  "; cout << threedeckship; cout << "  палубы\n";
	//			int u = 0;
	//			char n;
	//			cin >> n;
	//			cin >> u;
	//			int y = u - 1;
	//			int x = 0;
	//			switch (n)
	//			{
	//			case 'A':
	//			{	x = 1 - 1;
	//			break;
	//			}
	//			case 'B':
	//			{	x = 2 - 1;
	//			break;
	//			}
	//			case 'C':
	//			{
	//				x = 3 - 1;
	//				break;
	//			}
	//			case 'D':
	//			{
	//				x = 4 - 1;
	//				break;
	//			}
	//			case 'E':
	//			{
	//				x = 5 - 1;
	//				break;
	//			}
	//			case 'F':
	//			{
	//				x = 6 - 1;
	//				break;
	//			}
	//			case 'G':
	//			{
	//				x = 7 - 1;
	//				break;
	//			}
	//			case 'H':
	//			{
	//				x = 8 - 1;
	//				break;
	//			}
	//			case 'I':
	//			{
	//				x = 9 - 1;
	//				break;
	//			}
	//			case 'J':
	//			{
	//				x = 10 - 1;
	//				break;
	//			}
	//			default:
	//			{
	//				cout << "Введенны не верные данные\n";
	//				break;
	//			}
	//			}
	//			system("cls");
	//			if (u > 10 || x > 10 || x < 0 || u < 1)
	//			{
	//				cout << "Корабль не может стоять за полем!\n";
	//				cout << "Введите другую координату\n";
	//				threedeckship--;
	//			}
	//			matrix1[y][x] = 1;
	//			if (direction == 1)
	//			{
	//				matrix1[y][x + 1] = 1;
	//				matrix1[y][x + 2] = 1;
	//				if (matrix1[y][x] == matrix1[y - 1][x - 1] || matrix1[y][x] == matrix1[y - 1][x] || matrix1[y][x] == matrix1[y - 1][x + 1] || matrix1[y][x] == matrix1[y - 1][x + 2] || matrix1[y][x] == matrix1[y - 1][x + 3] || matrix1[y][x] == matrix1[y][x - 1] || matrix1[y][x] == matrix1[y][x + 3] || matrix1[y][x] == matrix1[y + 1][x - 1] || matrix1[y][x] == matrix1[y + 1][x] || matrix1[y][x] == matrix1[y + 1][x + 1] || matrix1[y][x] == matrix1[y + 1][x + 2] || matrix1[y][x] == matrix1[y + 1][x + 3])
	//				{
	//					cout << "Корабли не должны стоять рядом!\n";
	//					cout << "Введите другую координату\n";
	//					matrix1[y][x] = 0;
	//					matrix1[y][x + 1] = 0;
	//					matrix1[y][x + 2] = 0;
	//					threedeckship--;
	//				}
	//			}
	//			if (direction == 2)
	//			{
	//				matrix1[y + 1][x] = 1;
	//				matrix1[y + 2][x] = 1;
	//				if (matrix1[y][x] == matrix1[y - 1][x - 1] || matrix1[y][x] == matrix1[y - 1][x] || matrix1[y][x] == matrix1[y - 1][x + 1] || matrix1[y][x] == matrix1[y][x - 1] || matrix1[y][x] == matrix1[y][x + 1] || matrix1[y][x] == matrix1[y + 1][x - 1] || matrix1[y][x] == matrix1[y + 1][x + 1] || matrix1[y][x] == matrix1[y + 2][x + 1] || matrix1[y][x] == matrix1[y + 2][x - 1] || matrix1[y][x] == matrix1[y + 3][x - 1] || matrix1[y][x] == matrix1[y + 3][x + 1] || matrix1[y][x] == matrix1[y + 3][x])
	//				{
	//					cout << "Корабли не должны стоять рядом!\n";
	//					cout << "Введите другую координату\n";
	//					matrix1[y][x] = 0;
	//					matrix1[y + 1][x] = 0;
	//					matrix1[y + 2][x] = 0;
	//					threedeckship--;
	//				}
	//			}
	//			for (int i = 0; i < 11; i++)
	//			{
	//				cout << array1[i] << " ";
	//			}
	//			cout << "\n";
	//			for (int i = 0; i < size; i++)
	//			{
	//				cout << array2[i] << " ";
	//				for (int j = 0; j < size; j++)
	//				{
	//					cout << matrix1[i][j] << " ";
	//				}
	//				cout << "\n";
	//			}

	//			threedeckship++;
	//			countship--;
	//		} while (threedeckship != 3);
	//	}

	//	if (type == 4)
	//	{
	//		int fourdeckship = 1;
	//		do
	//		{
	//			int direction = 0;
	//			cout << "По горизонтали - введите 1\n";
	//			cout << "По вертикали - введите 2\n";
	//			cin >> direction;
	//			cout << "\nВведите координаты  "; cout << fourdeckship; cout << "  палубы\n";
	//			int u = 0;
	//			char n;
	//			cin >> n;
	//			cin >> u;
	//			int y = u - 1;
	//			int x = 0;
	//			switch (n)
	//			{
	//			case 'A':
	//			{	x = 1 - 1;
	//			break;
	//			}
	//			case 'B':
	//			{	x = 2 - 1;
	//			break;
	//			}
	//			case 'C':
	//			{
	//				x = 3 - 1;
	//				break;
	//			}
	//			case 'D':
	//			{
	//				x = 4 - 1;
	//				break;
	//			}
	//			case 'E':
	//			{
	//				x = 5 - 1;
	//				break;
	//			}
	//			case 'F':
	//			{
	//				x = 6 - 1;
	//				break;
	//			}
	//			case 'G':
	//			{
	//				x = 7 - 1;
	//				break;
	//			}
	//			case 'H':
	//			{
	//				x = 8 - 1;
	//				break;
	//			}
	//			case 'I':
	//			{
	//				x = 9 - 1;
	//				break;
	//			}
	//			case 'J':
	//			{
	//				x = 10 - 1;
	//				break;
	//			}
	//			default:
	//			{
	//				cout << "Введенны не верные данные\n";
	//				break;
	//			}
	//			}
	//			system("cls");
	//			if (u > 10 || x > 10 || x < 0 || u < 1)
	//			{
	//				cout << "Корабль не может стоять за полем!\n";
	//				cout << "Введите другую координату\n";
	//				fourdeckship--;
	//			}
	//			matrix1[y][x] = 1;
	//			if (direction == 1)
	//			{
	//				matrix1[y][x + 1] = 1;
	//				matrix1[y][x + 2] = 1;
	//				matrix1[y][x + 3] = 1;
	//				if (matrix1[y][x] == matrix1[y - 1][x - 1] || matrix1[y][x] == matrix1[y - 1][x] || matrix1[y][x] == matrix1[y - 1][x + 1] || matrix1[y][x] == matrix1[y - 1][x + 2] || matrix1[y][x] == matrix1[y - 1][x + 3] || matrix1[y][x] == matrix1[y - 1][x + 4] || matrix1[y][x] == matrix1[y][x - 1] || matrix1[y][x] == matrix1[y][x + 4] || matrix1[y][x] == matrix1[y + 1][x - 1] || matrix1[y][x] == matrix1[y + 1][x] || matrix1[y][x] == matrix1[y + 1][x + 1] || matrix1[y][x] == matrix1[y + 1][x + 2] || matrix1[y][x] == matrix1[y + 1][x + 3] || matrix1[y][x] == matrix1[y + 1][x + 4])
	//				{
	//					cout << "Корабли не должны стоять рядом!\n";
	//					cout << "Введите другую координату\n";
	//					matrix1[y][x] = 0;
	//					matrix1[y][x + 1] = 0;
	//					matrix1[y][x + 2] = 0;
	//					matrix1[y][x + 3] = 0;
	//					fourdeckship--;
	//				}
	//			}
	//			if (direction == 2)
	//			{
	//				matrix1[y + 1][x] = 1;
	//				matrix1[y + 2][x] = 1;
	//				matrix1[y + 3][x] = 1;
	//				if (matrix1[y][x] == matrix1[y - 1][x - 1] || matrix1[y][x] == matrix1[y - 1][x] || matrix1[y][x] == matrix1[y - 1][x + 1] || matrix1[y][x] == matrix1[y][x - 1] || matrix1[y][x] == matrix1[y][x + 1] || matrix1[y][x] == matrix1[y + 1][x - 1] || matrix1[y][x] == matrix1[y + 2][x - 1] || matrix1[y][x] == matrix1[y + 3][x - 1] || matrix1[y][x] == matrix1[y + 4][x - 1] || matrix1[y][x] == matrix1[y + 4][x] || matrix1[y][x] == matrix1[y + 1][x + 1] || matrix1[y][x] == matrix1[y + 2][x + 1] || matrix1[y][x] == matrix1[y + 3][x + 1] || matrix1[y][x] == matrix1[y + 4][x + 1])
	//				{
	//					cout << "Корабли не должны стоять рядом!\n";
	//					cout << "Введите другую координату\n";
	//					matrix1[y][x] = 0;
	//					matrix1[y + 1][x] = 0;
	//					matrix1[y + 2][x] = 0;
	//					matrix1[y][x + 3] = 0;
	//					fourdeckship--;
	//				}
	//			}
	//			for (int i = 0; i < 11; i++)
	//			{
	//				cout << array1[i] << " ";
	//			}
	//			cout << "\n";
	//			for (int i = 0; i < size; i++)
	//			{
	//				cout << array2[i] << " ";
	//				for (int j = 0; j < size; j++)
	//				{
	//					cout << matrix1[i][j] << " ";
	//				}
	//				cout << "\n";
	//			}
	//			fourdeckship++;
	//			countship--;
	//		} while (fourdeckship != 2);
	//	}
	//}while (countship != 0);
		srand((time(NULL)));
		int i = 0;
		cout << "Однопалубные\n";
		do
		{
			int e = rand() % 10 + 1;
			int u = rand() % 10 + 1;
			cout << e;
			cout << u << "\n";
			int x = e - 1;
			int y = u - 1;
			matrix2[y][x] = 1;
			if (matrix2[y][x] == matrix2[y - 1][x - 1] || matrix2[y][x] == matrix2[y - 1][x] || matrix2[y][x] == matrix2[y - 1][x + 1] || matrix2[y][x] == matrix2[y][x - 1] || matrix2[y][x] == matrix2[y][x + 1] || matrix2[y][x] == matrix2[y + 1][x - 1] || matrix2[y][x] == matrix2[y + 1][x] || matrix2[y][x] == matrix2[y + 1][x + 1])
			{
				matrix2[y][x] = 0;
				i--;
			}
			//system("cls");
			for (int i = 0; i < 11; i++)
			{
				cout << array1[i] << " ";
			}
			cout << "\n";
			for (int i = 0; i < size; i++)
			{

				cout << array2[i] << " ";
				for (int j = 0; j < size; j++)
				{
					cout << matrix2[i][j] << " ";
				}
				cout << "\n";
			}
			i++;
		}while (i != 4);
		cout << "Двухпалубные\n";
		int j = 0;
		do
		{
			int e = rand() % 10 + 1;
			int u = rand() % 10 + 1;
			int direction = rand() % 2 + 1;
			cout << e;
			cout << u << "\n";
			int x = e - 1;
			int y = u - 1;
			matrix2[y][x] = 1;
			if (direction == 1)
			{
				if (matrix2[y][x] == matrix2[y - 1][x - 1] || matrix2[y][x] == matrix2[y - 1][x] || matrix2[y][x] == matrix2[y - 1][x + 1] || matrix2[y][x] == matrix2[y - 1][x + 2] || matrix2[y][x] == matrix2[y][x - 1] || matrix2[y][x] == matrix2[y][x + 2] || matrix2[y][x] == matrix2[y - 1][x - 1] || matrix2[y][x] == matrix2[y + 1][x] || matrix2[y][x] == matrix2[y + 1][x + 1] || matrix2[y][x] == matrix2[y + 1][x + 2])
				{
					matrix2[y][x] = 0;
					matrix2[y][x + 1] = 0;
					j--;
				}
				matrix2[y][x + 1] = 1;
			}
			if (direction == 2)
			{
				if (matrix2[y][x] == matrix2[y - 1][x - 1] || matrix2[y][x] == matrix2[y - 1][x] || matrix2[y][x] == matrix2[y - 1][x + 1] || matrix2[y][x] == matrix2[y][x - 1] || matrix2[y][x] == matrix2[y][x + 1] || matrix2[y][x] == matrix2[y + 1][x - 1] || matrix2[y][x] == matrix2[y + 1][x + 1] || matrix2[y][x] == matrix2[y + 2][x - 1] || matrix2[y][x] == matrix2[y + 2][x] || matrix2[y][x] == matrix2[y + 2][x + 1])
				{
					matrix2[y][x] = 0;
					matrix2[y + 1][x] = 0;
					j--;
				}
				matrix2[y + 1][x] = 1;
			}
			//system("cls");
			for (int i = 0; i < 11; i++)
			{
				cout << array1[i] << " ";
			}
			cout << "\n";
			for (int i = 0; i < size; i++)
			{

				cout << array2[i] << " ";
				for (int j = 0; j < size; j++)
				{
					cout << matrix2[i][j] << " ";
				}
				cout << "\n";
			}
			j++;
		} while (j != 3);



		

	return 0;
}