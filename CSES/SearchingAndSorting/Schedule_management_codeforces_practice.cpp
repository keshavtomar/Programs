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

ll BinarySearch(ll a[], ll n, ll m)
{
    ll preferredTo[n + 1] = {0};
    FOR(i, 0, m)
    {
        preferredTo[a[i]]++;
    }

    // FOR(i, 1, n + 1)
    // {
    //     cout << preferredTo[i] << " ";
    // }
    // cout << endl;

    ll start = 1;
    ll end = m * 2;
    int mid;
    ll candidate;
    while (start <= end)
    {
        mid = (start + end) / 2;
        ll tasklefttodo = 0;
        ll candoothertasks = 0;
        FOR(i, 1, n + 1)
        {
            if (preferredTo[i] == mid)
            {
                continue;
            }
            else if (preferredTo[i] < mid)
            {
                candoothertasks += (mid - preferredTo[i]) / 2;
            }
            else if (preferredTo[i] > mid)
            {
                tasklefttodo += (preferredTo[i] - mid);
            }
        }

        if (tasklefttodo <= candoothertasks)
        {
            // go left, try in lesser time
            // cout << "runs " << mid << endl;
            end = mid - 1;
            candidate = mid;
        }
        else if (candoothertasks < tasklefttodo)
        {
            // cout << "run2 " << mid << endl;
            // go right, try increasing time
            start = mid + 1;
        }
    }
    return candidate;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[m];
        FOR(i, 0, m)
        {
            cin >> a[i];
        }

        ll minimumTime = BinarySearch(a, n, m);

        cout << minimumTime << endl;
    }
    return 0;
}