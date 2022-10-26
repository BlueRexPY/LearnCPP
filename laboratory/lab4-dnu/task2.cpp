#include <iostream>
#include <math.h>
using namespace std;

bool isEven(int x)
{
    return (x % 2) == 0;
}

int main()
{
    cout << "Enter an integer: ";
    int x;
    cin >> x;

    if (isEven(x))
        cout << x << " is even\n";
    else
        cout << x << " is odd\n";

    return 0;
}
