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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vc;
        int k;
        bool possible = true;
        FOR(i, 0, n)
        {
            cin >> k;
            vc.pb(k);
        }
        FOR(i, 1, n)
        {
            bool isDivisible = false;
            for (int j = i - 1; j >= 0; j--)
            {
                if (vc[i] % vc[j] == 0)
                {
                    isDivisible=true;
                    break;
                }
            }
            if(!isDivisible){
                possible=false;
                break;
            }
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