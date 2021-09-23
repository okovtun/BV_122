#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int** allocate(const unsigned int rows, const unsigned int cols);
void  clear(int** arr, const unsigned int rows);

void FillRand(int arr[], const unsigned int n);
void FillRand(int** arr, const unsigned int rows, const unsigned int cols);
void Print(int arr[], const unsigned int n);
void Print(int** arr, const unsigned int rows, const unsigned int cols);
//CamelCaseStyle: BigCamel, smallCamel
//snake_case_style
int* push_back(int arr[], int& n, int value);
int* pop_back(int arr[], int& n);

int** push_row_back(int** arr, unsigned int& rows, const unsigned int cols);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

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

	arr = push_back(arr, n, value);
	//n++;
	Print(arr, n);
	//buffer[2] = 1024;
	//buffer = nullptr;//delete[] buffer;
	arr = pop_back(arr, n);
	Print(arr, n);
	delete[] arr;
#endif // DYNAMIC_MEMORY_1

	unsigned int rows;
	unsigned int cols;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;
	int** arr = allocate(rows, cols);

	//////////////////////////////////////////////////////////////////////////////
	//////		ОБРАЩЕНИЕ К ЭЛЕМЕНТАМ ДВУМЕРНОГО ДИНАМИЧЕСКОГО МАССИВА:		//////
	//////////////////////////////////////////////////////////////////////////////
	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << "\n------------------------------------------------------------\n";

	arr = push_row_back(arr, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}

	clear(arr, rows);
}

int** allocate(const unsigned int rows, const unsigned int cols)
{
	///////////////////////////////////////////////////////////////////////////////
	/////////////	ОБЪЯВЛЕНИЕ ДВУМЕРНОГО ДИНАМИЧЕСКОГО МАССИВА:	///////////////
	///////////////////////////////////////////////////////////////////////////////
	//1) Объявляем указатель на указатель, и сохраняем в него адрес массива указателей:
	int** arr = new int*[rows];
	//2) Создаем строки двумерного динамического массива:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
void  clear(int** arr, const unsigned int rows)
{
	///////////////////////////////////////////////////////////////////////////////
	/////////////	 УДАЛЕНИЕ ДВУМЕРНОГО ДИНАМИЧЕСКОГО МАССИВА:		///////////////
	///////////////////////////////////////////////////////////////////////////////
	//1) Удаляем строки:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
	delete[] arr;
}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(int** arr, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
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
void Print(int** arr, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int* push_back(int arr[], int& n, int value)
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
	return arr;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

int** push_row_back(int** arr, unsigned int& rows, const unsigned int cols)
{
	//1) Создаем буферный массив указателей:
	int** buffer = new int*[rows + 1]{};
	//2) Копируем адреса строк в буферный массив указателей:
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив указателей:
	delete[] arr;
	//4) Подменяем исходный массив буферным:
	arr = buffer;
	//5) Добавляем в массив новую строку:
	arr[rows] = new int[cols] {};
	//6) Увеличиваем количество строк:
	rows++;
	//7) Возвращаем новый массив на место вызова:
	return arr;
}