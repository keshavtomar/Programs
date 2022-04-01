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
        int m = n;
        int c_zero = 0, c_one = 0, c_two = 0;
        int a;
        while (m--)
        {
            cin >> a;
            if (a % 3 == 0)
            {
                c_zero++;
            }
            else if (a % 3 == 1)
            {
                c_one++;
            }
            else if (a % 3 == 2)
            {
                c_two++;
            }
        }

        // cout << c_zero << " " << c_one << " " << c_two << " " << endl;
        int steps = 0;
        n = n / 3; // for each
        if (c_zero > n)
        {
            c_one = c_one + (c_zero - n);
            steps = steps + (c_zero - n);
            c_zero = n;
        }
        if (c_one > n)
        {
            c_two = c_two + (c_one - n);
            steps = steps + (c_one - n);
            c_one = n;
        }
        if (c_two > n)
        {
            c_zero = c_zero + (c_two - n);
            steps = steps + (c_two - n);
            c_two = n;
        }
        if (c_zero > n)
        {
            c_one = c_one + (c_zero - n);
            steps = steps + (c_zero - n);
            c_zero = n;
        }
        if (c_one > n)
        {
            c_two = c_two + (c_one - n);
            steps = steps + (c_one - n);
            c_one = n;
        }
        cout << steps << endl;
    }
}