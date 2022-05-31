#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int spaces = n-1;
    n++;
    int a[102][102] = {0};
    for (int i = 1; i < n; i++)
    {
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
            cout << a[i][j];
            if (j != i - 1)
            {
                cout << " ";
            }
        }
        spaces--;
        cout << endl;
    }
}