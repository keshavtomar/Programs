#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[100000];
    int b[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}