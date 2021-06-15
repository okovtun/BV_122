#include<iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Read1: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*\n";
			cout << "**\n";
			cout << "***\n";
			cout << "****\n";
			cout << "*****" << endl;
		}
		cout << endl;
	}

	int n1;
	cout << "Read2: "; cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			cout << "*****\n";
			cout << "****\n";
			cout << "***\n";
			cout << "**\n";
			cout << "*";
		}
		cout << endl;
	}

	int n2;
	cout << "Read: "; cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cout << "*****\n";
			cout << " ****\n";
			cout << "  ***\n";
			cout << "   **\n";
			cout << "    *";
		}
		cout << endl;
	}

	int n3;
	cout << "Read: "; cin >> n3;
	for (int i = 0; i < n3; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			cout << "    *\n";
			cout << "   **\n";
			cout << "  ***\n";
			cout << " ****\n";
			cout << "*****";
		}
		cout << endl;
	}

	int n4;
	cout << "Read: "; cin >> n4;
	for (int i = 0; i < n4; i++)
	{
		for (int j = 0; j < n4; j++)
		{
			cout << "\n    /\\";
			cout << "\n   /  \\";
			cout << "\n  /    \\";
			cout << "\n /      \\";
			cout << "\n/        \\";
			cout << " \n\\        /";
			cout << "  \n \\      /";
			cout << "   \n  \\    /";
			cout << "    \n   \\  /";
			cout << "     \n    \\/";
		}
		cout << endl;
	}
}