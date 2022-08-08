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
    int n, x;
    cin >> n >> x;
    int arr[n];
    FOR(i, 0, n)
    {
        cin >> arr[i]; // 2,-1,3,5,-2
    }
    vector<ll> prefixsum(n + 1);
    prefixsum[0] = 0;

    FOR(i, 0, n)
    {
        prefixsum[i + 1] = prefixsum[i] + arr[i]; // 0,2,1,4,9,7
    }

    map<ll, int> mpp; //{prefixsumvalue, noofthosevalues}

    ll count = 0;

    FOR(i, 0, prefixsum.size())
    {
        count += mpp[prefixsum[i] - x];
        mpp[prefixsum[i]]++;
    }

    cout << count << endl;

    return 0;
}