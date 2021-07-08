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
	//dec - Decimal (���������� ������� ���������)
	//bin - Binary  (�������� ������� ���������)
	//hex - Hexadecimal (����������������� ������� ���������)
#ifdef DEC_2_BIN
	const int n = sizeof(unsigned long long int) * 8;	//������������ ����������� ��������� �����
	bool bin[n] = {};	//���� ������ ����� ������� ������� ��������� �����
	cout << "�������� ����� ����� �������� " << sizeof(bin) << " ���� ������" << endl;
	unsigned long long int decimal;	//���������� �����, ��������� � ����������
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;
	for (; decimal; decimal /= 2/*, i++*/)
		bin[i++] = decimal % 2;
	//, - comma operator - ��������� � �� �����, ��� ��������� ���� ��������� ��������� ��������� ���������

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
#endif // DEC_2_BIN

#ifdef DEC_2_HEX
	for (int i = 40; i < 100; i++)cout << i << "\t" << (char)i << endl;
	int decimal;	//���������� �����, ��������� � ����������.
	const int n = 8;	//������������ ����������� Hex �����.
	char hex[n] = {};	//���� ������ ����� ������� ������� ������������������ �����.
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;	//������� ��������
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