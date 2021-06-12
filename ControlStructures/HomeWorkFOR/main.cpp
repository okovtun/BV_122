#include<iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define FACTORIAL
//ОПРЕДЕЛИТЬ
//#define POWER
//#define ASCII

void main()
{
	setlocale(LC_ALL, "Rus");

#if defined FACTORIAL
	//ЕСЛИ ОПРЕДЕЛЕНО
	int n;	//Чсло для вычисления факториала
	int f = 1;	//Фаториал введенного числа
	//Переменная f будет хранить промежуточные результаты (Факториалы) и приведет нас к конечному результату
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i; //f = f * i;
		cout << f << endl;
	}
	//https://www.google.com/search?q=%D0%94%D0%BB%D0%B8%D0%BD%D0%BD%D0%B0%D1%8F+%D0%B0%D1%80%D0%B8%D1%84%D0%BC%D0%B5%D1%82%D0%B8%D0%BA%D0%B0&rlz=1C1GCEB_enUA900UA900&oq=%D0%94%D0%BB%D0%B8%D0%BD%D0%BD%D0%B0%D1%8F+%D0%B0%D1%80%D0%B8%D1%84%D0%BC%D0%B5%D1%82%D0%B8%D0%BA%D0%B0&aqs=chrome..69i57j0l9.5001j0j7&sourceid=chrome&ie=UTF-8
	//https://ru.wikipedia.org/wiki/%D0%94%D0%BB%D0%B8%D0%BD%D0%BD%D0%B0%D1%8F_%D0%B0%D1%80%D0%B8%D1%84%D0%BC%D0%B5%D1%82%D0%B8%D0%BA%D0%B0
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;	//Основание степени
	int n;	//Показатель степени
	double N = 1;	//Степень - результат возведения в сепень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;

	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		a = 1 / a;	//Отправляем основание степени в знаменатель
		n = -n;		//Меняем знак показателя на противополжный
	}
	for (int i = 0; i < n; i++)
	{
		//cout << a << " ^ " << i << " = " << N << endl;;
		N *= a;
	}
	//cout << a << " ^ " << n << " = " << N << endl;
	cout << N << endl;
#endif // POWER_1
	/*if (n < 0)
	{
		N = 1 / a;
	}
	for (int i = 0; i < n; i++)
	{
			N *= a;
	}
	cout << a << " ^ " << n << " = " << N << endl;*/

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
#endif // ASCII
	/*int n = 10;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i << tab << j << endl;
		}
		cout << "------------------------------\n";
	}*/

	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			for (int s = 0; s < 60; s++)
			{
				//system("CLS");
				cout << h << ":" << m << ":" << s << "\r";
				//cout << "\r";
				Sleep(100);
			}
		}
	}
}