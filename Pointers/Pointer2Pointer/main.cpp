#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int* pa = &a;
	cout << &a << endl;
	cout << pa << endl;
	cout << typeid(&pa).name() << endl;
	int** ppa = &pa;
	//int - int
	//int* - ��������� �� int
	//int** - ��������� �� ��������� �� int
}