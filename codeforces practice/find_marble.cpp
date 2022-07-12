#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[100001];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int next = x;
    bool found = 0;
    while (a[next] != x)
    {
        count++;
        if (a[next] == y)
        {
            found = true;
            break;
        }
        next = a[next];
    }
    if (found)
    {
        cout << count << endl;
    }
    else if (x == y)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}