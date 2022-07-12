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
        FOR(i, 0, n)
        {
            cin >> k;
            vc.push_back(k);
        }
        sort(vc.begin(), vc.end());
        int min = INT32_MAX;
        int min_index = 0;
        FOR(i, 0, n - 1)
        {
            if ((vc[i + 1] - vc[i]) < min)
            {
                min = vc[i + 1] - vc[i];
                min_index = i;
            }
        }
        swap(vc[min_index], vc[0]);
        swap(vc[min_index + 1], vc[n - 1]);

        sort(vc.begin() + 1, vc.end() - 1);

        cout << vc[0] << " ";
        for (auto i = vc.begin() + 1; i < vc.end() - 1; i++)
        {
            if (*i >= vc[0])
            {
                cout << *i << " ";
            }
        }
        for (auto i = vc.begin() + 1; i < vc.end() - 1; i++)
        {
            if (*i < vc[0])
            {
                cout << *i << " ";
            }
        }
        cout << vc.back() << endl;
    }
    return 0;
}