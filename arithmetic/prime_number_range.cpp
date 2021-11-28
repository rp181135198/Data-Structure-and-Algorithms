#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int a)
{
    if (a <= 1)
        return false;
    if (a == 2 || a == 3)
        return true;
    for (int j = 2; j <= sqrt(a); j++)
    {
        if (a % j == 0)
        {
            return false;
        }
    }
    return true;
}

void primeNumberRange(int lowerBound, int upperBound)
{
    if (lowerBound <= 2)
    {
        lowerBound = 2;
        if (upperBound >= 2)
        {
            cout << lowerBound << ", ";
            lowerBound++;
        }
    }

    if (lowerBound % 2 == 0)
        lowerBound++;

    if (upperBound % 2 == 0)
        upperBound--;

    for (int i = lowerBound; i <= upperBound; i += 2)
    {
        if (isPrime(i))
        {
            cout << i << ", ";
        }
    }
    cout << endl;
}

int main()
{
    int lowerBound, upperBound;
    cout << "Enter the lower boundary : ";
    cin >> lowerBound;
    cout << "Enter the upper boundary : ";
    cin >> upperBound;
    primeNumberRange(lowerBound, upperBound);
    return 0;
}