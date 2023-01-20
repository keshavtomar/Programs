#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
// #define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

int ans[18][18];
vector<pair<int, int>> blocked;

void print(int n)
{
    int p = 0;
    FOR(i, 0, n)
    {
        FOR(j, 0, n)
        {
            if (blocked[p].first == i && blocked[p].second == j)
            {
                cout << "0 ";
                p++;
            }
            else
                cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

bool PossibleMove(char direction, int i, int j, int n)
{
    if (direction == 'r')
    {
        if ((j + 1) >= n)
        {
            return false;
        }
        if (ans[i][j + 1] == 1)
        {
            return false;
        }
    }
    else if (direction == 'l')
    {
        if ((j - 1) < 0)
        {
            return false;
        }
        if (ans[i][j - 1] == 1)
        {
            return false;
        }
    }
    else if (direction == 'u')
    {
        if ((i - 1) < 0)
        {
            return false;
        }
        if (ans[i - 1][j] == 1)
        {
            return false;
        }
    }
    else if (direction == 'd')
    {
        if ((i + 1) >= n)
        {
            return false;
        }
        if (ans[i + 1][j] == 1)
        {
            return false;
        }
    }

    return true;
}

void solve(int n, int i, int j)
{
    // u,r,d,l
    if (i == n - 1 && j == n - 1)
    {
        print(n);
        return;
    }

    // u
    if (PossibleMove('u', i, j, n))
    {
        ans[i - 1][j] = 1;
        solve(n, i - 1, j);
        ans[i - 1][j] = 0;
    }
    if (PossibleMove('r', i, j, n))
    {
        ans[i][j + 1] = 1;
        solve(n, i, j + 1);
        ans[i][j + 1] = 0;
    }
    if (PossibleMove('d', i, j, n))
    {
        ans[i + 1][j] = 1;
        solve(n, i + 1, j);
        ans[i + 1][j] = 0;
    }
    if (PossibleMove('l', i, j, n))
    {
        ans[i][j - 1] = 1;
        solve(n, i, j - 1);
        ans[i][j - 1] = 1;
    }

    return;
}

int main()
{

    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                blocked.push_back({i, j});
            }

            // inverting
            ans[i][j] = 1 - arr[i][j];
        }
    }

    ans[0][0] = 1;

    solve(n, 0, 0);

    return 0;
}