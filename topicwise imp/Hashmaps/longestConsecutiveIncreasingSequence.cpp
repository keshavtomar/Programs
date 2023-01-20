#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

#include <map>
#include <vector>

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n)
{
    // Your Code goes here\

    map<int, bool> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] = true;
    }

    int maxLen = 1;
    int lans = arr[0];
    int rans = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (mpp[arr[i]] == false)
        {
            continue;
        }
        else
        {
            cout << arr[i] << " ";
            mpp[arr[i]] = false;
            int l = arr[i] - 1;
            while (mpp.find(l) != mpp.end())
            {
                mpp[l] = false;
                l--;
            }
            int r = arr[i] + 1;
            while (mpp.find(r) != mpp.end())
            {
                mpp[r] = false;
                r++;
            }
            l++;
            r--;

            if (maxLen < r - l + 1)
            {
                maxLen = r - l + 1;
                lans = l;
                rans = r;
            }
        }
    }

    cout << maxLen << " ";

    vector<int> ans;
    ans.push_back(lans);
    ans.push_back(rans);

    return ans;
}

void solve()
{
    int a[] = {2, 12, 9, 16, 10, 5, 3, 20, 25, 11, 1, 8, 6};
    vector<int> v = longestConsecutiveIncreasingSequence(a, 13);
    cout << v[0] << " " << v[1];
    return;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}