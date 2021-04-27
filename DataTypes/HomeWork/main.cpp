#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define TASK_1
//#define TASK_2	//define - определить
				//definition - определение
//#define TASK_3
//#define TASK_4

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1
	double money;
	cout << "Введите сумму перевода: "; cin >> money;
	cout << money << endl;
	int grn = money;//	Неявное преобразование типов от большего к меньшему (double => int) с потерей данных.
	int cop = (money - grn) * 100;
	cout << grn << " грн.\t";
	cout << cop << " коп.\n";
#endif // TASK_1


#if defined TASK_2
//если определено TASK_2,
//то нижеследуюший код будет виден компилятору
	cout << "Задача №2" << endl;
	double price_of_notebook;
	double price_of_pencil;
	int number_of_pencil;
	int number_of_notebook;

	cout << "Стоимость одной тетради: ";			cin >> price_of_notebook;
	cout << "Сколько тетрадей вы хотите купить?: ";		cin >> number_of_notebook;
	cout << "Стоимость одного карандаша: ";			cin >> price_of_pencil;
	cout << "Сколько карандашей вы хотите купить?: ";	cin >> number_of_pencil;

	double total_price = price_of_notebook * number_of_notebook + price_of_pencil * number_of_pencil;
	cout << "Общая стоимость тетрадей: " << total_price << endl << endl;

	system("PAUSE");
	system("CLS");//CLS - Clear Screen  
#endif // TASK_2

#ifdef TASK_3
	cout << "Задача №3" << endl;
	double price_of_notebook1;
	double price_of_cover;
	//int number_of_cover;
	//int number_of_notebook1;
	int set;

	cout << "Стоимость одной тетради: ";	cin >> price_of_notebook1;
	cout << "Стоимость одной обложки: ";	cin >> price_of_cover;
	cout << "Сколько наборов хотите купить?: ";	cin >> set;
	double total_price1 = (price_of_cover + price_of_notebook1) * set;
	cout << "Общая стоимость предметов: " << total_price1 << endl << endl;

	system("PAUSE");
	system("CLS");//CLS - Clear Screen  
#endif // TASK_3

#ifdef TASK_4
	cout << "Задача №4" << endl;
	double distance;
	double consumption_rate_100_km;
	double price_of_gas;
	cout << "Расстояние до дачи км: ";		cin >> distance;
	cout << "Расход бензина на 100км пробега): ";	cin >> consumption_rate_100_km;
	cout << "Цена 1 литра бензина: ";		cin >> price_of_gas;
	double travel_price = consumption_rate_100_km * price_of_gas / 100 * distance * 2;
	cout << "Поездка на дачу и обратно: " << travel_price << endl;
#endif // TASK_4


}