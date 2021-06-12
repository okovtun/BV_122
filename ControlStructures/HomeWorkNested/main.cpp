#include<iostream>

using namespace std;

//#define BEAUTIFUL_MULTIPLICATION
//#define MULTIPLICATION
#define PIFAGOR

void main()
{
	int k;

#ifdef BEAUTIFUL_MULTIPLICATION
	for (int i = 0; i < 97; i++)
	{
		cout << char(219);
	}
	putchar('\n');
	for (int i = 1; i < 11; i++)
	{
		cout << char(219) << '\t';
		for (int j = 1; j < 11; j++)
		{
			k = i * j;
			cout << j << "*" << i << "=" << k;
			if (k < 100)
				cout << '\t';
			else
				cout << "  ";
		}
		cout << '\t' << char(219);
		putchar('\n');
	}
	for (int i = 0; i < 97; i++)
	{
		cout << char(219);
	}
#endif // BEAUTIFUL_MULTIPLICATION

#ifdef MULTIPLICATION
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			k = i * j;
			cout << j << "*" << i << "=" << k << "\t";
		}
		putchar('\n');
	}
#endif // MULTIPLICATION

#ifdef PIFAGOR
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			k = i * j;
			cout << k << '\t';
		}
		printf("\n");
	}
#endif // PIFAGOR

}