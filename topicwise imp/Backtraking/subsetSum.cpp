#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

int calculate(int i, int n, int arr[], int count)
{
    if (i >= n)
    {
        if (count == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    return calculate(i + 1, n, arr, count) + calculate(i + 1, n, arr, count - arr[i]);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    FOR(i, 0, n)
    {
        cin >> arr[i];
    }

    int count = k;

    int ans = calculate(0, n, arr, count);

    cout << ans << endl;

    return;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}