#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <climits>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll alicelose = 0;

    alicelose += min(a - 1, n);

    if (b >= a || n < a)
    {
        cout << n - alicelose << endl;
    }
    else
    {
        alicelose += ((n / a) - 1) * (a - b);
        ll x = n % a;
        if (x >= b)
        {
            alicelose += x - b + 1;
        }
        cout << n - alicelose << endl;
    }
    return 0;
}