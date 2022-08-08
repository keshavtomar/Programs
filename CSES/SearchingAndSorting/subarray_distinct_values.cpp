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

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vi arr(n);
    FOR(i, 0, n)
    {
        cin >> arr[i];
    }

    

    map<int, int> mpp;

    int i = 0;
    int j = 0;

    ll ans = 0;

    mpp[arr[0]]++;

    while (i < n)
    {
        if (mpp.size() <= k)
        {
            j++;
            if (j == n)
            {
                mpp[INT32_MAX]++;
                continue;
            }
            mpp[arr[j]]++;
        }
        else
        {
            cout << j << " " << i << endl;
            ans += j - i;
            mpp[arr[i]]--;
            if (mpp[arr[i]] == 0)
            {
                mpp.erase(arr[i]);
            }
            cout << "not working   " << mpp.size() << " ";
            cout << "map is : " << endl;
            for (auto cs : mpp)
            {
                cout << cs.first << " " << cs.second << endl;
            }
            i++;
        }
    }

    cout << ans << endl;

    return 0;
}