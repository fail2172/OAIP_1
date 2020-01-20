#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int i, j, y = 0, x = 0, ROW, COL;
	cout << "Введите колличество строк:\n";
	cin >> ROW;
	cout << "Введите колличество столбцов:\n";
	cin >> COL;
	cout << endl;
	//Захват оперативной памяти
	int** arr = new int* [ROW];
	for (i = 0; i < ROW; i++)
		arr[i] = new int[COL];
	//Заполнение массива случайными числами
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			arr[i][j] = rand() % 31;
	}
	//Вывод исходного массива
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
	//Сортировка двумерного динамического массива
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			x > arr[i][j] ? x = x : x = arr[i][j];
		for (int k = i + 1; k < ROW; k++)
		{
			for (j = 0; j < COL; j++)
				y > arr[k][j] ? y = y : y = arr[k][j];
			if (x > y)
			{
				auto n = arr[i];
				arr[i] = arr[k];
				arr[k] = n;
				x = y;
			}
			y = 0;
		}
		x = 0;
	}
	//Вывод отсортированного массива
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
	//Отчистка оперативной памяти
	for (i = 0; i < ROW; i++)
		delete[] arr[i];
	delete[] arr;
}