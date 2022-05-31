// Take N (number of rows), print the following pattern (for N = 4).

//                          1
//                        2 3 2
//                      3 4 5 4 3
//                    4 5 6 7 6 5 4
//                      3 4 5 4 3
//                        2 3 2
//                          1

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int x;
    cin >> x;
    int n=x*2-1;
    int middle = n / 2 + 1;
    for (int i = 0; i <= n / 2; i++)
    {
        int inc = 0;
        for (int j = 1; j <= n; j++)
        {
            if (j >= middle - i && j <= middle + i)
            {
                cout << i + 1 + inc;
                if (j >= middle)
                {
                    inc--;
                }
                else
                {
                    inc++;
                }
            }
            else
            {
                cout << " ";
            }
            if (j != n)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    int reset = 1;
    bool used = 0;
    for (int i = n / 2; i > 0; i--)
    {
        int inc = 0;
        for (int j = 1; j <= n; j++)
        {
            if (j > middle - i && j < middle + i)
            {
                cout << i + inc;
                if (j >= middle)
                {
                    inc--;
                }
                else
                {
                    inc++;
                }
            }
            else
            {
                cout << " ";
            }
            if (j != n)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}