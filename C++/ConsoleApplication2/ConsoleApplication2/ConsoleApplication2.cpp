#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int number1, number2, rez;
	char n;
	cout << "Введите первое число";
	cin >> number1;
	cout << "Введите второе число";
	cin >> number2;
	cout << "Введите значение";
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
	else
	{
		cout << number2;
	}


	return 0;
}