#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int a)
{
    if (a <= 1)
        return false;
    if (a == 2)
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
    {
        upperBound--;
    }

    for (int i = lowerBound; i <= upperBound; i += 2)
    {
        if (isPrime(i))
        {
            cout << i << ", ";
        }
    }
    cout << endl;
}

/*
// Not work correctly : Need debugging
void primeNumberRange(int lowerBound, int upperBound)
{
    int l = lowerBound / 6;
    int h = upperBound / 6;
    if (lowerBound <= 2) {
        lowerBound = 2;
        if (upperBound == 2) {
            cout << lowerBound ;
        } else if (upperBound > 2) {
            cout << lowerBound << ", " << (++lowerBound) << ", ";
        }
    }

    if(((6*l + 1) < lowerBound) || ((6*l - 1) < lowerBound)) {
        l++;
    }

    for (int i = l; i <= h; i++)
    {
        int a = 6*i-1;
        int b = 6*i+1;
        bool flagA = isPrime(a);
        bool flagB = isPrime(b);
        if(flagA) {
            cout<<a<<", ";
        }
        if(flagB) {
            cout<<b<<", ";
        }
    }
    cout<<endl;
}
*/
int main()
{
    int lowerBound, upperBound;
    cout << "Enter the lower boundary : ";
    cin >> lowerBound;
    cout << "Enter the upper boundary : ";
    cin >> upperBound;
    // primeNumberRange(lowerBound, upperBound);
    for (int i = -3; i <= lowerBound; i++)
    {
        cout << "For lowerBound=" << i << " : ";
        primeNumberRange(i, upperBound);
        cout << endl;
    }
    return 0;
}