#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)//Этот for повторяет вывод строки
	{
		for (int j = 0; j < n; j++)	//Этот for выводит строку из звездочек, повторяя вывод звездочки на экран
		{
			cout << "* ";
		}
		cout << endl;
	}
}