#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    long long int x;
    cin >> x;

    long long int ans = 0;
    int count = 0;

    int n = to_string(x).length();

    while (x)
    {
        bool last = false;
        if (count == (n - 1))
        {
            last = true;
        }
        int t = x % 10;
        if (last)
        {
            if (t > 4 && t < 9)
            {
                int a = (9 - t);
                ans += a * pow(10, count);
            }
            else
            {
                int b = t;
                ans += b * pow(10, count);
            }
        }
        else if (t > 4)
        {
            int a = (9 - t);
            ans += a * pow(10, count);
        }
        else
        {
            int b = t;
            ans += b * pow(10, count);
        }
        count++;
        x /= 10;
    }
    cout << ans << endl;
}