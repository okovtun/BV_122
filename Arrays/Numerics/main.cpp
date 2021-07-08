#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "Russian");
	//dec - Decimal (Десятичная система счисление)
	//bin - Binary  (Двоичная система счисления)
	//hex - Hexadecimal (Шестнадцатеричная система счисления)
#ifdef DEC_2_BIN
	const int n = sizeof(unsigned long long int) * 8;	//Максимальная разрядность двоичного числа
	bool bin[n] = {};	//Этот массив будет хранить разряды двоичного числа
	cout << "Двоичное число будет занимать " << sizeof(bin) << " Байт памяти" << endl;
	unsigned long long int decimal;	//Десятичное число, введенное с клавиатуры
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;
	for (; decimal; decimal /= 2/*, i++*/)
		bin[i++] = decimal % 2;
	//, - comma operator - позволяет в то место, где ожидается одно выражение поместить несколько выражений

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
#endif // DEC_2_BIN

#ifdef DEC_2_HEX
	for (int i = 40; i < 100; i++)cout << i << "\t" << (char)i << endl;
	int decimal;	//Десятичное число, введенное с клавиатуры.
	const int n = 8;	//Максимальная разрядность Hex числа.
	char hex[n] = {};	//Этот массив будет хранить разряды шестнадцатеричного числа.
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;	//Счетчик разрядов
	for (; decimal;)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
		i++;
	}
	cout << "0x";
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default: cout << hex[i];
		}*/
		/*if (hex[i] < 10)cout << hex[i];
		else cout << char(hex[i] + 55);*/
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	}
	cout << endl;
#endif // DEC_2_HEX

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