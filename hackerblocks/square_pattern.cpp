#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int spaces = n - i;
        int j = 1;
        int val = i;
        while (j <= n)
        {
            cout << val << " ";
            if (val <= j)
            {
                val++;
            }
            j++;
        }
        cout << endl;
        i++;
    }
}