#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    vector<bool> vc(200001, 0);
    while (t--)
    {
        int n;
        cin >> n;
        vc[n] = 1;
    }
    for (int i=1; i <= 200000; i++)
    {
        if (!vc[i])
        {
            cout << i;
            break;
        }
    }
}