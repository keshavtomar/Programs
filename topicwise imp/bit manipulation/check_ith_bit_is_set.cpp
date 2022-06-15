#include <iostream>
#include <algorithm>

using namespace std;

bool ithBitSetChecker(int n, int i)
{
    // creating a mask

    int mask = (1 << i);

    if ((mask & n) != 0)
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
    // check if the ith(starting from 0) bit of a number's binary conversion is 1

    int n, i;
    cin >> n >> i;

    bool isSet = ithBitSetChecker(n, i);

    if (isSet)
    {
        cout << "yes, it's " << i << "th bit is 1";
    }
    else
    {
        cout << "no";
    }
}