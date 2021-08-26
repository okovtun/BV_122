#include<iostream>
using namespace std;

//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "");

#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;	//Объявление и инициализация указателя
	cout << a << endl;	//Вывод значения переменной 'a' на экран
	cout << &a << endl;	//Взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl;	//Вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;

	int* pb;	//Объявление указателя
	int b = 3;
	pb = &b;
	//(int)=(int*)
		//int - int
		//int* - Указатель на int
		//double - double
		//double* - Указатель на double
		//char - char
		//char* - Указатель на char  
#endif // POINTERS_BASICS

	const int n = 5;
	double arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\n";
	}
	cout << endl;
	/*
	--------------------------------
	+
	-
	++
	--
	--------------------------------
	*/
}

/*
---------------------------------------
& - Address-of operator;
* - Dereference operator(Оператор разыменования);
---------------------------------------
*/