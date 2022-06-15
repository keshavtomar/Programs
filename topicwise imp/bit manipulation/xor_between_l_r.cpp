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

int calculateXorLtoR(int l, int r)
{
    int a = xorCalculatorFromOneToN(l - 1);
    int b = xorCalculatorFromOneToN(r);
    return (a ^ b);
}

int main(void)
{
    // this method is used to calculate xor between a range of elements from l to r
    int l, r;
    cin >> l >> r;

    cout << calculateXorLtoR(l, r);
}