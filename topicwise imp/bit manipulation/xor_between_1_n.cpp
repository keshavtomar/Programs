#include <iostream>
#include <algorithm>

using namespace std;

int xorCalculatorFromOneToN(int n)
{
    if (n % 4 == 0)
    {
        return n;
    }
    else if (n % 4 == 1)
    {
        return 1;
    }
    else if (n % 4 == 2)
    {
        return n + 1;
    }
    else if (n % 4 == 2)
    {
        return 0;
    }
    return false;
}

int main(void)
{
    int n;
    cin >> n;

    cout << xorCalculatorFromOneToN(n);
}