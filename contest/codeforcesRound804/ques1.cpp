#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n & 1 == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << "1 1 " << ((n / 2) ^ 1) << endl;
        }
    }
    return 0;
}