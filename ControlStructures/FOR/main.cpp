#include<iostream>
using namespace std;

#define tab "\t"

//#define FOR_SYNTAX

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FOR_SYNTAX
	int n;	//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0; //Counter(Start)
		i < n;	//Condition(Stop)
		i++)	//Expression(Step)
	{
		cout << i << tab;
	}
	cout << endl;
#endif // FOR_SYNTAX
	const int n = 20;
	char str[n] = "Hello";
	char str2[n] = {};
	strcpy(str2, str);
}