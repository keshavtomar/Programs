#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

int ans[9][9];

bool isPossible(int x, int i, int j)
{
    FOR(m, 0, 9)
    {
        if (ans[m][j] == x)
        {
            return false;
        }
        if (ans[i][m] == x)
        {
            return false;
        }
    }

    if (i >= 0 && i <= 2 && j >= 0 && j <= 2)
    {
        FOR(a, 0, 3)
        {
            FOR(b, 0, 3)
            {
                if (x == ans[a][b])
                {
                    return false;
                }
            }
        }
    }
    else if (i >= 3 && i <= 5 && j >= 0 && j <= 2)
    {
        FOR(a, 3, 6)
        {
            FOR(b, 0, 3)
            {
                if (x == ans[a][b])
                {
                    return false;
                }
            }
        }
    }
    else if (i >= 6 && i <= 8 && j >= 0 && j <= 2)
    {
        FOR(a, 6, 9)
        {
            FOR(b, 0, 3)
            {
                if (x == ans[a][b])
                {
                    return false;
                }
            }
        }
    }
    else if (i >= 0 && i <= 2 && j >= 3 && j <= 5)
    {
        FOR(a, 0, 3)
        {
            FOR(b, 3, 6)
            {
                if (x == ans[a][b])
                {
                    return false;
                }
            }
        }
    }
    else if (i >= 3 && i <= 5 && j >= 3 && j <= 5)
    {
        FOR(a, 3, 6)
        {
            FOR(b, 3, 6)
            {
                if (x == ans[a][b])
                {
                    return false;
                }
            }
        }
    }
    else if (i >= 6 && i <= 8 && j >= 3 && j <= 5)
    {
        FOR(a, 6, 9)
        {
            FOR(b, 3, 6)
            {
                if (x == ans[a][b])
                {
                    return false;
                }
            }
        }
    }
    else if (i >= 0 && i <= 2 && j >= 6 && j <= 8)
    {
        FOR(a, 0, 3)
        {
            FOR(b, 6, 9)
            {
                if (x == ans[a][b])
                {
                    return false;
                }
            }
        }
    }
    else if (i >= 3 && i <= 5 && j >= 6 && j <= 8)
    {
        FOR(a, 3, 6)
        {
            FOR(b, 6, 9)
            {
                if (x == ans[a][b])
                {
                    return false;
                }
            }
        }
    }
    else if (i >= 6 && i <= 8 && j >= 6 && j <= 8)
    {
        FOR(a, 6, 9)
        {
            FOR(b, 6, 9)
            {
                if (x == ans[a][b])
                {
                    return false;
                }
            }
        }
    }

    return true;
}

void printAns()
{
    FOR(i, 0, 9)
    {
        FOR(j, 0, 9)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

bool fillAns(int i, int j)
{
    if (i >= 9)
    {
        return true;
    }

    if (ans[i][j] != 0)
    {
        return fillAns(i + ((j + 1) / 9), (j + 1) % 9);
    }

    int a = 1;
    while (a < 10)
    {
        if (isPossible(a, i, j))
        {
            ans[i][j] = a;
            if (fillAns(i + ((j + 1) / 9), (j + 1) % 9))
            {
                return true;
            }
            ans[i][j] = 0;
        }
        a++;
    }

    return false;
}

void solve()
{
    FOR(i, 0, 9)
    {
        FOR(j, 0, 9)
        {
            cin >> ans[i][j];
        }
    }

    fillAns(0, 0);

    printAns();
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