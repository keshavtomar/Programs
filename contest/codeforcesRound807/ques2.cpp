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
        int k;
        ll no_of_zeroes = 0;
        ll nums = 0;
        bool start = false;
        vector<int> vc;
        FOR(i, 0, n)
        {
            cin >> k;
            vc.pb(k);
        }
        FOR(i, 0, n - 1)
        {
            if (vc[i] > 0)
            {
                start = true;
            }
            if (start)
            {
                if (vc[i] == 0)
                {
                    no_of_zeroes++;
                }
                else
                {
                    nums += vc[i];
                }
            }
        }

        cout << nums + no_of_zeroes << endl;
    }
    return 0;
}