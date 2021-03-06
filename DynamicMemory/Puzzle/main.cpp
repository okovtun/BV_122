#include<iostream>
#include<ctime>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

const int height = 4, length = 4;

int** Creating(int height, int length, int& playerpoint, int& playerpointy);
void Clear(int** arr, int height);

void Drawing(int**& arr);
void Check(int** arr, bool& Escape);
void Output(int** arr, int& playerpointx, int& playerpointy, bool& Escape);
void Up(int** arr, int& playerpointx, int& playerpointy);
void Down(int** arr, int& playerpointx, int& playerpointy);
void Left(int** arr, int& playerpointx, int& playerpointy);
void Right(int** arr, int& playerpointx, int& playerpointy);

void main()
{
	srand(time(0));
	//setlocale(LC_ALL, "rus");
	int playerpointx, playerpointy;
	int** arr = Creating(height, length, playerpointx, playerpointy);
	bool Escape = false;
	do
	{
		cout << " Use kesy 'w','a','s','d' to move.\n Key 'n' will create new game.\n Press ESC to stop game.\n\n\n";
		Drawing(arr);
		cout << "\nPlayer position: " << playerpointx << " " << playerpointy;
		Output(arr, playerpointx, playerpointy, Escape);
		Check(arr, Escape);
		system("cls");
	} while (!Escape);
	Clear(arr, height);
}

int** Creating(int height, int length, int& playerpointx, int& playerpointy)
{
	bool playerpointlock = false;
	int** arr = new int*[height];
	for (int i = 0; i < height; i++)arr[i] = new int [length] {};
	for (int i = 0; i < height * length; i++)
	{
		arr[i / length][i % length] = rand() % (height * length);
		if (((arr[i / length][i % length]) == 0) && playerpointlock == false)
		{
			playerpointx = (i / length);
			playerpointy = (i % length);
			playerpointlock = true;
		}
		for (int j = 0; j < i; j++)
		{
			if (arr[j / length][j % length] == arr[i / length][i % length])
			{
				arr[i / length][i % length] = 0; i--;
			}
		}
	}
	return arr;
}
void Clear(int** arr, int height)
{
	for (int i = 0; i < height; i++)delete[] arr[i];
	delete[] arr;
}

void Drawing(int**& arr)
{
	for (int i = 0; i < ::height; i++)
	{
		for (int j = 0; j < ::length; j++)
		{
			if (arr[i][j] == 0) cout << char(219) << "\t";
			else cout << arr[i][j] << "\t";
		} cout << endl;
	}
}

void Check(int** arr, bool& Escape)
{
	int s = 0;
	for (int i = 0; i < height*length; i++)
	{
		if (arr[i / length][i % length] == i)s++;
	}
	if (s == 15)
	{
		Escape = true;
		for (int i = 0; i < 1000; i++) cout << "Congratulations!";
	}

}

void Output(int** arr, int& playerpointx, int& playerpointy, bool& Escape)
{
	switch (_getch())
	{
	case 'w': Up(arr, playerpointx, playerpointy); break;
	case 's': Down(arr, playerpointx, playerpointy); break;
	case 'a': Left(arr, playerpointx, playerpointy); break;
	case 'd': Right(arr, playerpointx, playerpointy); break;
	case 27: Escape = true, cout << "\nEscape the Game...\n", system("PAUSE"); break;
	case 'n': cout << "\nNew game!\n", Clear(arr, height), system("PAUSE"), system("CLS"), main(); break;
	default: Clear(arr, height), system("PAUSE"), system("CLS"), main();
	}
}

void Up(int** arr, int& playerpointx, int& playerpointy)
{
	if (playerpointx > 0)
	{
		arr[playerpointx][playerpointy] = arr[playerpointx - 1][playerpointy];
		arr[playerpointx - 1][playerpointy] = 0;
		playerpointx -= 1;
	}
	else cout << "\nERROR";
}
void Down(int** arr, int& playerpointx, int& playerpointy)
{
	if (playerpointx < ::height - 1)
	{
		arr[playerpointx][playerpointy] = arr[playerpointx + 1][playerpointy];
		arr[playerpointx + 1][playerpointy] = 0;
		playerpointx += 1;
	}
	else cout << "\nERROR";
}
void Left(int** arr, int& playerpointx, int& playerpointy)
{
	if (playerpointy > 0)
	{
		arr[playerpointx][playerpointy] = arr[playerpointx][playerpointy - 1];
		arr[playerpointx][playerpointy - 1] = 0;
		playerpointy -= 1;
	}
	else cout << "\nERROR";
}
void Right(int** arr, int& playerpointx, int& playerpointy)
{
	if (playerpointy < ::length - 1)
	{
		arr[playerpointx][playerpointy] = arr[playerpointx][playerpointy + 1];
		arr[playerpointx][playerpointy + 1] = 0;
		playerpointy += 1;
	}
	else cout << "\nERROR";
}