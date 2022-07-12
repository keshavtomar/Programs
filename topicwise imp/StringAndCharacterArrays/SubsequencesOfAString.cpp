#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>

#define FOR(a, b, c) for (int a = b; a < c; a++)

using namespace std;

int subsequences(string st, string output[])
{
    if (st.length() == 0)
    {
        output[0] = "";
        return 1;
    }

    string shortString = st.substr(1);
    int count = subsequences(shortString, output);

    FOR(i, 0, count)
    {
        output[i + count] = st[0] + output[i];
    }

    return 2 * count;
}

int main(void)
{
    string st;
    cin >> st;
    int n = st.length();
    n = pow(2, n);
    string *output = new string[n];
    int count = subsequences(st, output);
    FOR(i, 0, n)
    {
        cout << *(output + i) << endl;
    };
}