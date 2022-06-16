#include <iostream>
#include <algorithm>

using namespace std;

bool anytwooronesumzero(double *arr, int n) // this will return true if any single element is 0 or sum of any two elements is zero
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

bool anythreesumzero(double *arr, int n)
{
    if (n < 3)
    {
        return 0;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; j < n; j++)
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

bool allsumzero(double *arr, int n)
{
    double sum = 0;
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
        double a[n];
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