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
        int k;
        vi vc(n + 1);
        FOR(i, 1, n + 1)
        {
            cin >> vc[i];
        }

        int ans[n + 1] = {0};
        int lastindex[n + 1];

        FOR(i, 1, n + 1)
        {
            lastindex[i] = -1;
        }

        FOR(i, 1, n + 1)
        {
            if (lastindex[vc[i]] == -1)
            {
                ans[vc[i]]++;
                lastindex[vc[i]] = i;
            }
            else
            {
                if (lastindex[vc[i]] % 2 != i % 2)
                {
                    ans[vc[i]]++;
                    lastindex[vc[i]] = i;
                }
            }
        }

        FOR(i, 1, n + 1)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}