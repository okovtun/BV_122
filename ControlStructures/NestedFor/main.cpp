#include<iostream>
using namespace std;

#define tab "\t"

//#define MULTIPLICATION_TABLE

void main()
{
	setlocale(LC_ALL, "");
#ifdef MULTIPLICATION_TABLE
	const int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i < 10)	cout << " ";
			cout << i << " * ";
			if (j < 10)	cout << " ";
			cout << j << " = ";
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << endl;
			//group-of-statements;//����� �����������
		}
	}
#endif // MULTIPLICATION_TABLE

	const int n = 10;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)	//���� for ������� ������
		{
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i*j << tab;
			//tab - ������ ��������� (1 ��������� �������� � ���� �� 8-�� ��������)
		}
		cout << endl;	//endl - end line (����� ������)
		//cout << "\f\r";
	}
}