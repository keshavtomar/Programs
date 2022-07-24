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

bool checkwithout_b(string st, string ans)
{
    string st1, st2;

    for (auto c : st)
    {
        if (c != 'b')
        {
            st1 += c;
        }
    }
    for (auto c : ans)
    {
        if (c != 'b')
        {
            st2 += c;
        }
    }

    return (st1 == st2);
}

bool check_pos_a(string st, string ans)
{
    int it1 = 0;

    vi aposts1;

    while (it1 < st.length())
    {
        if (st[it1] == 'a')
        {
            aposts1.pb(it1);
        }
        it1++;
    }

    int it2 = 0;
    vi aposts2;

    while (it2 < st.length())
    {
        if (ans[it2] == 'a')
        {
            aposts2.pb(it2);
        }
        it2++;
    }

    for (int i = 0; i < aposts1.size(); i++)
    {
        if (aposts1[i] > aposts2[i])
        {
            return false;
        }
    }
    return true;
}

bool check_pos_c(string st, string ans)
{
    int it1 = 0;

    vi cposts1;

    while (it1 < st.length())
    {
        if (st[it1] == 'c')
        {
            cposts1.pb(it1);
        }
        it1++;
    }

    int it2 = 0;
    vi cposts2;

    while (it2 < st.length())
    {
        if (ans[it2] == 'c')
        {
            cposts2.pb(it2);
        }
        it2++;
    }

    for (int i = 0; i < cposts1.size(); i++)
    {
        if (cposts1[i] < cposts2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        string ans;
        cin >> ans;

        string x = st;
        string y = ans;

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        bool possible = 1;

        if (x != y)
        {
            possible = 0;
        }

        if (possible)
            possible = checkwithout_b(st, ans);

        if (possible)
        {
            possible = check_pos_a(st, ans);
        }

        if (possible)
        {
            possible = check_pos_c(st, ans);
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}