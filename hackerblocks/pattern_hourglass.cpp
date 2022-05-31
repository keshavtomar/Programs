#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int size = 2 * n + 1;
    int middle = size / 2 + 1;
    for (int i = 1; i <= n + 1; i++)
    {
        int count = n;
        for (int j = 1; j <= size; j++)
        {
            if (j >= i && j <= size - i + 1)
            {
                cout << count;
            }
            else
            {
                cout << " ";
            }
            if (j < middle)
            {
                count--;
            }
            else
            {
                count++;
            }
            if (j != size)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        int count = n;
        for (int j = 1; j <= size; j++)
        {
            if (j >= i && j < size - i + 2)
            {
                cout << count;
            }
            else
            {
                cout << " ";
            }
            if (j < middle)
            {
                count--;
            }
            else
            {
                count++;
            }
            if (j != size)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}