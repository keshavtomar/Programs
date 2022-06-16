
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

bool isfirstlarge(int a, int b)
{
    // x is the size of a and y is the size of b

    
    int x = to_string(a).length();
    int y = to_string(b).length();

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
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
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
            for (int j = 0; j < n - i - 1; j++)
            {
                if (!isfirstlarge(a[j], a[j + 1]))
                {
                    int flag = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = flag;
                }
            }
        }

        // cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}

/*
2
4
54 546 548 60
5
57 3 203 1 67
*/
