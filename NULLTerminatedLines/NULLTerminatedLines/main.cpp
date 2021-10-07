//NULLTerminatedLines
#include<iostream>
#include<Windows.h>
using namespace std;

//ASCII-символ с кодом 0:  '\0'

int StringLength(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";
	const int n = 20;
	char str[20]{};
	cout << "Введите строку: "; 
	//cin >> str;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.getline(str, n);//str - строка, n - размер строки
	cout << str << endl;
}

int StringLength(char str[])
{
	
}