#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    long long n, m = 0;
    cin >> n;
    int count = 0;
    if (n == 0)
    {
        m = 5;
    }
    else
    {
        while (n)
        {
            if (n % 10 == 0)
            {
                m += 5 * pow(10, count);
            }
            else
            {
                m += (n % 10) * pow(10, count);
            }
            n /= 10;
            count++;
        }
    }

    cout << m << endl;
}
