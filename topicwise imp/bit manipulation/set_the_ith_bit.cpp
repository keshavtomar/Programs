#include <iostream>
#include <algorithm>

using namespace std;

int ithBitSetter(int n, int i)
{
    int count = 0;
    while (n % 2 == 0)
    {
        count++;
    }
    return count;
}

int main(void)
{
    int n, i;
    cin >> n >> i;

    cout << ithBitSetter(n, i);
}