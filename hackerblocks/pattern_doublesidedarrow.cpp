#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int mid = n / 2 + 1;
    int spaces = (mid - 1) * 2;
    int mid_spaces = -1;
    int value = 1;
    bool reverse = 0;
    for (int i = 1; i <= mid; i++)
    {
        for (int s = 0; s < spaces; s++)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
            if (j != 1)
            {
                cout << " ";
            }
        }
        for (int s = 0; s < mid_spaces; s++)
        {
            cout << "  ";
        }
        cout<<" ";
        for (int j = 1; j <= i; j++)
        {
            if (i != 1)
            {
                cout << j;
                if (j != i)
                {
                    cout << " ";
                }
            }
        }
        for (int s = 0; s < spaces; s++)
        {
            cout << "  ";
        }

        spaces -= 2;
        mid_spaces += 2;
        cout << endl;
    }
    spaces += 4;
    mid_spaces -= 4;
    for (int i = mid - 1; i > 0; i--)
    {
        for (int s = 0; s < spaces; s++)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
                        if (j != 1)
            {
                cout << " ";
            }
        }
        for (int s = 0; s < mid_spaces; s++)
        {
            cout << "  ";
        }
        cout<<" ";
        for (int j = 1; j <= i; j++)
        {
            if (i != 1)
            {
                cout << j;
                if (j != i)
                {
                    cout << " ";
                }
            }
        }
        for (int s = 0; s < spaces; s++)
        {
            cout << "  ";
        }
        spaces += 2;
        mid_spaces -= 2;
        cout << endl;
    }
}