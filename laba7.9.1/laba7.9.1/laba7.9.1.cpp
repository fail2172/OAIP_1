#include <iostream>
using namespace std;
int main()
{
	int x, j = 0, SIZE = 0;
	char str[100];
	cin.getline(str, 100);
	//Подсчёт символов в массиве
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			SIZE++;
	}
	//Динамический массив для символов
	int* b = new int[SIZE];
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			x = (int)str[i] - (int)'0';
			b[j] = x;
			j++;
		}
	}
	//Сортировка массива
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
			if (b[i] > b[j])
			{
				int x = b[i];
				b[i] = b[j];
				b[j] = x;
			}
	}
	//Вывод отсортированного массива
	for (int i = 0; i < SIZE; i++)
		cout << b[i] << " ";
	delete[] b;
}