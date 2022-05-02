#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    char a[100][100];
    char b[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            (i + j) % 2 == 0 ? b[i][j] = 'B' : b[i][j] = 'W';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] == '.' ? cout << b[i][j] : cout << "-";
        }
        cout << endl;
    }
}