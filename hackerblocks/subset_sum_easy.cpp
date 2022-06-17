#include <iostream>
#include <algorithm>

using namespace std;

bool anytwooronesumzero(int *arr, int n) // this will return true if any single element is 0 or sum of any two elements is zero
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

bool anythreesumzero(int *arr, int n)
{
    int count = 0;
    if (n < 3)
    {
        return 0;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

bool allsumzero(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        bool possible = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        if (anytwooronesumzero(a, n) || anythreesumzero(a, n) || allsumzero(a, n))
        {
            possible = 1;
        }

        if (possible && n > 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}