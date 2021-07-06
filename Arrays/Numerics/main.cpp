#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//dec - Decimal (���������� ������� ���������)
	//bin - Binary  (�������� ������� ���������)
	const int n = sizeof(unsigned long long int)*8;	//������������ ����������� ��������� �����
	bool bin[n] = {};	//���� ������ ����� ������� ������� ��������� �����
	cout << "�������� ����� ����� �������� " << sizeof(bin) << " ���� ������" << endl;
	unsigned long long int decimal;	//���������� �����, ��������� � ����������
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;
	for (; decimal; decimal /= 2/*, i++*/)
		bin[i++] = decimal % 2;
//, - comma operator - ��������� � �� �����, ��� ��������� ���� ��������� ��������� ��������� ���������
	{
	}

	/*while (decimal)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++;	//��������� �� ��������� ������� �������
	}*/
	
	//������� ������� �� ������� � �������� �������:
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
FOR - ��� ���� �� ��������� ����� ��������.

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

Counter(Start)  - � ���� ��������� ������ ��������� � �������������� �������.
Condition(Stop) - ������� ����������� ��� ���������� �����.
Expression(Step)- ��� ���������, ������� �������� �������. i++ (i - counter)
----------------------------------------------
*/