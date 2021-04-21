#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << false << endl;

	/*cout << sizeof(short) << endl;
	cout << "unsigned short:\t" << 0 << "\t" << USHRT_MAX << endl;
	cout << "  signed short:\t" << SHRT_MIN << "\t" << SHRT_MAX << endl;

	cout << sizeof(long) << endl;
	cout << "unsigned long:\t\t" << 0 << "\t" << ULONG_MAX << endl;
	cout << "  signed long:" << LONG_MIN << "\t" << LONG_MAX << endl;*/

	//float  - 4 Bytes
	//double - 8 Bytes
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;
	cout << -3.5e-3 << endl;
}