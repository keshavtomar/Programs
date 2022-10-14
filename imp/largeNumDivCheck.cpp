#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <map>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

/*
This function is used to check the divisiblity of a very large number by a num, that large number is
taken as string and then div is checked
*/

bool isdiv(string s, ll b)
{
    int i = 0;
    int leftover = 0;
    int n = s.length();
    while (i < n)
    {
        ll test;
        string st;
        if (n > 7)
        {
            st = s.substr(i, 7);
            i = i + 7;
        }
        else
        {
            st = s.substr(i, n - i);
            i = n;
        }

        test = leftover * 8 + stoi(st);
        leftover = test % b;
    }
    if (leftover % b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string st = "200000000000000000000000000000000000000000000000000000000000000000000000000000000004";
    cout << isdiv(st, 4);
    return 0;
}