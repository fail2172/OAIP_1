#include <math.h>
#include <iostream>
using namespace std;
double fan1(double, int);
double fan2(double);
double fan3(double, double);
void Out_Rez(double, double, double, double);

int main()
{
	long double a, b, h, x, s, y, o;
	long long int n;
	cout << ("Vvedite a,b,h,n=");
	cin >> a >> b >> h >> n;
	for (x = a; x <= b; x += h)
	{
		s = fan1(x, n);
		y = fan2(x);
		o = fan3(y, s);
		Out_Rez(x, y, s, o);
	}
}
double fan1(double x, int n)
{
	double x0, s = 0;
	int k, m, u;
	for (k = 0; k <= n; k++)
	{
		u = 1;
		for (m = 1; m <= 2 * k; m++)
			u *= m;
		x0 = pow(x, 2 * k) / u;
		s += x0;
	}
	return s;
}
double fan2(double x)
{
	double y;
	y = (exp(x) + exp(-x)) / 2;
	return y;
}
double fan3(double y, double s)
{
	double o;
	o = fabs(y - s);
	return o;
}
void Out_Rez(double x, double y, double s, double o)
{
	cout << "\t" << ("x=") << x
		<< "\t" << ("Y(x)=") << y
		<< "\t" << ("S(x)=") << s
		<< "\t" << ("|Y(x)-S(x)|=") << o << endl;
}