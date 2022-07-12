#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[200000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (k == 1)
        {
            cout << (n - 1) / 2 << endl;
        }
        else
        {
            int too_tall = 0;
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i] > (a[i - 1] + a[i + 1]))
                {
                    too_tall++;
                }
            }
            cout << too_tall << endl;
        }
    }
}