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
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> vc(n);
    FOR(i, 0, n)
    {
        cin >> vc[i].first;
        vc[i].second = i + 1;
    }

    sort(vc.begin(), vc.end());


    FOR(i, 0, n)
    {
        int k = n - 1;
        FOR(j, i + 1, k)
        {
            while (vc[i].first + vc[j].first + vc[k].first > x)
                k--;
            if (j < k && vc[i].first + vc[j].first + vc[k].first == x)
            {
                int a[3];
                a[0] = vc[i].second;
                a[1] = vc[j].second;
                a[2] = vc[k].second;
                sort(a, a + 3);
                cout << a[0] << " " << a[1] << " " << a[2] << endl;
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}