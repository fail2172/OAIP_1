#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, d, e, f, x, y, z, q;
	char fi;
	cout << "a,b,z=" << endl;
	cin >> a >> b >> z;
	if (z <= 0) x = pow(z, 2) / 2;
	else x = pow(z, 1 / 2.);
	cout << "Введите вашу функцию fi:\n";
	cout << "   a-2x\n   b-x^2\n   c-x/3\n";
	//Зацикливает программу пока не будет введена нужня переменная
	do
	{
		cin >> fi;
		switch (fi)
		{
		case 'a': q = 2 * x; break;
		case 'b': q = x * x; break;
		case 'c': q = x / 3; break;
		default:cout << "Дружок пирожок, ты ввёл не ту букву))) Попробуй ещё раз(;\n";
		}
	} while (fi != 'a' && fi != 'b' && fi != 'c');
	//Зацикливает программу пока не будет введена нужня переменная
	c = b * q;
	d = c / cos(x);
	e = log(fabs(tan(x / 2)));
	f = a * e;
	y = d + f;
	cout << "y=" << y << endl;
	switch (fi)
	{
	case 'a': cout << "f(x)=2x"; break;
	case 'b': cout << "f(x)=x^2"; break;
	case 'c': cout << "f(x)=x/3"; break;
	}

}