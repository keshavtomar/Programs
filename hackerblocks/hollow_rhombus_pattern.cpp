#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int st_spaces = n - 1;
    int en_spaces = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < st_spaces; k++)
        {
            cout << " ";
        }
        if (i == 1 || i == n)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        for (int k = 0; k < en_spaces; k++)
        {
            cout << " ";
        }
        st_spaces--;
        en_spaces++;
        cout << endl;
    }
}