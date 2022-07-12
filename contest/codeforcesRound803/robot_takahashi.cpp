#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '	';
    }
    cout << endl;
}

int maxTruth(int child[], int x, int man[], int y)
{


    return maxCount;
}

int main(void)
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    int child[200000], man[200000];
    int a;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '0')
        {
            cin >> child[x];
            x++;
        }
        else if (st[i] == '1')
        {
            cin >> man[y];
            y++;
        }
    }
    sort(child, child + x);
    sort(man, man + y);
    // printArray(child, x);
    // printArray(man, y);

    int ans = maxTruth(child, x, man, y);

    cout << ans << endl;
}