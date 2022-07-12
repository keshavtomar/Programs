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
        while (n--)
        {
            cin >> k;
            vc.push_back(-k);
        }

        sort(vc.begin(), vc.end());

        for (auto it : vc)
        {
            cout << -it << " ";
        }
        cout << endl;
    }
    return 0;
}