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

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mpp; //{endingletter,noofsuchelements}

        int k;
        FOR(i, 0, n)
        {
            cin >> k;
            mpp[k % 10]++;
        }

        int count = 0;
        int arr[100][3];
        bool possible = false;
        FOR(i, 0, 10)
        {
            FOR(j, 0, 10)
            {
                FOR(k, 0, 10)
                {
                    if (((i + j + k) % 10 == 3))
                    {
                        if (mpp[i])
                        {
                            mpp[i]--;
                            if (mpp[j])
                            {
                                mpp[j]--;
                                if (mpp[k])
                                {
                                    possible = true;
                                    goto end;
                                }
                                mpp[j]++;
                            }
                            mpp[i]++;
                        }
                    }
                }
            }
        }
    end:

        if (!possible)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}