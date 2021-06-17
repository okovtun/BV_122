#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define SQUARE
#define TRIANGLE_1
#define TRIANGLE_2
#define TRIANGLE_2_2
#define TRIANGLE_3
#define TRIANGLE_4
#define ROMB
#define PLUSIKI_MINUSIKI

void main()
{
	setlocale(LC_ALL, "ru");
#ifdef SQUARE
	int n;
	cout << "¬ведите количество итераций: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE




#ifdef TRIANGLE_1
	int k;
	cout << "¬ведите количество итераций: "; cin >> k;

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "* ";
		}
		cout << '\n';
	}

#endif // TRIANGLE_1



#ifdef TRIANGLE_2
	int z;
	cout << "¬ведите количество итераций: "; cin >> z;

	for (int i = 0; i < z; i++)
	{
		for (int j = 0; j < z - i; j++)
		{

			cout << "* ";
		}
		cout << '\n';
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_2_2
	int q;
	cout << "¬ведите количество итераций: "; cin >> q;
	for (int i = 0; i < q; i++)
	{
		for (int j = i; j < q; j++)
		{
			cout << "* ";
		} cout << endl;
	}
#endif // TRIANGLE_2_2



#ifdef TRIANGLE_3
	int a;
	cout << "¬ведите количество итераций: "; cin >> a;

	for (int i = 0; i < a; i++) // вывод строк
	{
		for (int j = 0; j < i; j++) // вывод пробелов
		{
			cout << "  ";
		}
		for (int k = i; k < a; k++) // вывод звездочек
		{
			cout << "* ";
		}


		cout << '\n';
	}
#endif // TRIANGLE_3


#ifdef TRIANGLE_4
	int v;
	cout << "¬ведите количество итераций: "; cin >> v;

	for (int i = 0; i < v; i++) // вывод строк
	{
		for (int j = i; j < a - 1; j++) // вывод пробелов
		{
			cout << "  ";
		}
		for (int k = 0; k < i + 1; k++) // вывод звездочек
		{
			cout << "* ";
		}
		cout << '\n';
	}

#endif // TRIANGLE_4


	//int c;
	//
	//cout << "¬ведите количесвто итераций: "; cin >> c;
	//
	//for (int i = 0; i < c; i++)
	//{
	//	for (int j = 0; j < c; j++)
	//	{
	//		cout << "* ";
	//	} cout << endl;
	//}


#ifdef ROMB
	int l;
	cout << "¬ведите количество итераций: "; cin >> l;

	for (int i = 0; i < l; i++) // вывод строк
	{
		for (int j = i; j < l; j++) // вывод пробелов
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++) // вывод звездочек
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 0; i < l; i++) // вывод строк
	{
		for (int j = 0; j < i; j++) // вывод пробелов
		{
			cout << " ";
		}
		for (int k = i; k < l; k++) // вывод звездочек
		{
			cout << "* ";
		}

		cout << '\n';
	}

#endif // ROMB



#ifdef PLUSIKI_MINUSIKI
	int m;
	cout << "¬ведите количество итераций: "; cin >> m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j % 2)
				cout << "- ";
			else
				cout << "+ ";
		} cout << endl;
	}
#endif // PLUSIKI_MINUSIKI









}

