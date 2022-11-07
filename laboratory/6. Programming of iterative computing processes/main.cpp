#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	double x = 0;
	double y = 0;
	
	double eps = 0;
	double n = 0;

	cout << "Введiть значення x: ";
	cin >> x;
	cout << "Введiть точнiсть eps: ";
	cin >> eps;
	cout << "Введiть степiнь n: ";
	cin >> n;

	double y1 = x;
	while (fabs(y1 - y) > eps) {
		y = y1;
		y1 = (1.0 / n)*(x / pow(y, n - 1) + (n - 1) * y);
	}
		cout << "Значення кореня дорiвнює - " << y1;
	return 0;
}