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

int validRBS(string st)
{
    ll x = 0;
    FOR(i, 0, st.length())
    {
        if (st[i] == '(')
        {
            x += 1;
        }
        else if (st[i] == ')')
        {
            x -= 1;
        }
    }
    return x;
}

bool checkvalidRBS(string st)
{
    ll x = 0;
    FOR(i, 0, st.length())
    {
        if (st[i] == '(')
        {
            x += 1;
        }
        else if (st[i] == ')')
        {
            x -= 1;
        }
        if (x < 0)
        {
            return false;
        }
    }
    if (x != 0)
    {
        return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;

        int questionMark = 0;

        bool unique = false;

        FOR(i, 0, st.length())
        {
            if (st[i] == '?')
            {
                questionMark++;
            }
        }

        int x = validRBS(st);

        int open_added = (questionMark - x) / 2;
        int close_added = questionMark - open_added;

        if (!open_added || !close_added)
        {
            unique = true;
        }
        else
        {
            int test_open = open_added;
            int test_close = close_added;

            int i = 0;

            // cout << test_open << " " << test_close << endl;

            string teststring2 = st;

            while ((test_open - 1) > 0)
            {
                if (teststring2[i] == '?')
                {
                    teststring2[i] = '(';
                    test_open--;
                }
                i++;
            }

            while (teststring2[i] != '?')
            {
                i++;
            }
            teststring2[i] = ')';
            while (teststring2[i] != '?')
            {
                i++;
            }
            teststring2[i] = '(';

            while ((test_close - 1) > 0)
            {
                if (teststring2[i] == '?')
                {
                    teststring2[i] = ')';
                    test_close--;
                }
                i++;
            }
            // cout << teststring2 << endl;

            bool validity2 = checkvalidRBS(teststring2);

            if (validity2 == false)
            {
                unique = true;
            }
        }

        if (unique)
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