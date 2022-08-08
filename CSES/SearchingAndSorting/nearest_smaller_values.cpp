#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <stack>

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
    stack<pair<int, int>> st;
    st.push({INT32_MIN, 0});
    int k;
    FOR(i, 1, n + 1)
    {
        cin >> k;
        while (st.top().first >= k)
        {
            st.pop();
        }
        cout << st.top().second << " ";
        st.push({k, i});
    }

    return 0;
}