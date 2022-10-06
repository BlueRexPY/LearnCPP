#include <iostream>
#include <math.h>
using namespace std;

double calculate(double a, double b, double c) {
	if (a<=b)
	{
		return (a+b)*c;
	} 
	return 0;
}


int main()
{
	double a,b,c = 0;

	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;

	double y = calculate(a,b,c);
	cout << y << endl;
	return 0;
}
