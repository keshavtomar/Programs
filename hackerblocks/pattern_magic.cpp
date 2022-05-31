#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int size = 2 * n - 1;
    int middle = size / 2 + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (j > middle - i && j < middle + i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 1; j <= size; j++)
        {
            if (j > middle - i + 1 && j < middle + i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}