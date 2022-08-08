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
    string st = "abcdefghijklmnopqrstuvwxyz.";

    string str[3];

    FOR(j, 0, st.length())
    {
        str[j % 3] += st[j];
    }

    cout << str[0] << " | " << str[1] << " | " << str[2] << endl;
    cout << "    0     |     1     |     2    " << endl;

    string st2;

    cout << "In which group your letter is : " << endl;
    int x;
    cin >> x;

    if (x == 0)
    {
        st2 = str[1] + str[0] + str[2];
    }
    else if (x == 1)
    {
        st2 = str[0] + str[1] + str[2];
    }
    else if (x == 2)
    {
        st2 = str[1] + str[2] + str[0];
    }
    else
    {
        cout << "INPUT ERROR!";
        return 0;
    }

    string str2[3];

    FOR(i, 0, st2.length())
    {
        str2[i % 3] += st2[i];
    }

    cout << str2[0] << " | " << str2[1] << " | " << str2[2] << endl;
    cout << "    0     |     1     |     2    " << endl;

    cout << "In which group your letter is : " << endl;
    cin >> x;

    string st3;

    if (x == 0)
    {
        st3 = str2[1] + str2[0] + str2[2];
    }
    else if (x == 1)
    {
        st3 = str2[0] + str2[1] + str2[2];
    }
    else if (x == 2)
    {
        st3 = str2[1] + str2[2] + str2[0];
    }
    else
    {
        cout << "INPUT ERROR!";
        return 0;
    }

    string str3[3];

    FOR(i, 0, st3.length())
    {
        str3[i % 3] += st3[i];
    }

    cout << str3[0] << " | " << str3[1] << " | " << str3[2] << endl;
    cout << "    0     |     1     |     2    " << endl;

    cout << "In which group your letter is : " << endl;
    cin >> x;

    cout << "Letter in your mind was : " << str3[x][4];

    return 0;
}