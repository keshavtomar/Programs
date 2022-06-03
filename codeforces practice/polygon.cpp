#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char p[50][50];
        bool training_happened = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> p[i][j];
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (p[i][j] == '1')
                {
                    if (p[i + 1][j] == '0' && p[i][j + 1] == '0')
                    {
                        training_happened = 0;
                        goto end;
                    }
                }
            }
        }
    end:
        if (training_happened)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}