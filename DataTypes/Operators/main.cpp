﻿#pragma warning(disable:4326)
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define ARITHMETICAL_OPERATORS	//Арифметические операторы
//#define ASSIGNMENT_OPERATOR	//Оператор присваивания
#define INCREMENT_DECREMENT		//(++/--)

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef ARITHMETICAL_OPERATORS
	int a = 3;
	int b = 2;
	cout << "Результат от деления: " << b / a << endl;
	//cout << "Остаток от деления:   " << b % a << endl;      
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//int a = 2;//Перенной 'a' присвоить значение '2'
	//int b = a + 3 * 4 + (5 + 6) / 2;//Переменной 'b' присвоить значение выражения 'a + 3'

	//	l-value = r-value;

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;

#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор, который увеличивает значение переменной на 1.
	//Decrement (--) - это унарный оператор, который уменьшает значение переменной на 1.
	//int i = 3;
	//++i;	//Prefix increment
	//i++;	//Postfix increment
	//--i;	//Prefix decrement
	//i--;	//Postfix (Suffix) decrement
	/*int j = ++i;
	cout << i << endl;
	cout << j << endl;
	cout << "\n----------------------------\n";*/
	
	/*int a = 2;
	int b = 
a++;
	cout << a << endl;
	cout << b << endl;*/

	/*int i = 3;
	i = i++ + (i++);
	cout << i << endl;*/

	int a = 5, b = 2, c = 9;
	c = 1. / a - b++;
	cout << a << tab << b << tab << c << endl;
	//		5			3			-1

#endif // INCREMENT_DECREMENT

}