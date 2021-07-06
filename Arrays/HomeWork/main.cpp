#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

#define tab "\t"
//#define ARR_LESSON
//#define SHIFT_1
//#define SHIFT_BUFFER
//#define CONVERSION_DEC_TO_BIN
#define CONVERSION_DEC_TO_HEX // ������� �� �������

void main()

{
	setlocale(LC_ALL, "Russian");
#ifdef ARR_LESSON
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	//���� ��������� � ����������
	cout << "������� �������� ���������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}


	//����� ������� �� �����
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//����� ������ �� ����� � �������� �������
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;

	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];

	}
	cout << "����� ��������� �������: " << sum;
	cout << endl;

	float sr_arifm = (float)sum / (SIZE);
	cout << "������� ��������������: " << sr_arifm;
	cout << endl;

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];

	}
	cout << "������������ �������: " << max;
	cout << endl;
	cout << "�����������  �������: " << min;
	cout << endl;
#endif // ARR_LESSON

#ifdef SHIFT_1
	const int SIZE = 10;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int n;
	cout << "������� �����: "; cin >> n;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (i + n + 1 > SIZE) cout << arr[i + n - SIZE] << tab;
		else if (i + n < 0) cout << arr[i] << tab;
		else cout << arr[i + n] << tab;

	}
	cout << endl;
	cout << endl;
	main();
#endif // SHIFT_1

#ifdef SHIFT_BUFFER
	const int SIZE = 10;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int n;
	cout << "������� �����: "; cin >> n;

	//	����� ��������� �������:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	/*//����� ������� �����:
	for (int j = 0; j < n; j++)
	{
		const int buffer = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer;
	}
	//	����� ���������� ������� �����:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/

	//	����� ������� ������:
	for (int j = 0; j < n; j++)
	{
		const int buffer = arr[SIZE - 1];
		for (int i = SIZE - 1; i > 0; i--)//���� for ������ ��������� �� ������� � �������� �����������, � � ������� ������� �������� ����������
		{//
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}

	//	����� ���������� ������� ������:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SHIFT_BUFFER

#ifdef CONVERSION_DEC_TO_BIN
	const int SIZE = 8;
	int arr[SIZE] = { 128,64,32,16,8,4,2,1 };
	int dec;
	cout << "������� ���������� �����: "; cin >> dec;

	if (dec > 255) cout << "������! ��������� ����!" << endl;
	else
	{

		for (int i = 0; i < SIZE; i++)
		{
			if (dec >= arr[i])
			{
				dec = dec - arr[i];
				arr[i] = 1;
			}
			else arr[i] = 0;

		}

		cout << endl;
		cout << "������������� � �������� �����: ";
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i];
		}
		cout << endl;
	}
#endif // CONVERSION_DEC_TO_BIN

#ifdef CONVERSION_DEC_TO_HEX
	const int SIZE_1 = 16;
	int arr1[SIZE_1] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int dec2, dec3;

	cout << "������� ���������� �����: "; cin >> dec2;

	for (int i = SIZE_1 - 1; i >= 0; i--)
	{
		dec3 = dec2 / 16;
		arr1[i] = dec2 - (dec3 * 16);
		dec2 = dec3;
	}

	cout << endl;
	cout << "������������� � 16 - ������ �����: ";
	for (int i = 0; i < SIZE_1; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
#endif // CONVERSION_DEC_TO_HEX
}