#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int columns = n * 2 - 1;
    int middle = columns / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        bool reverse = 0;
        int count = 1;
        for (int j = 1; j <= columns; j++)
        {
            if (j <= i || j > columns - i)
            {
                cout << count;
            }
            else
            {
                cout << " ";
            }
            if (j < middle)
            {
                count++;
            }
            else
            {
                count--;
            }
            if (j != columns)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}