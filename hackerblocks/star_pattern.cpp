#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int spaces = n - i;
        while (spaces--)
        {
            cout << "  ";
        }
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}