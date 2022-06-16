#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    int A[200000], k[200000];
    for (int i = 0; i < q; i++)
    {
        cin >> A[i] >> k[i];
    }

    for (int i = 0; i < q; i++)
    {
        int count = 0;
        bool possible = false;
        for (int j = 0; j < n; j++)
        {
            if (A[i] % a[j] == 0)
            {
                count++;
            }
            if (count >= k[i])
            {
                possible = true;
                break;
            }
        }
        if (possible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}