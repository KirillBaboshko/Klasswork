#include <iostream>
using namespace std;
long  fact(long n)
{
	if (n == 0)
	{
		return 1;
	}
	return fact(n - 1) * n;
}

double power(double x, int n)
{
	if (n == 0)
	{
		return 0;
	}
	return power(x, n - 1);
}

long long fib(int n)
{
	static long long fibarr[100]{};
	
	if (n == 0 || n == 1)
		return n;
	if(fibarr[n]==0)
	fibarr[n]=fib (n - 1)+ fib (n-2);
	return fibarr[n];
}

int counter()
{
	static int n = 0;
	return ++n;
}

void bin(int n)
{
	if (n >=2)
		bin(n / 2);
	cout << n % 2;
}

unsigned long long hanoi (long long n)
{
	if (n == 0)
		return 0;

	return hanoi(n - 1)* 2  + 1;
}

void decto(int n, int p)
{
	if (n >= p)
		decto(n / p,p);
	cout << n % p;
}

int main()
{
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	cout << counter() << "\n";
	cout << fib(100);
	bin(100000000000);
	cout << hanoi (64);
	decto(5,4);

	int m{20};
	int n{10};
	int array[10];
	int* ptr = &n;
	cout << &n <<" "<< ptr <<"\n";
	cout << n << " "<< *ptr <<"\n";
	*ptr = 30;
	cout << n<<" "<<"\n";
	ptr = &m;
	cout << *ptr<<" "<<"\n";
	for (int i = 0; i < 10; i++)
		array[i] = rand() % 10;
	for (int i = 0; i < 10; i++)
		cout << (array + i) << " " << *(array + i) << "\n";

	int m{ 10 };
	int n;
	int* darray;
	cout << "Input size of array\n";
	cin >> n;
	darray = new int[n];
	cout << darray<<" "<<"\n";
	delete[]darray;//освобождение пам€ти
	darray = &m;//ѕотер€ пам€ти если без delete
	cout << darray<<" "<<"\n";


	return 0;
}
