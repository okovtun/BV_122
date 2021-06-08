#include <iostream>
using namespace std;
#define tab "\t"
//#define LESSON
//#define FACTORIAL
//#define POWER_1
//#define MATRIX_ASCII

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef LESSON
	int m;//количество итераций
	cout << "Введите количество итераций: "; cin >> m;
	for (int i = 0; //Start
		i < m; //Stop
		i++)//Step
	{
		cout << i << tab;

	}

	cout << endl;
#endif // LESSON

	/*signed long long int a, b, r = 1;
	cout << "Введите число которое будете возводить в степень: "; cin >> a;
	cout << "Введите степень: "; cin >> b;

	for (int c = 0; c < b; c++)
	{
		r *= a;
	}
	cout << a << "^" << b << "=" << r << endl;

	system("pause");
	system("cls");
	main();*/

	double a, n, b = 1;
	cout << "Введите число: "; cin >> a;
	cout << "Введите степень: "; cin >> n;
	if (n > 0)
		for (int i = 0; i < n; i++)
		{
			b *= a;
		}
	cout << "Ответ: " << b << endl;

#ifdef FACTORIAL
	int n;
	int f = 1;
	cout << endl << "Вычисление факториала" << endl << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{

		f *= i;

		cout << f << tab;
	}

	cout << endl << endl << "Факториал числа " << n << "!=" << f << endl;

#endif // FACTORIAL

#ifdef POWER_1
	int m;
	int a;
	cout << endl << "Возведение числа в степень" << endl << "Введите число: "; cin >> a;
	cout << "Введите степень: "; cin >> m;
	int power = a;
	for (int i = 1; i < m; i++)
	{
		power *= a;
		cout << power << tab;
	}

	cout << endl << a << " в степени " << m << "=" << power << endl;
#endif // POWER_1

#ifdef MATRIX_ASCII
	cout << endl << "Вывод на экран ASCII-символов" << endl << endl;
	for (int i = 0; i < 16; i++) // кол-во строк
	{
		for (int j = i * 16; j < i * 16 + 16; j++) // кол-во символов в каждой строке
		{
			cout /*<< j << ":"*/ << char(j) << " ";
		}
		cout << endl; // переход на строку ниже
	}
#endif // MATRIX_ASCII




}