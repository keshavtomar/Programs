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
    int n;
    cin >> n;

    char a[1000][1000];

    bool correct = 1;

    FOR(i, 0, n)
    {
        FOR(j, 0, n)
        {
            cin >> a[i][j];
        }
    }

    FOR(i, 0, n)
    {
        FOR(j, 0, i)
        {
            if (a[i][j] == 'W' && a[j][i] != 'L')
            {
                correct = 0;
                goto end;
            }
            if (a[i][j] == 'L' && a[j][i] != 'W')
            {
                correct = 0;
                goto end;
            }
            if (a[i][j] == 'D' && a[j][i] != 'D')
            {
                correct = 0;
                goto end;
            }
        }
    }
end:
    if (correct)
    {
        cout << "correct" << endl;
    }
    else
    {
        cout << "incorrect" << endl;
    }

    return 0;
}