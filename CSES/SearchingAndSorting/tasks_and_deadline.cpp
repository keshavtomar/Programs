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
    ll n;
    cin >> n;
    ll reward = 0;
    vector<pair<int, int>> task(n); //{duration,deadline}

    FOR(i, 0, n)
    {
        cin >> task[i].first >> task[i].second;
    }

    sort(task.begin(), task.end());

    ll t = 0;
    FOR(i, 0, n)
    {
        t += task[i].first;
        reward += (task[i].second - t);
    }

    cout << reward;
    return 0;
}