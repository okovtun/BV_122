#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };

	//Ввод элементов массива с клавиатуры:
	cout << "Введите значения элементов: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке (от последнего элемента к нулевому):
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}