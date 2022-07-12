#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cstring>
#include <list>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    list<ll> q;
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    else if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    ll x = n;

    q.push_front(x);
    x = x - 1;
    int count = 1;
    while (--x)
    {
        if (count & 1 == 1)
        {
            q.push_back(x);
        }
        else
        {
            q.push_front(x);
        }
        count++;
    }

    q.push_front(n - 1);

    for (auto it : q)
    {
        cout << it << " ";
    }
    return 0;
}