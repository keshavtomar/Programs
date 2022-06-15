#include <iostream>
#include <algorithm>

using namespace std;

bool checkPowerOfTwo(int n)
{
    if ((n & (n - 1)) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int n;
    cin >> n;
    if (checkPowerOfTwo(n))
    {
        cout << "Yes " << n << " is a power of two";
    }
    else
    {
        cout << "no " << n << " is not a power of two";
    }
}