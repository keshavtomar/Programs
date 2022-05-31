#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[10000];
    int total = n * (n + 1) / 2;
    int count = 2;
    a[0] = 0;
    a[1] = 1;
    int newer = 1;
    for (int i = 0; i < total; i++)
    {
        if (i == 0)
        {
            cout << a[i] << endl;
        }
        else if (i == 1)
        {
            cout << a[i] << " ";
        }
        else
        {
            a[i] = a[i - 1] + a[i - 2];
            cout << a[i];
            newer++;
            if (newer == count)
            {
                newer = 0;
                count++;
                cout<<endl;
            }
            else
            {
                cout << " ";
            }
        }
    }
}