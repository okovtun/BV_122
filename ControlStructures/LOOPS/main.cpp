#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
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
}