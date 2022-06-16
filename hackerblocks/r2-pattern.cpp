#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    int i;
    if ((n & 1) == 0)
    {
        i = n - 1;
    }
    else
    {
        i = n;
    }
    int count = 1;
    while (count <= n)
    {
        cout << abs(i) << endl;

        if (i == 1)
        {
            i -= 3;
        }
        else
        {
            i -= 2;
        }
        if (count != n)
        {
            cout << endl;
        }
        count++;
    }
}