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
        bool is_even = 0;
        if (k % 2 == 0)
        {
            is_even = 1;
        }
        int lv[20000];
        for (int i = 0; i < n; i++)
        {
            lv[i] = 0;
        }
        int upto = 0;
        if (is_even)
        {
            for (int i = 0; i < n-1; i++) // 0 ko pakadna h
            {
                if (st[i] == '0' && k != 0)
                {
                    st[i] = '1';
                    lv[i] = 1;
                    k--;
                }
                else if (k == 0)
                {
                    break;
                }
            }
            lv[n - 1] = k;
            while (k--)
            {
                if (st[n - 1] == 0)
                {
                    st[n - 1] = '1';
                }
                else
                {
                    st[n - 1] = '0';
                }
            }
        }

        else
        {
            for (int i = 0; i < n-1; i++)
            {
                if (st[i] == '1' && k > 0)
                {
                    k--;
                    lv[i] = 1;
                }
                else if (k < 0)
                {
                    st[n-1]='1';
                    if (st[i] == '0')
                    {
                        st[i] = '1';
                    }
                    else
                    {
                        st[i] = '0';
                    }
                }
                else
                {
                    st[i] == '1';
                }
            }
            while (k--)
            {
                if (st[n - 1] == '0')
                {
                    st[n - 1] = '1';
                }
                else
                {
                    st[n - 1] = '0';
                }
            }
        }

        cout << st << endl;
        for (int i = 0; i < n; i++)
        {
            cout << lv[i];
        }
        cout << endl;
    }
}