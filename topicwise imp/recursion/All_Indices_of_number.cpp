#include <iostream>

using namespace std;

/*
Given an array of length N and an integer x,
 you need to find all the indexes where x is present in the input array.
 Save all the indexes in an array (in increasing order).

 sample input->
 5
 9 8 10 8 8
 8

 sample output->
 1 3 4
*/

void updateOutput(int output[], int s)
{
    for (int i = 0; i < s; i++)
    {
        output[i]++;
    }
}

void insertZero(int output[], int s)
{
    for (int i = s; i > 0; i--)
    {
        output[i] = output[i - 1];
    }
    output[0] = 0;
}

int allIndexes(int input[], int size, int x, int output[])
{

    if (size == 0)
    {
        return 0;
    }

    int ans = allIndexes(input + 1, size - 1, x, output);

    updateOutput(output, ans); // size of output is ans at every movement

    if (input[0] == x)
    {
        insertZero(output, ans);
        return ans + 1;
    }
    else
    {
        return ans;
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

    int *output = new int[n];

    int size = allIndexes(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    delete[] input;

    delete[] output;
}
