#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int middle = n / 2 + 1;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= middle - i && j <= middle + i)
            {
                cout << "*";
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
        for (int j = 1; j <= n; j++)
        {
            if (j > middle - i && j < middle + i)
            {
                cout << "*";
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
        cout<<endl;
    }
}