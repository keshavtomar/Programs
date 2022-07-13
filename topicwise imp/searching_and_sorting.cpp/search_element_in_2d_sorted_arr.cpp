// a 2d sorted array is in which elements are sorted row-wise as well as column-wies
/*
use this 2d array as a testcase  ->
10 20 30 40
15 25 35 45
27 29 37 48
32 33 39 50
*/

// if we search linearly, the TC will be O(n^2);
// but the approach is to start from top right corner, if matches return else if curr is greator-> move left
// if curr is smaller->move down

// worst case time is O(n+m), so TC is O(n+m)

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

bool searchIn2d(int arr[][100], int n, int m, int &i, int &j, int x)
{
    int currRow = 0;
    int currCol = m;
    while (currRow <= n && currCol >= 0)
    {
        if (arr[currRow][currCol] == x)
        {
            i = currRow;
            j = currCol;
            return true;
        }
        else if (arr[currRow][currCol] > x)
        {
            currCol--;
        }
        else
        {
            currRow++;
        }
    }

    return false;
}

int main()
{
    int n, m; // n-> no of rows
    cin >> n >> m;
    int arr[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x;
    cout << "The element to search is : ";
    cin >> x;

    int i, j;

    bool found = searchIn2d(arr, n - 1, m - 1, i, j, x);
    if (found)
    {
        cout << "found at " << i << "," << j << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    return 0;
}