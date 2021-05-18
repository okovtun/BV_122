#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define WEATHER
//#define TARGET

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WEATHER
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature >= 0)	//ЕСЛИ
	{
		cout << "На улице тепло!" << endl;
	}
	else	//В ПРОТИВНОМ СЛУЧАЕ (ИНАЧЕ)
	{
		cout << "На улице холодно!" << endl;
	}
#endif // WEATHER

#ifdef TARGET
	int n;
	cout << "Введите число: "; cin >> n;
	//ЕСЛИ введенное число находится в промежутке от 0 до 10,
	//программа выдает сообщение "Цель поражена",
	//в противном случае - "Вы промахнулись"
	if (n >= 0 && n <= 10)
	{
		cout << "Цель поражена!" << endl;
	}
	else
	{
		cout << "Вы Firefox!" << endl;
	}
	//0 <= n <= 10;  
#endif // TARGET

}