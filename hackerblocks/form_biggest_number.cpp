
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

bool isfirstlarge(int a, int b)
{
    int x = 0, y = 0; // x is the size of a and y is the size of b
    int dummy1 = a;
    int dummy2 = b;
    while (dummy1)
    {
        x++;
        dummy1 /= 10;
    }
    while (dummy2)
    {
        y++;
        dummy2 /= 10;
    }

    while (x && y)
    {
        int s = (pow(10, (x - 1)));
        s = a / s;
        int t = pow(10, (y - 1));
        t = b / t;
        if (s == t)
        {
            x--;
            y--;
        }
        else if (s > t)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (a > b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int t;
    cin >> t;

        int a[100];
        int n;
        cin >> n;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                if (!isfirstlarge(a[j], a[j + 1]))
                {
                    int flag = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = flag;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
           cout<<a[i];
        }
        cout<<endl;
}