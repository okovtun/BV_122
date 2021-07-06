#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//dec - Decimal (Десятичная система счисление)
	//bin - Binary  (Двоичная система счисления)
	const int n = sizeof(unsigned long long int)*8;	//Максимальная разрядность двоичного числа
	bool bin[n] = {};	//Этот массив будет хранить разряды двоичного числа
	cout << "Двоичное число будет занимать " << sizeof(bin) << " Байт памяти" << endl;
	unsigned long long int decimal;	//Десятичное число, введенное с клавиатуры
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;
	for (; decimal; decimal /= 2/*, i++*/)
		bin[i++] = decimal % 2;
//, - comma operator - позволяет в то место, где ожидается одно выражение поместить несколько выражений
	{
	}

	/*while (decimal)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++;	//Переходим на следующий элемент массива
	}*/
	
	//Выводим остатки от деления в обратном порядке:
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << "  ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
}

/*
----------------------------------------------
FOR - это цикл на заданрное число итераций.

for(Counter; Condition; Expression)
{
	....
	group-of-statements;
	....
}

for(Start; Stop; Step)
{
	....
	group-of-statements;
	....
}

Counter(Start)  - в этом выражении обычно объявляют и инициализируют счетчик.
Condition(Stop) - условие продолжения или завершения цикла.
Expression(Step)- это выражение, которое изменяет счетчик. i++ (i - counter)
----------------------------------------------
*/