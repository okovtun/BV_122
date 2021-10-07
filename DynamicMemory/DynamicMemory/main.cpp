#include<iostream>	//#... Директива языка C
using std::cin;		//using - Директива языка C++
using std::cout;
using std::endl;

template<typename T>T** allocate(const unsigned int rows, const unsigned int cols);
template<typename T>void  clear(T** arr, const unsigned int rows);

void FillRand(int arr[], const unsigned int n, int minRand = 0, int maxValue = 100);
void FillRand(double arr[], const unsigned int n, int minRand = 0, int maxValue = 100);
void FillRand(char arr[], const unsigned int n);
void FillRand(int** arr, const unsigned int rows, const unsigned int cols, int minRand = 0, int maxRand = 100);
void FillRand(double** arr, const unsigned int rows, const unsigned int cols, int minRand = 0, int maxRand = 100);
void FillRand(char** arr, const unsigned int rows, const unsigned int cols);

template<typename T>void Print(T arr[], const unsigned int n);
template<typename T>void Print(T** arr, const unsigned int rows, const unsigned int cols);
//CamelCaseStyle: BigCamel, smallCamel
//snake_case_style
template<typename T>int* push_back(T arr[], int& n, T value);
template<typename T>int* pop_back(T arr[], int& n);

template<typename T>T** push_row_back(T** arr, unsigned int& rows, const unsigned int cols);
template<typename T>void  push_col_back(T** arr, const unsigned int rows, unsigned int& cols);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

#define DATA_TYPE double

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

#ifdef USER_TYPE
	int user_type;
	cout << "Выберите тип данных:\n";
	cout << "i - int\n";
	cout << "d - double\n";
	cout << "c - char\n";
	cin >> user_type;
	/*typedef int DataType;
	switch (user_type)
	{
	case 'i': typedef int DataType; break;
	case 'd': typedef double DataType; break;
	case 'c': typedef char DataType; break;
	}*/
	//using DataType = int;
	switch (user_type)
	{
	case 'i': using DataType = int; break;
	case 'd': using DataType = double; break;
	case 'c': using DataType = char; break;
	}
#endif // USER_TYPE


	unsigned int rows;
	unsigned int cols;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;
	typedef double DataType;
	DataType** arr = allocate<DataType>(rows, cols);

	//////////////////////////////////////////////////////////////////////////////
	//////		ОБРАЩЕНИЕ К ЭЛЕМЕНТАМ ДВУМЕРНОГО ДИНАМИЧЕСКОГО МАССИВА:		//////
	//////////////////////////////////////////////////////////////////////////////
	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << "\n------------------------------------------------------------\n";

	arr = push_row_back(arr, rows, cols);
	//FillRand(arr[rows - 1], cols, 200, 300);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}

	cout << "\n------------------------------------------------------------\n";
	push_col_back(arr, rows, cols);
	for (int i = 0; i < rows; i++)arr[i][cols - 1] = rand();
	Print(arr, rows, cols);
	cout << "\n------------------------------------------------------------\n";

	clear(arr, rows);
}

template<typename T>T** allocate(const unsigned int rows, const unsigned int cols)
{
	///////////////////////////////////////////////////////////////////////////////
	/////////////	ОБЪЯВЛЕНИЕ ДВУМЕРНОГО ДИНАМИЧЕСКОГО МАССИВА:	///////////////
	///////////////////////////////////////////////////////////////////////////////
	//1) Объявляем указатель на указатель, и сохраняем в него адрес массива указателей:
	T** arr = new T*[rows];
	//2) Создаем строки двумерного динамического массива:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols]{};
	}
	return arr;
}
template<typename T>void  clear(T** arr, const unsigned int rows)
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

void FillRand(int arr[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const unsigned int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void FillRand(int** arr, const unsigned int rows, const unsigned int cols, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double** arr, const unsigned int rows, const unsigned int cols, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char** arr, const unsigned int rows, const unsigned int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand();
		}
	}
}

template<typename T>void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(T** arr, const unsigned int rows, const unsigned int cols)
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

template<typename T>T* push_back(T arr[], int& n, T value)
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

template<typename T>T* pop_back(T arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

template<typename T>T** push_row_back(T** arr, unsigned int& rows, const unsigned int cols)
{
	//1) Создаем буферный массив указателей:
	T** buffer = new T*[rows + 1]{};
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
	arr[rows] = new T[cols]{};
	//6) Увеличиваем количество строк:
	rows++;
	//7) Возвращаем новый массив на место вызова:
	return arr;
}
template<typename T>void  push_col_back(T** arr, const unsigned int rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		//1) Создаем буферную строку, размером на 1 элемент больше:
		T* buffer = new T[cols + 1]{};
		//2) Копируем исходную строку в буферную:
		for (int j = 0; j < cols; j++)
		{
			buffer[j] = arr[i][j];
		}
		//3) Удаляем исходную строку
		delete[] arr[i];
		arr[i] = buffer;
	}
	//4) После того, как в каждой строке добавилось по элементу, 
	//   количество столбцов увеличилось на 1:
	cols++;
}