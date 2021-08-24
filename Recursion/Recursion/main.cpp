#include<iostream>
using namespace std;

void elevator(int floor);
int factorial(int n);
double power(int a, int n);
void Fibonacci(int n/*, int a = 0, int b = 1*/);
//int Fibonacci(int n);

//#define ELEVATOR
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "Russian");
	/*cout << "Hello World";
	main();*/

#ifdef ELEVATOR
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
#endif // ELEVATOR

#ifdef FACTORIAL
	int n;
	cout << "Введите число для вычисления Факториала: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a;
	int n;
	cout << "Введите основание и показатель степени: "; cin >> a >> n;
	cout << power(a, n) << endl;
#endif // POWER

	int n;
	cout << "До какого предела вывести ряд Фибоначчи? "; cin >> n;
	Fibonacci(n);
	/*for (int i = 0; i < n; i++)
	{
		cout << Fibonacci(i) << "\t";
	}*/

	//main();
}

void elevator(int floor)
{
	if (floor == 0)	//Условие выхода из рекурсии
	{
		cout << floor;
		cout << " Вы в подвале" << endl;
		return;
	}
	cout << floor << endl;
	elevator(floor - 1);
	cout << floor << endl;
}

int factorial(int n)
{
	/*if (n == 0)return 1;
	return n * factorial(n - 1);*/
	return n == 0 ? 1 : n * factorial(n - 1);
}

double power(int a, int n)
{
	/*if (n == 0)return 1;
	if (n < 0)
	{
		return 1./a * power(a, n + 1);
	}
	return a * power(a, n - 1);*/

	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1. / a * power(a, n + 1);
}

void Fibonacci(int n/*, int a, int b*/)
{
	static int a = 0, b = 1, c = 1;
	if (a > n)return;
	cout << a << "\t";
	//Fibonacci(n, b, a + b);
	/*a = b;
	b = c;
	c = a + b;*/

	Fibonacci(n);
}
//int Fibonacci(int n)
//{
//	if (n == 0 || n == 1)return n;
//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//}