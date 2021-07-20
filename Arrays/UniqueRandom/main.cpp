﻿//UniqueRandom
#pragma warning(disable:4326)
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	//Генерация уникальных случайных чисел:
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do	//!!!ГЕНЕРИРУЕМ СЛУЧАЙНОЕ ЧИСЛО ДО ТЕХ ПОР->
		{
			arr[i] = rand() % 10;
			unique = true;	//Надеемся на то, что сгенерировалось УНИКАЛЬНОЕ случайное число,
			//но это нужно проверить:
			for (int j = 0; j < i; j++)	//Перебирает левую часть массива относительно 
										//выбранного элемента в поисках повторений
			{
				if (arr[i] == arr[j])	//ЕСЛИ произошло совпадение
				{
					unique = false;//то сгенерированное случайное число НЕ уникально
					break;	//Прерывает текущую итерацию, и все последующие.
				}
			}
		} while (!unique);	//->ПОКА ОНО НЕ УНИКАЛЬНО!!!
	}
	//Вывод на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}