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

using namespace std;

/*
Difference between a subsequence and substring
A subsequence may be non continuous while a substring must be continous
ex -> longest common subsequence in X="ABCDGH" and Y="ACDGHR" is of length 5 ("ACDGH")
 while the longest common substring is of length 4 ("CDGH")
*/

int dp[1002][1002];

int lcs(int x, int y, string s1, string s2)
{
    if (x == 0 || y == 0)
    {
        return dp[x][y] = 0;
    }

    if (dp[x][y] != -1)
    {
        return dp[x][y];
    }

    if (s1[x - 1] == s2[y - 1])
    {
        return dp[x][y] = 1 + lcs(x - 1, y - 1, s1, s2);
    }
    else
    {
        return dp[x][y] = max(lcs(x - 1, y, s1, s2), lcs(x, y - 1, s1, s2));
    }
}

int main()
{
    int x, y;
    string s1, s2;
    cout << "Give the sizes of both strings : ";
    cin >> x >> y;

    cout << "Enter first string" << endl;
    cin >> s1;
    cout << "Enter second string " << endl;
    cin >> s2;
    cout << "Longest common Subsequence : " << endl;
    memset(dp, -1, sizeof(dp));
    cout << lcs(x, y, s1, s2);
    return 0;
}