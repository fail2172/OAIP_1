#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, b, h, x, s, y, x0, p;
	int k, n;
	cout << ("Vvedite a,b,h,n=");
	cin >> a >> b >> h >> n;
	for (x = a; x <= b; x += h)
	{
		s = 0;
		for (k = 1; k <= n; k++)
		{
			x0 = pow(-1, k + 1) * pow(x, 2 * k + 1) / (4 * k - 1);
			s += x0;
		}
		y = ((1 + pow(x, 2)) * atan(x) - x) / 2;
		p = fabs(y - s);
		cout << "\t" << ("x=") << x
			<< "\t" << ("Y(x)=") << y
			<< "\t" << ("S(x)=") << s
			<< "\t" << ("|Y(x)-S(x)|=") << p << endl;
	}
}
