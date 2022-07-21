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
        int n, m;
        cin >> n >> m;
        vi a;
        int curr;
        FOR(i, 0, n)
        {
            cin >> curr;
            a.pb(curr);
        }

        char st[100];
        FOR(i, 0, m)
        {
            st[i] = 'B';
        }
        st[m] = '\0';

        FOR(i, 0, n)
        {
            a[i]--;
            int ind = min(a[i], m - a[i] - 1);
            int ind2 = max(a[i], m - a[i] - 1);
            if (st[ind] != 'A')
                st[ind] = 'A';
            else
            {
                st[ind2] = 'A';
            }
        }

        cout << st << endl;
    }
    return 0;
}