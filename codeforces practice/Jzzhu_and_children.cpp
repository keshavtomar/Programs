#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    int a[101];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int last;
    int count = 0;
    bool end = 1;
    do
    {
        end = 1;
        count++;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > 0)
            {
                end = 0;
                a[i] -= m;
                last = i;
            }
        }
    } while (end == 0);
    // cout << "no of rounds are " << count - 1 << endl;
    cout << last << endl;
}