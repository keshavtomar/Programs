// we will need a conatainer which will do erase, and which has array like functionality of going
// to an index, ordered_set will do our work

#include <iostream>
#include <climits>
#include <algorithm>
#include <set>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

// header files for using ordered set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main()
{
    int n, skip;
    cin >> n >> skip;
    ordered_set od;

    FOR(i, 0, n)
    {
        od.insert(i + 1);
    }

    // skip = skip % n;

    int start = 0;

    while (od.size())
    {
        start = (start + skip) % od.size();
        auto it = od.find_by_order(start);
        cout << *it<<" ";
        od.erase(it);
    }

    return 0;
}