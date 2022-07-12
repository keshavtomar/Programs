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

void DevideSets(vector<int> &vc1, vector<int> &vc2, int n)
{
    if (n == 3)
    {
        vc2.pb(2);
        vc2.pb(1);
        vc1.pb(3);
        return;
    }
    else if (n == 4)
    {
        vc1.pb(4);
        vc1.pb(1);
        vc2.pb(3);
        vc2.pb(2);
        return;
    }

    vc1.pb(n);
    vc1.pb(n - 3);
    vc2.pb(n - 1);
    vc2.pb(n - 2);

    DevideSets(vc1, vc2, n - 4);

    return;
}

int main()
{
    ll n;
    cin >> n;
    vector<int> vc1, vc2;
    if (n % 4 == 2 || n % 4 == 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        DevideSets(vc1, vc2, n);

        // print vc1
        cout << vc1.size() << endl;
        for (auto it : vc1)
        {
            cout << it << " ";
        }
        cout << endl;

        // print vc2
        cout << vc2.size() << endl;
        for (auto it : vc2)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}