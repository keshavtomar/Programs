#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int i = 1;
    int st_spaces = -1;
    int mid_spaces = (n / 2 - 1) * 2 + 1;
    int val = 0;
    while (i <= n)
    {
        if (i < n / 2 + 1)
        {
            val++;
            st_spaces++;
            int j = 1;
            while (j <= st_spaces)
            {
                cout << " ";
                j++;
            }
            cout << val;
            j = 1;
            while (j <= mid_spaces)
            {
                cout << " ";
                j++;
            }
            mid_spaces = mid_spaces - 2;
            cout << val;
        }
        else if (i == n / 2 + 1)
        {
            val++;
            st_spaces++;
            int j = 1;
            while (j <= st_spaces)
            {
                cout << " ";
                j++;
            }
            cout << val;
        }
        else
        {
            val--;
            st_spaces--;
            int j = 1;
            while (j <= st_spaces)
            {
                cout << " ";
                j++;
            }
            cout << val;
            j = 1;
            mid_spaces = mid_spaces + 2;
            while (j <= mid_spaces)
            {
                cout << " ";
                j++;
            }
            cout << val;
        }

        i++;
        cout << endl;
    }
}