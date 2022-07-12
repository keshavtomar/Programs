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
    list<char> ls;
    int XOR = 0;
    string st;
    cin >> st;
    bool possible = true;
    // for (int i = 0; i < st.size(); i++)
    // {
    //     XOR = XOR ^ st[i];
    // }
    // if (!XOR)
    // {
    //     ls.push_back((char)XOR);
    // }

    int a[26] = {0};
    for (int i = 0; i < st.size(); i++)
    {
        st[i] = st[i] - 65;
        a[st[i]]++;
    }

    int no_of_odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 != 0)
        {
            ls.push_back((char)(i + 65));
            a[i]--;
            no_of_odd++;
        }
    }

    if (no_of_odd > 1)
    {
        possible = false;
    }

    if (!possible)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (int i = 0; i < 26; i++)
    {
        while (a[i] > 0)
        {
            if (a[i] % 2 == 0)
            {
                ls.pb((char)(i + 65));
            }
            else
            {
                ls.push_front((char)(i + 65));
            }
            a[i]--;
        }
    }

    for (auto it : ls)
    {
        cout << it;
    }
    cout << endl;
    return 0;
}