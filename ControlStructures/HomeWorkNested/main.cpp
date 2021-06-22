#include <iostream>
#include<conio.h>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
#define RUM
//#define PLUS_MINUS
//#define CHESS_BOARD
//#define CHESS_BOARD_2
#define CHESS_BOARD_3



void main()

{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите длину стороны фигуры: "; cin >> n;
#ifdef SQUARE //выводим квадрат
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;

	}
	cout << endl;
#endif // SQUARE

#ifdef TRIANGLE_1 //выводим прямоугольный треугольник
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";

		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_1

#ifdef TRIANGLE_2 //выводим перевернутый прямоугольный треугольник - способ 2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";

		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_2

#ifdef TRIANGLE_3 //выводим отражение прямоугольного треугольника через квадрат
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if (j >=i) cout << "* ";
			else cout << "  ";*/
			cout << (j >= i ? "* " : "  ");
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_3

#ifdef TRIANGLE_4	//выводим перевернутое отражение прямоугольного треугольника через квадрат
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << (j >= n - i - 1 ? "* " : "  ");
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIAGLE_4

#ifdef RUM //если считаем, что задаем половину диагонали ромба, принцип построения из 2 треугольников

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i * 2; j++)	cout << " ";
		cout << "\\";

		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = i; j < n * 2 - i - 2; j++) cout << " ";
		cout << "/";
		cout << endl;

	}
	cout << endl;

#endif // RUM

#ifdef PLUS_MINUS //для четных строк + выводится в четных столбцах, для нечетных + выводится в нечетных
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << ((j - i) % 2 == 0 ? "+ " : "- ");

		}
		cout << endl;
	}
	cout << endl;

#endif // PLUS_MINUS


#ifdef CHESS_BOARD
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < 2; k++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int l = 0; l < 2; l++)
				{
					if ((j - i) % 2 == 0) cout << "+ ";
					else cout << "  ";
				}

			}
			cout << endl;
		}


	}

	cout << endl;
#endif // CHESS_BOARD

#ifdef CHESS_BOARD_2
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n + 1; i++)
		cout << char(196) << char(196);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n + 1; j++)
		{
			if (j == 0) cout << "|";
			if (j == n) cout << "|";
			else
			{
				if ((j - i) % 2 == 0) cout << "\x1b[37;47m  \x1b[0m";
				else
					cout << "  ";
			}
		}
		cout << endl;
	}
	for (int i = n + 1; i <= 2 * n + 1; i++)
		cout << char(196) << char(196);
	cout << endl;

#endif // CHESS_BOARD_2

#ifdef CHESS_BOARD_3
	setlocale(LC_ALL, "C");

	for (int i = 0; i < n + 2; i++)
	{
		for (int j = 0; j < n + 2; j++)

		{
			/*if(i == 0) cout << char(196) << char(196);
			if (j == 0) cout << "| ";
			if (j == n + 1) cout << " |";
			if (i == n+1) cout << char(196) << char(196);*/ //вывести отдельно части рамки не получается

			if (i == 0 || i == n + 1 || j == 0 || j == n + 1) cout << "**";
			else
			{
				if ((j - i) % 2 == 0) cout << "\x1b[37;47m  \x1b[0m";
				else
					cout << "  ";
			}
		}
		cout << endl;
	}

	cout << endl;

#endif // CHESS_BOARD_3
}