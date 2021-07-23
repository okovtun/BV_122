#include <iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	const int ROWS = 8;
	const int COLS = 5;
	const int SIZE = ROWS * COLS;
	int arr[ROWS][COLS] = {};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % SIZE;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) cout << arr[i][j] << "\t"; cout << endl << endl;
	}
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Сумма значений элементов массива = " << sum << endl;
	cout << "Среднее арифметическое значений элементов массива = " << sum / SIZE << endl;
	int max = arr[0][0];
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	cout << "Максимальное значение = " << max << endl;
	cout << "Минимальное значение = " << min << endl;
}