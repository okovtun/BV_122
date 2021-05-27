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
#endif // WHILE

	char key;	//Будет хранить код клавиши
	do
	{
		key = _getch();//ASCII-код
		cout << (int)key << tab << key << endl;
	} while (key != Escape);
}