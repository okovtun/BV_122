//Random
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	//rand();	//Возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND).
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%5;
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}