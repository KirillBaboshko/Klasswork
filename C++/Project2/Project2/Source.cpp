#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int number1, number2, rez;
	char n;
	cout << "������� ������ �����";
	cin >> number1;
	cout << "������� ������ �����";
	cin >> number2;
	cout << "������� ��������";
	cin >> n;
	if (n == '+')
	{
		rez = number1 + number2;
		cout << rez;
	}
	if (n == '-')
	{
		rez = number1 - number2;
		cout << rez;
	}
	if (n == '*')
	{
		rez = number1 * number2;
		cout << rez;
	}
	if (n == '/')
	{
		rez = number1 + number2;
		cout << rez;
	}
	if (number1 > number2)
	{
		rez = number1;
		cout << rez;
	}
	
	if (number1 < number2)
	{
		rez = number2;
		cout << rez;
	}

	return 0;
}