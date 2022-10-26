#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;

int main() {
        int r = (-67 ^ -44);
        cout << r << " = " << bitset<32>(r) << endl;
        //105 = 00000000000000000000000001101001
    return 0;
}
