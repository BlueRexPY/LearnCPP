#include <iostream>
#include <math.h>
#include <vector>
#include <string> 

using namespace std;

int slice(string str, int from, int to)
{
	int j = 0;
	for (int i = from; i <= to; ++i)
		str[j++] = str[i];
	str[j] = 0;
	return stoi(str);
};

bool LengthValid(int Length) {
	if (Length > 1 && Length < 17) {
		return true;
	}
	return false;
}

bool isPrime(int n){
	if (n > 1)
	{
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false;
			}
			return true;
		}
	}
	return false;
}


bool checkSuper(int n, int Length) {
	if (isPrime(n)) {
		string nstr = to_string(n);
		for (int i = 0; i < Length; i++)
		{	
			if (!isPrime(n)) {
				return false;
			}
			if (!isPrime(nstr[i])) {
				return false;
			}
			if (!i == 0 && !isPrime(slice(nstr, 0, i))) {
				return false;
			}
			if (!isPrime(slice(nstr, i, Length - 1))) {
				return false;
			}
		}
		return true;
	}
	return false;
};

int main()
{
	setlocale(LC_ALL,"");
	int Length = 2; //significant digits
	cout << "significant digits 2-16: ";
	cin >> Length;
	if (!LengthValid(Length)) {
		cout << "enter the correct number" << endl;
		return 0;
	}

	for (int i = pow(10, Length - 1); i < pow(10, Length)-1; i++)
	{
		if (checkSuper(i, Length)) {
			cout << i << endl;
		}
	}
	return 0;
}