#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;	//Количество итераций
	int i = 0;//Счетчик цикла
	cout << "Введите количество итераций: "; cin >> n;
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