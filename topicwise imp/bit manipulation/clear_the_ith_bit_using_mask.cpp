#include <iostream>
#include <algorithm>

using namespace std;

int clearIthBit(int n, int i)
{
    // creating a mask
    int mask = (1 << i);

    // negating mask to make the ith bit 0 and all else 1
    mask = ~mask;

    return (n & mask);
}

int main(void)
{
    // clear means make it 0, whatever(1 or 0) it is
    //remember counting starts from 0

    int n, i;
    cin >> n >> i;

    cout << clearIthBit(n, i);
}