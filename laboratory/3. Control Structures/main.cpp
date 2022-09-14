#include <iostream>
#include <math.h>

using namespace std;

double count(double x) {
	const double PI = acos(-1.0);
	if (x <= 0){
		cout << "sin(" << x << ")";
		return sin(x);
	}
	if ((0<x)&&(x<=PI/4)) {
		cout << "atan(" << x << ")";
		return atan(x);
	}
	if ((PI / 4 < x)&&(x <= 32)) {
		cout << "log(" << x << ")";
		return log2(x);
	}
	cout << "1/"<<x;
	return 1/x;
}

int main() {
	double x;
	cout << "Input x: ";
	cin >> x;
	cout << " = "<< count(x) << endl;
}
