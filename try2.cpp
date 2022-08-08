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

    vi sqrs;
    int sqr = 0;
    int i = 0;
    while (sqr <= 200000)
    {
        sqr = i * i;
        sqrs.pb(sqr);
        i++;
    }

    while (t--)
    {
        int n;
        cin >> n;

        vi ans(n);

        set<int> stt;

        FOR(i, 0, n)
        {
            stt.insert(i);
        }

        int it = sqrs.end() - sqrs.begin();
        while ((n - 1) * 2 < sqrs[it])
        {
            it--;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            int x = sqrs[it] - i;

            auto pos = stt.find(x);

            if (pos == stt.end())
            {
                it--;
                if (it == -1)
                {
                    cout << "-1";
                    goto end;
                }
                i++;
            }
            else
            {
                ans[i] = x;
                stt.erase(pos);
            }
        }

        for (auto cs : ans)
        {
            cout << cs << " ";
        }
    end:
        cout << endl;
    }
    return 0;
}