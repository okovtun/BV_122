#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	unsigned long long int number;	//�����, �������� � �����������
	cout << "������� �����: "; cin >> number;
	unsigned long long int buffer = number;	//����� ���������� �����
	unsigned long long int mirror_number = 0;	//����� ���������� ��������
	while (buffer)
	{
		//mirror_number *= 10;
		//mirror_number += buffer % 10;	//��������� ������� ������ ��������� �����
		mirror_number = mirror_number * 10 + buffer % 10;
		buffer /= 10;	//������� ����������� ����� ������
	}
	cout << number << endl;
	cout << mirror_number << endl;
	if (number == mirror_number)
	{
		cout << "����� �������� �����������" << endl;
	}
	else
	{
		cout << "����� �� �������� �����������" << endl;
	}
}