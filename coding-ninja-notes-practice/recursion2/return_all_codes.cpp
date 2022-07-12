#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

char ConvertToChar(int a)
{
    if (a <= 26)
    {
        return 'a' + a - 1;
    }
    else
    {
        return 0;
    }
}

int getCodes(string input, string output[10000], int oind, string temp)
{
    if (input.length() == 0)
    {
        // transfer temp to output
        output[oind] = temp;
        oind++;
        return oind;
    }

    char x = ConvertToChar(stoi(input.substr(0, 1)));
    if (!x)
    {
        return oind;
    }
    int n = getCodes(input.substr(1), output, oind, temp + x);

    if (input.length() >= 2)
    {
        char y = ConvertToChar(stoi(input.substr(0, 2)));
        if (!y)
        {
            return n;
        }
        int m = getCodes(input.substr(2), output, n, temp + y);
        return m;
    }

    return n;
}

int getCodes(string input, string output[10000])
{

    string temp;

    int n = getCodes(input, output, 0, temp);

    return n;
}

int main()
{
    string st;
    cin >> st;
    string output[10000];
    int n = getCodes(st, output);
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}