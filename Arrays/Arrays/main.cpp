#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];

	cout << "Введите значения элементов массива (" << n << " штука):\n";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];	//Вводим значение элемента с клавиатры.
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке (от последнего элемента до нулевого):
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сумма элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое:  " << (double)sum / n << endl;

	//Минимальное и максимальное значение в массиве:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве:" << max << endl;
}