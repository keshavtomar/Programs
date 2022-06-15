#include <iostream>
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
        string st;
        cin >> st;
        if (n < 2 * k + 1)
        {
            cout << "NO" << endl;
            continue;
        }
        int found = 0;
        for (int i = 0; i < k; i++)
        {
            if (st[i] != st[n - 1 - i])
            {
                cout << "NO" << endl;
                found = 1;
                break;
            }
        }
        if (found == 0)
            cout << "YES" << endl;
    }
}