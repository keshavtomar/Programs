#include <iostream>

using namespace std;

/*
Given an array of length N and an integer x,
 you need to find and return the last index of integer x present in the array, using Recursion.
 Return -1 if it is not present in the array.
*/

int lastIndex(int input[], int size, int x)
{

    if (size == 0)
    {
        return -1;
    }

    int ans = lastIndex(input + 1, size - 1, x);

    if (input[0] == x && ans == -1)
    {
        return 0;
    }
    else if (ans == -1)
    {
        return ans;
    }
    else
    {
        return ans + 1;
    }
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    cout << lastIndex(input, n, x) << endl;
}
