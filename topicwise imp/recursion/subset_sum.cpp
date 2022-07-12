#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

// Given a list arr of N integers, print sums of all subsets in it.

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '	';
    }
    cout << endl;
}

void subsetSum(int a[], int n, int sum, int i=0)
{
    if (i == n)
    {
        cout<<sum<<" ";
        return;
    }

    subsetSum(a,n,sum,i+1);

    subsetSum(a,n,sum+a[i],i+1);

}

int main(void)
{
    int a[] = {-1, 2, 4, 11};
    subsetSum(a, 4, 0);
    // printArray(output, 16);
}