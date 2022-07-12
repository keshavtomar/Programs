#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int main()
{
    ll t;
    cin >> t;

    ll trailingZeroes = 0;
    int x = 5;
    while (t / x != 0)
    {
        trailingZeroes += t / x;
        x *= 5;
    }
    cout << trailingZeroes;
}