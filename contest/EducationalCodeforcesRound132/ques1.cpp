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
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        int a[3];
        cin >> x;
        cin >> a[0] >> a[1] >> a[2];
        bool b[3] = {0};
        int it = x;
        while (it != 0)
        {
            b[it - 1] = 1;
            it = a[it - 1];
        }
        if (b[0] + b[1] + b[2] == 3)
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