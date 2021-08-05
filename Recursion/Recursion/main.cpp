#include<iostream>
using namespace std;

void elevator(int floor)
{
	if (floor == 0)	//Условие выхода из рекурсии
	{
		cout << floor ;
		cout << " Вы в подвале" << endl;
		return;
	}
	cout << floor << endl;
	elevator(floor - 1);
	cout << floor << endl;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	/*cout << "Hello World";
	main();*/

	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
}