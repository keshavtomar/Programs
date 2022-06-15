#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char a[100][100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        int found = 0;

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                // a[i][j]

                if (a[i][j] == '0')
                {
                    continue;
                }
                if (i - 1 >= 0 && j + 1 < m)
                {
                    if (a[i - 1][j + 1] == '0')
                    {
                        if (a[i][j + 1] == '1' && a[i - 1][j] == '1')
                        {
                            found = 1;
                            break;
                        }
                    }
                }
                if (i + 1 < n && j + 1 < m)
                {
                    if (a[i + 1][j + 1] == '0')
                    {
                        if (a[i][j + 1] == '1' && a[i + 1][j] == '1')
                        {
                            found = 1;
                            break;
                        }
                    }
                }
                if (i + 1 < n && j - 1 >= 0)
                {
                    if (a[i + 1][j - 1] == '0')
                    {
                        if (a[i + 1][j] == '1' && a[i][j - 1] == '1')
                        {
                            found = 1;
                            break;
                        }
                    }
                }

                if (i - 1 >= 0 && j - 1 >= 0)
                {
                    if (a[i - 1][j - 1] == '0')
                    {
                        if (a[i][j - 1] == '1' && a[i - 1][j] == '1')
                        {
                            found = 1;
                            break;
                        }
                    }
                }
            }
        }
        if (found == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}