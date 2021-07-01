#include <iostream>
using namespace std;
#define tab "\t"
//#define SQUARE1
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define THOMBUS
//#define THOMBUS2
//#define THOMBUS3
//#define PLUS1
//#define CHESS
//#define CHESS2 
//#define PLUS2
#define SQUARE2

#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define DOWN_RIGHT_ANGLE (char)217
#define DOWN_LEFT_ANGLE (char)192
#define DOWN_RIGHT_ANGLE (char)217
#define VERT_LINE (char)179
#define HORIZ_LINE (char)196<<(char)196
#define WHITE_BOX "\xDB\xDB" //(char)219<<(char)219
#define BLACK_BOX "\x20\x20" //(char)32<< (char)32




void main()

{
	setlocale(LC_ALL, "Russian");
	int n;
	int j;
	int i;

	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef SQUARE1 

	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = 0;
			j < n;
			j++)

		{
			cout << "*";
		}

		cout << endl;
	}
#endif // SQUARE1
#ifdef TRIANGLE1 

	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = 0;
			j <= i;
			j++)

		{
			cout << "*";
		}

		cout << endl;
	}
#endif // TRIANGLE1
#ifdef TRIANGLE2 

	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = i;
			j < n;
			j++)

		{
			cout << "*";
		}

		cout << endl;
	}
#endif // TRIANGLE2  
#ifdef TRIANGLE3 


	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = i;
			j < n;
			j++)
		{
			cout << "*";
		}

		cout << endl;
	}
#endif // TRIANGLE3 
#ifdef TRIANGLE4 


	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		for (int j = 0;
			j <= i;
			j++)
		{
			cout << "*";
		}

		cout << endl;
	}
#endif // TRIANGLE4 
#ifdef THOMBUS 


	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		for (int j = 0;
			j < i;
			j++)
		{
			cout << "* ";
		}

		cout << endl;
	}

	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = i;
			j < n;
			j++)
		{
			cout << "* ";
		}

		cout << endl;
	}



#endif // THOMBUS 
#ifdef THOMBUS2 


	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = i; j < n; j++)	cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++) cout << "  ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  ";
		cout << "/";
		cout << endl;

	}


#endif // THOMBUS2 
#ifdef PLUS1 
	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = 0;
			j < n;
			j++)

		{
			if (j & 1) cout << "+";
			else cout << "-";

		}

		cout << endl;
	}
#endif // PLUS1
#ifdef PLUS2 
	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = 0;
			j < n;
			j++)
			if ((i + j) % 2 == 0)cout << "+ ";
			else cout << "- ";

		cout << endl;

	}


#endif // PLUS2
#ifdef THOMBUS3 


	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = i; j < n; j++)	cout << " ";
		cout << "/";
		for (int j = 0; j < i * 2; j++) cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++) cout << " ";
		cout << "/";
		cout << endl;

	}


#endif // THOMBUS3 
#ifdef CHESS 
	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = 0;
			j < n;
			j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;

	}


#endif // CHESS
#ifdef CHESS2 
	setlocale(LC_ALL, "C");
	/*for (int i = 0;i < 256;i++)
	{
		cout << i << "\t" << (char)i << endl;

	}*/
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else
			{
				/*if ((i + j) %2 == 0) cout << WHITE_BOX;
				else cout << "  ";*/
				cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
			}
		}
		cout << endl;
	}
#endif // CHESS2
#ifdef SQUARE2 
	int l;
	int k;
	for (int i = 0; i < n; i++)
	{
		l = 0;
		while (l < n)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					cout << ((i + j) % 2 == 0 ? "* " : "  ");
				}
			}
			cout << endl;
			l++;
		}
	}

#endif // SQUARE2
}