#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"
#define Escape 27

//#define WHILE

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE
	int n;	//���������� ��������
	int i = 0;//������� �����
	cout << "������� ���������� ��������: "; cin >> n;
	/*while (i++ < n)
	{
		cout << i << " Hello World!\n";
		//i++;
	}*/

	while (n /= 2)
	{
		cout << n << " Hello World!" << endl;
	}
#endif // WHILE

	char key;	//����� ������� ��� �������
	do
	{
		key = _getch();//ASCII-���
		cout << (int)key << tab << key << endl;
	} while (key != Escape);
}