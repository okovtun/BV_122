//Random
#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	//rand();	//���������� ��������������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND).
	int minRand, maxRand;
	/*do
	{
		cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
		if (minRand >= maxRand)cout << "���� ������������ ������" << endl;
	} while (minRand > maxRand);*/
	//���������� ������� ���������� �������:
	//srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] = rand() % 10;
	}

	//����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	
	//���������� �������:
	//���������� �������.
	for (int i = 0; i < n; i++)//������� 'i' �������� �������, � ������� ����� ��������� ����������� ��������
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	//����� ���������������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}