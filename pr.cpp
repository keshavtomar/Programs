#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <map>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        FOR(i, 0, n)
        {
            cin >> arr[i];
        }

        ll fact;

        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i + 1] > 0)
            {
                fact = arr[i + 1] / 2;
                arr[i + 1] -= 2 * fact;
                arr[i] -= fact;
            }
            if (arr[i + 1] == 1 && arr[i] > 0)
            {
                arr[i + 1] -= 2;
                arr[i] -= 1;
            }
            // cout << arr[i] << " ";
        }
        // cout << arr[n - 1] << endl;

        ll ans = 0;
        FOR(i, 0, n)
        {
            ans += abs(arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}