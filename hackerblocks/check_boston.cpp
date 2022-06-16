#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int digitsum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    int n;
    cin >> n;
    int x = n;

    int a[35];
    int count = 0;
    while (n % 2 == 0)
    {
        a[count] = 2;
        n /= 2;
        // cout << a[count] << endl;
        count++;
    }

    int i = 3;
    for (int i = 3; i <= sqrt(n) + 1; i = i + 2)
    {
        while (n % i == 0)
        {
            a[count] = i;
            n /= i;
            // cout << a[count] << endl;

            count++;
        }
    }
    if (n > 2)
    {
        a[count] = n;
        // cout << a[count] << endl;
        count++;
    }

    int factorsum = 0;
    for (int i = 0; i < count; i++)
    {
        // cout<<a[i]<<" ";
        factorsum += a[i];
    }

    // cout << factorsum << " " << count << endl;

    if (x == 2)
    {
        cout << "0" << endl;
    }
    else if (factorsum == digitsum(x))
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}