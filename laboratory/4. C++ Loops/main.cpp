#include <iostream>
#include <math.h>

using namespace std;

int count() {
	const int aumamount = 15;
	const double PI = acos(-1.0);
	for (int i = 1; i <= aumamount; i++) {
		cout << sin(PI / 40) / aumamount * i << "; ";
	}
	return 0;
}

int main() {
	count();
}
