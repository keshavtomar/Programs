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
    int n;
    cin >> n;
    int arr[n];
    FOR(i, 0, n)
    {
        cin >> arr[i]; // 3,1,2,7,6
    }
    vi prefixfactor(n + 1);

    prefixfactor[0] = 0;

    FOR(i, 0, n)
    {
        int x = (arr[i] + prefixfactor[i]) % n;
        if (x < 0)
        {
            prefixfactor[i + 1] = x + n;
        }
        else
            prefixfactor[i + 1] = x; // 0,3,4,1,3,4
    }

    map<int, int> mpp; //{currprefixfactor, noofprefixfactorbeforethissameascurr}

    ll count = 0;
    FOR(i, 0, n + 1)
    {
        count += mpp[prefixfactor[i]];
        mpp[prefixfactor[i]]++;
    }

    cout << count << endl;

    return 0;
}
