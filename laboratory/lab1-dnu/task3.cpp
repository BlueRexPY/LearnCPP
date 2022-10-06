#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double n = 0;
	double Sum = n;
	cout << "Input km: ";
	cin >> n;

	for (int i = 2;i < 8; i++) {
		n *= 1.1;
		Sum += n;
		cout << "Day " << i << " - " << n << "km" << endl;
		
	}
	cout << "Sum " << Sum << "km" << endl;
	return 0;
}