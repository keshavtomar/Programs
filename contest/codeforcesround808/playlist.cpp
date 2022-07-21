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
#define vii vector<pair<int, int>>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    vi vc;
    FOR(i, 0, n)
    {
        cin >> k;
        vc.pb(k);
    }
    auto upit = vc.begin() + 1;
    auto downit = vc.begin();
    int maxlen = 1;
    int currlen = 1;
    while (upit != vc.end())
    {
        // 8
        // 1 2 1 3 2 7 4 2
        if (upit == downit)
        {
            upit++;
        }
        
    }
    return 0;
}