#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

#define HOME_WORK

void main()
{
	setlocale(LC_ALL, "");

#ifdef HOME_WORK
	cout << "Int:" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;

	cout << delimiter << endl;

	/////////////////////////////////////////////////////////////

	cout << "Double:" << endl;
	const int B_SIZE = 8;
	double brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	//Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "����� ��������� �������: " << Sum(brr, B_SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, B_SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, B_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, B_SIZE) << endl;

	///////////////////////////////////////////////////////////////  
#endif // HOME_WORK

	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}



