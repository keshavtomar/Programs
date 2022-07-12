#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cstring>
#include <iomanip>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int H;
    if (n > 59)
    {
        H = 22;
        n = n - 60;
    }
    else
    {
        H = 21;
    }
    (n < 10) ? cout << H << ":0" << n : cout << H << ":" << n;
}