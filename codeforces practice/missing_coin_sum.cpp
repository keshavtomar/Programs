#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int curr;
    vi vc;
    FOR(i, 0, t)
    {
        cin >> curr;
        vc.pb(curr);
    }
    sort(vc.begin(), vc.end());

    ll sumtillnow = 0;

    FOR(i, 0, t)
    {
        if (vc[i] > sumtillnow + 1)
        {
            break;
        }
        else
        {
            sumtillnow += vc[i];
        }
    }

    ll cantmake = sumtillnow + 1;

    cout << cantmake << endl;
    return 0;
}