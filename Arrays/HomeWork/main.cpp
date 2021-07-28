#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % 100;
				unique = true;

				for (int a = 0; a <= i; i++)
				{
					for (int b = 0; b < (a == i ? j : COLS); j++)
					{
						if (arr[i][j] == arr[a][b])
						{
							unique = false;
							break;
						}

					}
				}


			} while (!unique);

		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
