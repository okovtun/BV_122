#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
#define TRIANGLE_3
#define TRIANGLE_4

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)//Этот for повторяет вывод строки
	{
		for (int j = 0; j < n; j++)	//Этот for выводит строку из звездочек, 
									//повторяя вывод звездочки на экран.
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

	for (int i = 0; i < n; i++)//Повторяет вывод строки
	{
		//Вывод пробелов:

		//Вывод звездочек:
		
		cout << endl;
	}
}