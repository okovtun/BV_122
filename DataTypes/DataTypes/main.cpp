#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define TYPES
//#define DECLARATION_OF_VARIABLES

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TYPES
	//cout << false << endl;

/*cout << sizeof(short) << endl;
cout << "unsigned short:\t" << 0 << "\t" << USHRT_MAX << endl;
cout << "  signed short:\t" << SHRT_MIN << "\t" << SHRT_MAX << endl;

cout << sizeof(long) << endl;
cout << "unsigned long:\t\t" << 0 << "\t" << ULONG_MAX << endl;
cout << "  signed long:" << LONG_MIN << "\t" << LONG_MAX << endl;*/

//float  - 4 Bytes
//double - 8 Bytes
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;
	cout << -3.5e-3 << endl;
#endif // TYPES

#ifdef DECLARATION_OF_VARIABLES
	double Price;	//Объявление переменной Price, типа double
	//cout << Price << endl;
	//int st1;//1-й
	//int _void;

	double a;
	int b;
	int t;

	//Инициализация переменных
	//ПРОИНИЦИАЛИЗИРОВАТЬ
	//Инициализация - это присвоение начального занчения. (Init - Начало)

	//			CamelCase/PascalCase
	//double PriceOfCoffe;	//Camel-case style
	//						//BigCamel
	//double priceOfCoffe;	//smallCamel

	//Snake-case style
	double price_of_coffee;	//Объявление переменной
	int number_of_cups = 0;	//Объявление и инициализация переменной
	
	cout << "Введите стоимость одной чашки кофе: ";
	cin >> price_of_coffee;	//ИНИЦИАЛИЗАЦИЯ вводом с клавиатуры
	cout << "Сколько чашек Вы хотите купить? ";
	cin >> number_of_cups;

	double total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость кофе: " << total_price << endl;

#endif // DECLARATION_OF_VARIABLES

	int speed = 0;
	const int MAX_SPEED = 250;//Константы всегда называются в верхнем регистре


	//cout << 5384 << endl;	//5384 - числовая константа типа int
	//cout << sizeof(5384LL) << endl;
	//cout << typeid(5384ULL).name() << endl;
	//cout << typeid(5384.f).name() << endl;

	cout << '+' << endl;	//'+' - символьная константа типа char.
	cout << typeid('+').name() << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;
}