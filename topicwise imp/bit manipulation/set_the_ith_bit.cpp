#include <iostream>
#include <algorithm>

using namespace std;

int ithBitSetter(int n, int i)
{
    // creating a mask
    int mask = (1 << i);
    return (mask | n);
}

int main(void)
{
    int n, i;
    cin >> n >> i;

    cout << ithBitSetter(n, i);
}