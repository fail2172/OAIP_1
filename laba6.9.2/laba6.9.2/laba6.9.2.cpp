#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int i, j, k, x = 0, ROW, COL;
	cout << "Введите колличество строк:\n";
	cin >> ROW;
	cout << "Введите колличество столбцов:\n";
	cin >> COL;
	cout << endl;
	//Захват оперативной памяти
	int* sort = new int[ROW];
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
	//Нахождение максимальных значений в строках
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			x > arr[i][j] ? x = x : x = arr[i][j];
		sort[i] = x;
		x = 0;
	}
	//Сортировка строк
	for (i = 0; i < ROW; i++)
	{
		for (j = i + 1; j < ROW; j++)
			if (sort[i] > sort[j])
			{
				x = sort[i];
				sort[i] = sort[j];
				sort[j] = x;
				auto x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
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
	delete[] sort;
}