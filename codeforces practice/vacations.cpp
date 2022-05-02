#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[102];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 3)
        {
            if (a[i - 1] == 1)
            {
                a[i] = 2;
            }
            else if (a[i - 1] == 2)
            {
                a[i] = 1;
            }
        }

        if (a[i] == 0)
        {
            continue;
        }
        else if (a[i] == 1 && a[i - 1] == 1)
        {
            a[i] = 0;
        }
        else if (a[i] == 2 && a[i - 1] == 2)
        {
            a[i] = 0;
        }
    }
    for (int i = n; i > 0; i--)
    {
        if (a[i] == 3)
        {
            a[i + 1] == 1 ? a[i] = 2 : a[i] = 1;
        }
    }


    int count = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            count++;
        }
    }

    cout << count << endl;
}
