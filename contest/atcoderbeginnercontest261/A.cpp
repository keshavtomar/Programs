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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vi cnt(101, 0);

    FOR(i, a, b)
    {
        cnt[i]++;
    }
    FOR(i, c, d)
    {
        cnt[i]++;
    }

    int ans = 0;
    FOR(i, 0, 101)
    {
        if (cnt[i] > 1)
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}