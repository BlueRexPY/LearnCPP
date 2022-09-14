#include <iostream>
#include <math.h>

using namespace std;

double count(double l) {
	const double g = 9.81;
	const double PI = acos(-1.0);
	return (2 * PI * sqrt(l / g));
}

int main() {
	double l;
	cout << "Input l: ";
	cin >> l;
	cout << count(l) << endl;
}
