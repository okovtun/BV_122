#include<iostream>
using namespace std;

//#define RANDARRAY	//a two-dimensional array with random values
#define ARRAYSHOWMANY	//a one-dimensional array from 0 to 10 with the output of the number of repetitions for repeating numbers

enum Color
{
	console_black = 0x00,
	console_white = 0xFF,//0xFFFFFF00,
	console_red = 0xCC,//0xFF000000,
	console_green = 0xAA,//0x00FF0000,
	console_blue = 0x99,//0x0000FF00
	default_console_color = 7,

	black = 0x00000000,
	red = 0x000000FF,
	green = 0x0000AA00,
	yellow = 0x0000FFFF,
	blue = 0x00FF0000,
	grey = 0x00555555,
	white = 0x00FFFFFF,
};

enum struct Symbols:char
{
	upper_left_angle = 217,

};

void main()
{
	setlocale(LC_ALL, "rus");
	cout << green << endl;
	cout << Symbols::upper_left_angle << endl;
#ifdef RANDARRAY

	const int n = 5;	//line of arrow
	const int k = 2;	//number of line

	int arr[k][n];
	for (int i = 0; i < n; i++)
	{
		arr[0][i] = rand();
		arr[1][i] = arr[0][i] % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[0][i] << "-" << arr[1][i] << "  ";
	} cout << endl;
#endif // RANDARRAY

#ifdef ARRAYSHOWMANY
	//srand(time(0));	//un-comment to check different options (variants)

	const int S = 10;
	int arr[S] = {};
	int n = 1;
	for (int i = 0; i < S; i++)	//filling the array with random numbers
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < S; i++)	//sortirovochka
		for (int j = i + 1; j < S; j++)
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
	for (int i = 0; i < S; cout << arr[i++] << "\t");	//just for visual, what numbers are in the array
	cout << endl;
	for (int i = 0; i < S; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			cout << "The number - " << arr[i];
			while (arr[i++] == arr[i + 1]) n += 1;
			cout << " is repeated " << n << " times" << endl; n = 1;
		}
	}
#endif // ARRAYSHOWMANY
	char m;
	enum Colours { RED=100, YELLOW, BROUN, };
	cout << Colours::BROUN << endl;;

}