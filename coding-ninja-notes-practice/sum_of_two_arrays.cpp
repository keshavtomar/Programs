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

void sumOfTwoArrays(int *a1, int i, int *a2, int j, int *c)
{
    // Write your code here
    int k = max(i, j);
    int carry = 0;

    while (i >= 0 && j >= 0)
    {

        int sum = a1[i - 1] + a2[j - 1] + carry;

        if (sum > 9)
        {
            c[k] = sum % 10;
            carry = 1;
        }
        else
        {
            c[k] = sum;
            carry = 0;
        }
        i--;
        j--;
        k--;
    }

    while (i >= 0)
    {
        int sum = a1[i - 1] + carry;

        if (sum > 9)
        {
            c[k] = sum % 10;
            carry = 1;
        }
        else
        {
            c[k] = sum;
            carry = 0;
        }
        i--;
        k--;
    }

    while (j >= 0)
    {
        int sum = a2[j - 1] + carry;

        if (sum > 9)
        {
            c[k] = sum % 10;
            carry = 1;
        }
        else
        {
            c[k] = sum;
            carry = 0;
        }
        j--;
        k--;
    }
    c[k] = carry;
}

int main(void)
{
    int a[] = {9, 9, 9, 4, 5, 6, 7};
    int b[] = {9, 2, 3, 8};

    int c[1000] = {0};

    sumOfTwoArrays(a, 7, b, 4, c);
    printArray(c, 8);
}