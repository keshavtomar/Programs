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
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        ll count = 0;
        vector<int> vc(n + 1);
        vc[0] = 0;
        FOR(i, 1, n + 1)
        {
            cin >> arr[i];
            if (arr[i] < i)
            {
                count++;
            }
            vc[i] = count;
        }

        ll ans = 0;
        for (int i = n; i >= 1; i--)
        {
            if (arr[i] < i && arr[i] != 0)
            {
                ans += vc[arr[i] - 1];
            }
        }

        cout << ans << endl;
    }
    return 0;
}