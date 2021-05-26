#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DEBUG
	int t;	//temperature
	cout << "Введите температуру воздуха: "; cin >> t;

	if (t > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (t > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (t > 40)
	{
		cout << "Ну очень жарко" << endl;
	}
	else if (t > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (t > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (t > 0)
	{
		cout << "Прохладно" << endl;
	}
	else
	{
		cout << "Мороз" << endl;
	}
#endif // DEBUG


	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature <= -20)
	{
		cout << "На улице сильный мороз!" << endl;
	}
	else if (temperature > -20 && temperature <= -10)
	{
		cout << "На улице мороз!" << endl;
	}
	else if (temperature > -10 && temperature <= 0)
	{
		cout << "На улице прохладно!" << endl;
	}
	else if (temperature > 0 && temperature <= 15)
	{
		cout << "На улице тепло!" << endl;
	}
	else if (temperature > 15 && temperature <= 25)
	{
		cout << "На улице жарко!" << endl;
	}
	else if (temperature > 25 && temperature <= 40)
	{
		cout << "На улице очень жарко!" << endl;
	}
	else if (temperature > 40 && temperature <= 50)
	{
		cout << "Вы на экваторе!" << endl;
	}
	else if (temperature > 50);
	{
		cout << "Вы на другой планете!" << endl;
	}
	3;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	NULL;
	0;
	;

	/*int a;
	int b;
	if (money > 1000000)
		cout << "Все хорошо ;-)";*/
}