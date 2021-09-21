//ArrayByReferenceInDynamicMemory
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

void FillRand(int arr[], const unsigned int n);
void Print(int arr[], const unsigned int n);
//CamelCaseStyle: BigCamel, smallCamel
//snake_case_style
void push_back(int*& arr, int& n, int value);
void pop_back(int*& arr, int& n);

#define DYNAMIC_MEMORY_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "Введите добавлчемое значение: "; cin >> value;

	push_back(arr, n, value);
	//n++;
	Print(arr, n);
	//buffer[2] = 1024;
	//buffer = nullptr;//delete[] buffer;
	pop_back(arr, n);
	Print(arr, n);
	delete[] arr;
#endif // DYNAMIC_MEMORY_1


}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void push_back(int*& arr, int& n, int value)
{
	//////////////////////////////////////////////////////////////////
	///////////////		Добавление элемента в массив	//////////////
	//////////////////////////////////////////////////////////////////

	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];
	//2) Копируем исходный массив в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив:
	delete[] arr;
	//4) Подменяем исходный массив новым (буферным) массивом, засчет подмены адреса:
	arr = buffer;
	//5) Только после всех этих действий можно добавить значение в конец массива
	arr[n] = value;
	//6) После добавления элемента в массив, количество его элементов увеличивается на 1:
	n++;
	//////////////////////////////////////////////////////////////////
}

void pop_back(int*& arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
}