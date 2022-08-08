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
    string st;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        cin >> st;

        ll score = 0;

        int startzeroes = 0;

        while (st[startzeroes] == 'L')
        {
            startzeroes++;
        }

        multiset<int> lossesbetweenwin;

        int lbw = 0;
        bool lossstreak = 0;

        if (st[0] == 'W')
        {
            lossstreak = 1;
            score++;
        }

        FOR(i, 1, st.length())
        {
            if (st[i] == 'W')
            {
                lossstreak = 1;
                if (lbw)
                {
                    lossesbetweenwin.insert(lbw);
                }
                lbw = 0;
                if (st[i - 1] == 'W')
                {
                    score += 2;
                }
                else
                {
                    score += 1;
                }
            }
            if (st[i] == 'L' && lossstreak == 1)
            {
                lbw++;
            }
        };

        // the last lbw is obviously the no of zeroes in the last

        for (auto cs : lossesbetweenwin)
        {
            if (k < cs)
            {
                score += 2 * k;
                k = 0;
                break;
            }
            else
            {
                score += ((2 * cs) + 1);
                k -= cs;
            }
        }

        score += min(k * 2, lbw * 2);
        k -= lbw;

        if (!score && k)
        {
            score++;
            k--;
        }

        if (k > 0)
        {
            score += min(startzeroes * 2, k * 2);
        }

        cout << score << endl;
    }

    return 0;
}