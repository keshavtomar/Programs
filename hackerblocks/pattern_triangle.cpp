#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int columns = 2 * n - 1;
    int middle = columns / 2 + 1;
    for (int i = 0; i < n; i++)
    {
        int inc = 0;
        bool reverse = 0;
        for (int j = 1; j <= columns; j++)
        {
            if (j >= middle)
            {
                reverse = 1;
            }
            if (j >= middle - i && j <= middle + i)
            {
                cout << i + inc + 1;
                if (reverse == 0)
                {
                    inc++;
                }
                else
                {
                    inc--;
                }
            }
            else
            {
                cout << " ";
            }
            if (j != columns)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}