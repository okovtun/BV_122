#include<iostream>
using namespace std;

void elevator(int floor)
{
	if (floor == 0)	//������� ������ �� ��������
	{
		cout << floor ;
		cout << " �� � �������" << endl;
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
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);
}