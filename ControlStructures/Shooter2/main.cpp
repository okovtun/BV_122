#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"

#define Escape 27
#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	77

//#define TYPE_CONVERSIONS

void main()
{
	setlocale(LC_ALL, "");
#ifdef TYPE_CONVERSIONS
	double a = 2.5;	//No conversion
	int b = a;	//������� �������������� ����� �� double � int � ������� ������
	double c = b;	//������� �������������� �� int � double - �� �������� � ��������
	cout << b << endl;
#endif // TYPE_CONVERSIONS

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << tab << key << endl;

		//(int)key - ����� �������������� �����. 
		//����� �������� (����������) ���� char ���� ������������� � �������� ���� int.
		//(type)value;	//C-like notation	 - C-�������� ����� ������
		//type(value);	//Fuctional notation - �������������� ����� ������
		//Warning
		//			l-value = r-value;

		/*if (key == 'w' || key == 'W' || key == UP_ARROW)
		{
			cout << "������" << endl;
		}
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == 13)
		{
			cout << "�����" << endl;
		}
		else if (key == Escape)
		{
			cout << "Exit" << endl;
		}
		else
		{
			if(key != -32)cout << "Error" << endl;
		}*/

		switch (key)
		{
		case 'w':
		case 'W':
		case UP_ARROW: cout << "������" << endl; break;
		case 's':
		case 'S':
		case DOWN_ARROW: cout << "�����" << endl; break;
		case 'a':
		case 'A':
		case LEFT_ARROW: cout << "�����" << endl; break;
		case 'd':
		case 'D':
		case RIGHT_ARROW: cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case  13: cout << "�����" << endl; break;
		case  Escape: cout << "Exit" << endl;
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
}