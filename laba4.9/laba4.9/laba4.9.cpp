#include <math.h>
#include <iostream>
using namespace std;
double fan1(double, int);
double fan2(double);
void Out_Rez(double, double, double);
int main()
{
	double a, b, h, x, d, c, v;
	int n;
	cout << ("a,b,h,n=\n");
	cin >> a >> b >> h >> n;
	for (x = a; x <= b; x += h)
	{
		d = fan1(x, n);
		c = fan2(x);
		Out_Rez(d, c, x);
	}
}
double fan1(double x, int n)
{
	double s, x0;
	int k;
	s = 0;
	for (k = 1; k <= n; k++)
	{
		x0 = pow(-1, k + 1) * pow(x, 2 * k + 1) / (4 * k * k - 1);
		s += x0;
	}
	return s;
}
double fan2(double x)
{
	double y;
	y = ((1 + x * x) * atan(x) - x) / 2;
	return y;
}
void Out_Rez(double d, double c, double x)
{
	cout << "\t" << ("x=") << x
		<< "\t" << ("Y(x)=") << c
		<< "\t" << ("S(x)=") << d
		<< "\t" << ("|Y(x)-S(x)|=") << fabs( d - c) << endl;
}