#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 8;	//Количество строк
	const int COLS = 5;	//Количество элементов строки (столбиков)
	int arr[ROWS][COLS] = 
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//Счетчик 'i' нумерует строки
			//Счетчик 'j' нумерует элементы строки (столбики)
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}