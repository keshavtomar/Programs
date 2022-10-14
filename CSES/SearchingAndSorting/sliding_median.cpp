#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <map>
#include <queue>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

int main()
{
    int n, k;
    cin >> n >> k;

    queue<int> quu;

    ordered_multiset stt;
    int arr[n];
    FOR(i, 0, n)
    {
        cin >> arr[i];
    }

    int stit = 0, endit = k - 1;

    FOR(i, 0, k - 1)
    {
        stt.insert(arr[i]);
    }

    while (endit < n)
    {
        stt.insert(arr[endit]);

        int x = *stt.find_by_order((k-1) / 2);

        cout << x << " ";

        // for (auto h : stt)
        // {
        //     cout << h << " ";
        // }
        // cout << endl;

        stt.erase(stt.find_by_order(stt.order_of_key(arr[stit])));

        stit++;

        endit++;
    }
    cout << endl;

    return 0;
}