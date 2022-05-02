#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        int a[200000];
        int sum = 0;
        int len = st.length();
        for (int i = 0; i < len; i++)
        {
            a[i] = st[i] - 96;
        }
        if (len == 1)
        {
            cout << "Bob ";
        }
        else
        {
            cout << "Alice ";
        }

        if (len % 2 == 0)
        {
            for (int i = 0; i < len; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }
        else if (len == 1)
        {
            cout << a[0] << endl;
        }
        else
        {
            if (st[0] > st[len - 1])
            {
                for (int i = 0; i < len - 1; i++)
                {
                    sum += a[i];
                }
                cout << sum - a[len - 1] << endl;
            }
            else
            {
                for (int i = 1; i < len; i++)
                {
                    sum += a[i];
                }
                cout << sum - a[0] << endl;
            }
        }
    }
}