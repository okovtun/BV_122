#include <iostream>
using namespace std;
#define tab "\t"
//#define SQUARE1
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
#define THOMBUS

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


	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
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
}