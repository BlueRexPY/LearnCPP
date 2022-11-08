#include <iostream>
#include <math.h>
using namespace std;


int countIdentical(int* arrayA, int* arrayB, int arrayLength)
{
    int counter = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        for (int y = 0; y < arrayLength; y++)
        {
            if (arrayA[y] == arrayB[i]) {
                counter++;
                break;
            }
        }
    }
    return counter;
};

int main()
{
	setlocale(LC_ALL, "");
    int arrayLength;
    cout << "This program will show you all pair elements from array A in the array B" << endl;
    cout << "Please, enter number of array A elements (from 1 to 10): ";
    cin >> arrayLength;

    int* arrayA = new int[arrayLength];
    int* arrayB = new int[arrayLength];
    cout << "Enter array A elements: " << endl;
    for (int i = 0; i < arrayLength; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> arrayA[i];
    }

    cout << "Enter array B elements: " << endl;
    for (int i = 0; i < arrayLength; i++)
    {
        cout << "B[" << i << "] = ";
        cin >> arrayB[i];
    }

    cout << "Number of identical elements: " << countIdentical(arrayA, arrayB, arrayLength) << endl;

    delete[] arrayA;
    delete[] arrayB;
	return 0;
}
