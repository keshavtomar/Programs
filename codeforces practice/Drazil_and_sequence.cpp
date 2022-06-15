#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    char c[15];
    char a[61];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        switch (c[i])
        {
        case '4':
            a[j] = '3';
            a[j + 1] = '2';
            a[j + 2] = '2';
            j = j + 3;
            break;
        case '6':
            a[j] = '3';
            a[j + 1] = '5';
            j = j + 2;
            break;
        case '8':
            a[j] = '7';
            a[j + 1] = '2';
            a[j + 2] = '2';
            a[j + 3] = '2';
            j = j + 4;
            break;
        case '9':
            a[j] = '7';
            a[j + 1] = '3';
            a[j + 2] = '3';
            a[j + 3] = '2';
            j = j + 4;
            break;
        default:
            a[j] = c[i];
            j = j + 1;
            break;
        }
    }
    sort(a, a + j);
    for (int i = j - 1; i >= 0; i--)
    {
        if (a[i] != '0' && a[i] != '1')
            cout << a[i];
    }
}

/*
2! = 2
3! = 6
4! -> 3! * 2!* 2!  = 24
5! = 120
6! = 3! * 5! = 720
7! = 5040
8! = 7! * 2! * 2! * 2!* = 40320
9! = 362880
only 4, 6 and 8 will change
*/
