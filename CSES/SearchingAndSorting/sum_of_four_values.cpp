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
    int n, target;
    cin >> n >> target;
    vector<pair<int, int>> vc(n);
    FOR(i, 0, n)
    {
        cin >> vc[i].first;
        vc[i].second = i + 1;
    }

    sort(vc.begin(), vc.end());

    FOR(i, 0, n)
    {
        FOR(j, i + 1, n)
        {
            int low = j + 1;
            int high = n - 1;

            while (low < high)
            {
                int a = vc[i].first, b = vc[j].first, c = vc[low].first, d = vc[high].first;

                if (a + b + c + d == target)
                {
                    cout << vc[i].second << " " << vc[j].second << " " << vc[low].second << " " << vc[high].second;
                    return 0;
                }
                else if (a + b + c + d > target)
                {
                    high--;
                }
                else
                {
                    low++;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}