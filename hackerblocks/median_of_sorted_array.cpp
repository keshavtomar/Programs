#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[1000], b[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int x = 0;
    int y = 0;
    int count = 1;
    while (count != n)
    {
        if (a[x] < b[y])
        {
            x++;
        }
        else
        {
            y++;
        }
        count++;
    }
    cout<<min(a[x],b[y]);
}