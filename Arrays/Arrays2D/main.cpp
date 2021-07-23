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
			arr[i][j] = rand() % 100;
		}
		cout << endl;
	}
	cout << "Исходный массив:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	//			Сортировка массива:
	int iterations = 0;
	int exchanges = 0;
#ifdef DEBUG
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				//int l;	
				//if (k == i)//Если перебирается строка с выбранным элементом
				//	l = j + 1;//то перебор начинается с элемента, следующего за выбранным	
				//else 
				//	l = 0;//Все остальные строки перебираются с начала
				sizeof(int);
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
					iterations++;
				}
			}
		}
	}
#endif // DEBUG

	//это будет работать только со СТАТИЧЕСКИМИ двумерными массивами:
	//с динамическими массивами ЭТО РАБОТАТЬ НЕ БУДЕТ!!!
	for (int i = 0; i < ROWS*COLS; i++)
	{
		for (int j = i + 1; j < ROWS*COLS; j++)
		{
			iterations++;
			if (arr[0][j] < arr[0][i])
			{
				int buffer = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = buffer;
				exchanges++;
			}
		}
	}

	cout << "Сортировка выполнена за " << iterations << " итераций" << endl;
	cout << "При этом выполнено " << exchanges << " обменов элементов\n" << endl;

	cout << "Отсортированный массив:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}