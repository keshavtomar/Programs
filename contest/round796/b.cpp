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
        cin>>n;
        bool odd = false;
        int no_of_even = 0;
        int min_steps = 2147483646;
        int x;
        while (n--)
        {
            int cur_steps = 0;
            cin >> x;
            if (x % 2 == 1)
            {
                odd = true;
            }
            else
            {
                no_of_even++;
                while (x % 2 == 0)
                {
                    cur_steps++;
                    x /= 2;
                }
                if (cur_steps < min_steps)
                {
                    min_steps = cur_steps;
                }
            }
        }
        if (odd)
        {
            cout << no_of_even << endl;
        }
        else
        {
            cout << min_steps + no_of_even - 1 << endl;
        }
    }
}