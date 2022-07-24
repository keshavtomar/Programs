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
    vector<ll> book(n);

    FOR(i, 0, n)
    {
        cin >> book[i];
    }

    sort(book.begin(), book.end());
    reverse(book.begin(), book.end());

    ll sumtime = 0;

    FOR(i, 1, n)
    {
        sumtime += book[i];
    }

    if (sumtime < book[0])
    {
        cout << 2 * book[0];
    }
    else
    {
        cout << book[0] + sumtime;
    }

    return 0;
}