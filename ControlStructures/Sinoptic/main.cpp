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
	cout << "������� ����������� �������: "; cin >> t;

	if (t > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (t > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (t > 40)
	{
		cout << "�� ����� �����" << endl;
	}
	else if (t > 25)
	{
		cout << "�����" << endl;
	}
	else if (t > 15)
	{
		cout << "�����" << endl;
	}
	else if (t > 0)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
#endif // DEBUG


	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature <= -20)
	{
		cout << "�� ����� ������� �����!" << endl;
	}
	else if (temperature > -20 && temperature <= -10)
	{
		cout << "�� ����� �����!" << endl;
	}
	else if (temperature > -10 && temperature <= 0)
	{
		cout << "�� ����� ���������!" << endl;
	}
	else if (temperature > 0 && temperature <= 15)
	{
		cout << "�� ����� �����!" << endl;
	}
	else if (temperature > 15 && temperature <= 25)
	{
		cout << "�� ����� �����!" << endl;
	}
	else if (temperature > 25 && temperature <= 40)
	{
		cout << "�� ����� ����� �����!" << endl;
	}
	else if (temperature > 40 && temperature <= 50)
	{
		cout << "�� �� ��������!" << endl;
	}
	else if (temperature > 50);
	{
		cout << "�� �� ������ �������!" << endl;
	}
	3;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	NULL;
	0;
	;

	/*int a;
	int b;
	if (money > 1000000)
		cout << "��� ������ ;-)";*/
}