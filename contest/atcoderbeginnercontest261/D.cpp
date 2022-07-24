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

ll recursion(vi vc, int bounty[], int i, int counter)
{
    if (i == vc.size())
    {
        return 0;
    }

    // tail comes we sent the counter 0
    ll money1 = recursion(vc, bounty, i + 1, 0);

    // head comes, we sent counter by increasing it
    counter++;
    ll money2 = recursion(vc, bounty, i + 1, counter);
    money2 += vc[i];

    money2 += bounty[counter];

    return max(money1, money2);
}

int main()
{
    int n, m;
    cin >> n >> m;

    vi vc(n);

    FOR(i, 0, n)
    {
        cin >> vc[i];
    }

    int ind, bount;

    int bounty[5001] = {0};

    FOR(i, 0, m)
    {
        cin >> ind >> bount;
        bounty[ind] = bount;
    }

    ll maximumEarned = recursion(vc, bounty, 0, 0);

    cout << maximumEarned << endl;

    return 0;
}