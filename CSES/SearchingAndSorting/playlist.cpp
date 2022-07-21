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
    vi vc(n);
    FOR(i, 0, n)
    {
        cin >> vc[i];
    }

    auto it1 = vc.begin();
    auto it2 = it1;

    set<int> st;

    int maxsize = 0;

    while (it1 != vc.end())
    {
        while (st.find(*it1) != st.end())
        {
            st.erase(*it2);
            it2++;
        }
        st.insert(*it1);
        it1++;
        if (st.size() > maxsize)
        {
            maxsize = st.size();
        }
    }

    cout << maxsize;

    return 0;
}