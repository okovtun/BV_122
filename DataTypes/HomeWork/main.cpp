#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define TASK_1
//#define TASK_2	//define - ����������
				//definition - �����������
//#define TASK_3
//#define TASK_4

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1
	double money;
	cout << "������� ����� ��������: "; cin >> money;
	cout << money << endl;
	int grn = money;//	������� �������������� ����� �� �������� � �������� (double => int) � ������� ������.
	int cop = (money - grn) * 100;
	cout << grn << " ���.\t";
	cout << cop << " ���.\n";
#endif // TASK_1


#if defined TASK_2
//���� ���������� TASK_2,
//�� ������������� ��� ����� ����� �����������
	cout << "������ �2" << endl;
	double price_of_notebook;
	double price_of_pencil;
	int number_of_pencil;
	int number_of_notebook;

	cout << "��������� ����� �������: ";			cin >> price_of_notebook;
	cout << "������� �������� �� ������ ������?: ";		cin >> number_of_notebook;
	cout << "��������� ������ ���������: ";			cin >> price_of_pencil;
	cout << "������� ���������� �� ������ ������?: ";	cin >> number_of_pencil;

	double total_price = price_of_notebook * number_of_notebook + price_of_pencil * number_of_pencil;
	cout << "����� ��������� ��������: " << total_price << endl << endl;

	system("PAUSE");
	system("CLS");//CLS - Clear Screen  
#endif // TASK_2

#ifdef TASK_3
	cout << "������ �3" << endl;
	double price_of_notebook1;
	double price_of_cover;
	//int number_of_cover;
	//int number_of_notebook1;
	int set;

	cout << "��������� ����� �������: ";	cin >> price_of_notebook1;
	cout << "��������� ����� �������: ";	cin >> price_of_cover;
	cout << "������� ������� ������ ������?: ";	cin >> set;
	double total_price1 = (price_of_cover + price_of_notebook1) * set;
	cout << "����� ��������� ���������: " << total_price1 << endl << endl;

	system("PAUSE");
	system("CLS");//CLS - Clear Screen  
#endif // TASK_3

#ifdef TASK_4
	cout << "������ �4" << endl;
	double distance;
	double consumption_rate_100_km;
	double price_of_gas;
	cout << "���������� �� ���� ��: ";		cin >> distance;
	cout << "������ ������� �� 100�� �������): ";	cin >> consumption_rate_100_km;
	cout << "���� 1 ����� �������: ";		cin >> price_of_gas;
	double travel_price = consumption_rate_100_km * price_of_gas / 100 * distance * 2;
	cout << "������� �� ���� � �������: " << travel_price << endl;
#endif // TASK_4


}