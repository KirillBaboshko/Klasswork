#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	/*int bal;
	cout << "������� ������";
	cin >> bal;
	int pokypka;
	int n{ 0 };
	do
	{
		cout << "������� �����-" << ++n << "\n";
		cout <<  "������� ����� �������";
		cin >> pokypka;
		if (bal >= pokypka)
		{
			bal = bal - pokypka;
			cout << "������� ����������, ������" << bal<< "\n";
		}
		else
		{
			cout << "������������ �������\n";
		}

		cout << "���������� �������?(y/n)\n";
		char answer;
		cin >> answer;
		if (answer =='n')
			break;
		

	} while (bal > 0);*/
		
	/*for (int i = 0; i < 11; i+=2)
	{

		if (i % 2 ==0)
		{
			cout << i << "\n";
		}
		
	}*/
	
	/*int z;
	cout << "������� ���-�� ���������\n";
		cin >> z;

		for (int i = 0; i < z; i++)
		{
			cout << "*";

		}*/

	/*int h;
	int v;
	cout << "������� ������\n";
	cin >> h;
	cout << "������� ������\n";
	cin >> v;
	for (int j = 0; j < v; j++)
	{
		for (int i = 0; i < h; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}*/

	/*int size;
	cout << "������� ������ ��������";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == size / 2|| i==size /2|| i==j||size-1-i==j)
				cout << "*";
			else
				cout << " ";


		}
		cout << "\n";

	 }*/

	/*int n;
	cout << "������� �����";
	cin >> n;

	unsigned long long fact{1};

	for (int i = 1; i < n; i++)
	{
		fact *= i;
	}
	cout << n << "!= " << fact << "\n";*/
	
	/*int n;
	cout << "������� �����\n";
	cin >> n;
	int f0{ 0 }, f1{ 1 };
	for (int i = 2; i <= n; i++)
	{
		int temp = f1;
		f1 += f0;
		f0 = temp;
	}

	cout << "F" << n << "=" << f1 << "\n";*/
	
	/*int clock{0};

	for (int i = 1; i <=12; i++)
	{
		clock += i;
	}
	cout << clock << "\n";*/

	/*int number;
	int sum{ 0 };
	do
	{
		cout << "������� �����";
		cin >> number;
		sum += number;


	} while (number!= 0);
	cout << sum;*/

	/*int n;
	cout << "������� ����";
	cin >> n;
	int revers;
	while (n > 0)
	{
		cout << n % 10;
		n = n / 10;
	}*/
	


	return 0;
}
