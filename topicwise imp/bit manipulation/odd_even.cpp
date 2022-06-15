#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if ((n & 1) == 0)
    {
        cout << n << " is even";
    }
    else
    {
        cout << n << " is odd";
    }
}