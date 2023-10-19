#include <iostream>
#include <cmath>

using namespace std;

double j(const double x);

int main()
{
	double kp, kk, z;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
	double dg = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		z = j(k) + pow(j(k - 1), 2) + 2 * j(1);
		cout << k << " " << z << endl;
		k += dg;
	}
	return 0;
}
double j(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1 / cos(x) * cos(x) + exp(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = 1 / cos(2 * x) * pow(2, (2 * k)) * pow(x, (2 * k)) / factorial(2 * k);
			a *= R;
			S += a;
		} while (j < 7);
		return S;
	}
}