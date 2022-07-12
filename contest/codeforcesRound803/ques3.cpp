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
        vector<int> vc;
        int nz = 0, np = 0, nn = 0;
        bool sum3 = true;
        while (n--)
        {
            cin >> k;
            if (k > 0)
            {
                np++;
                vc.pb(k);
            }
            else if (k < 0)
            {
                nn++;
                vc.pb(k);
            }
            else if (k == 0 && nz <= 2)
            {
                vc.pb(0);
                nz++;
            }

            if (nn > 2 || np > 2)
            {
                sum3 = false;
            }
        }

        if (sum3)
        {
            bool everysumfound = true;
            for (auto it1 = vc.begin(); it1 < vc.end() - 2; it1++)
            {
                for (auto it2 = it1 + 1; it2 < vc.end() - 1; it2++)
                {
                    for (auto it3 = it2 + 1; it3 < vc.end(); it3++)
                    {
                        ll x = (*it1) + (*it2) + (*it3);
                        bool xfound = false;
                        for (auto it4 = vc.begin(); it4 < vc.end(); it4++)
                        {
                            if (x == *it4)
                            {
                                xfound = true;
                                break;
                            }
                        }
                        if (!xfound)
                        {
                            everysumfound = false;
                            goto end;
                        }
                    }
                }
            }
        end:
            if (!everysumfound)
            {
                sum3 = false;
            }
        }
        (sum3) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}