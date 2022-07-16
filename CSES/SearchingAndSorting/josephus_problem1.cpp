#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int main()
{
    int n;
    cin >> n;

    list<int> ls;
    FOR(i, 0, n)
    {
        ls.pb(i + 1);
    }

    auto it = ls.begin();
    it++;

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    while (ls.size())
    {
        cout << *it << " ";
        auto it2 = it;
        it++;
        ls.erase(it2);
        if (it == ls.end())
        {
            it = ls.begin();
        }
        it++;
        if (it == ls.end())
        {
            it = ls.begin();
        }
    }
    return 0;
}