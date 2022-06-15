#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n & 1 != 0)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
}