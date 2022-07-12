#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cmath>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    char arr[27][27];

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[n + i][n + j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = arr[n + i][n + j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][n + j] = arr[n + i][n + j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][2 * n + j] = arr[n + i][n + j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[n + i][j] = arr[n + i][n + j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[n + i][2 * n + j] = arr[n + i][n + j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[2 * n + i][j] = arr[n + i][n + j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[2 * n + i][n + j] = arr[n + i][n + j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[2 * n + i][2 * n + j] = arr[n + i][n + j];
        }
    }

    for (int i = 0; i < 3 * n; i++)
    {
        for (int j = 0; j < 3 * n; j++)
        {
            string st;
            
        }
        cout << endl;
    }
}