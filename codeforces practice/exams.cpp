#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    int a[5000], b[5000];
    cin >> n;
    int ga = 0, gb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] > ga)
        {
            ga = a[i];
        }
        if (b[i] > gb)
        {
            gb = b[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                int flag1 = b[j];
                b[j] = b[j + 1];
                b[j + 1] = flag1;

                int flag2 = a[j];
                a[j] = a[j + 1];
                a[j + 1] = flag2;

            }
        }
    }

    int flag = 0;
    // cout << "after sorting" << endl;

    // for (int i = 0; i < n; i++)
    // {
    //         cout<<a[i]<<" "<<b[i]<<endl;
    // }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1] && b[i] != b[i + 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << ga;
    }
    else
    {
        cout << gb;
    }
}