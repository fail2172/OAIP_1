#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x, j = 0, SIZE = 0,  i = 0, k = 0, c = 0, s = 0;
	string str;
	getline(cin, str);
	int g = str.length();
	if(str[g-1]!=' ')
	str += ' ';
	int* arr = new int[100];
	for (i=s ; str[i] != '\0'; )
	{
		for (; str[i] != ' '; i++)
			k++;
		for (i = s; i < k; i++)
		{
			int x = (int)str[i] - (int)'0';
			c = c * 10 + x;
		}
		SIZE++;
		i++;
		k=i;
		s = i;
		arr[j] = c;
		j++;
		c = 0;
	}
	//Сортировка массива
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
			if (arr[i] > arr[j])
			{
				int x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
	}
	//Вывод отсортированного массива
	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";
	delete[] arr;
}