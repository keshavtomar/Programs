#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    int base10 = 0;
    int count = 0;
    while (n)
    {
        int l = n % 10;
        base10 += l * pow(x, count);
        count++;
        n /= 10;
    }
    // cout << base10;

    int a[100000];
    int cn = 0;
    while (base10)
    {
        cn++;
        a[cn] = base10 % y;
        base10 /= y;
    }

    for (int i = cn; i > 0; i--)
    {
        if (a[i] < 10)
        {
            cout << a[i];
        }
        else
        {
            cout << (char)a[i] + 'a';
        }
    }
}
