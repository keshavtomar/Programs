#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p[100], l[100];
        bool sequence = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i] >> l[i];
            if (p[i] < l[i])
            {
                sequence = 0;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (p[i] < p[i - 1] || l[i] < l[i - 1])
            {
                sequence = 0;
            }
            else if (p[i] - p[i - 1] < l[i] - l[i - 1])
            {
                sequence = 0;
            }
        }
        if (sequence == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}