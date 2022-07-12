#include <iostream>
#include <climits>
#include <algorithm>

#define FOR(a, b, c) for (int a = b; a <= c; a++)

using namespace std;

int ct=0;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '	';
    }
    cout << endl;
}

int Partition(int a[], int si, int ei)
{
    int pivot = a[si];
    int cnt = 0;
    FOR(i, si, ei)
    {
        if (a[i] < pivot)
        {
            cnt++;
        }
    }

    swap(a[si], a[si + cnt]);

    int m = si;
    int n = ei;
    while (m < si + cnt && n > si + cnt)
    {
        if (a[m] >= pivot && a[n] < pivot)
        {
            swap(a[m], a[n]);
            m++;
            n--;
        }
        else if (a[m] < pivot)
        {
            m++;
        }
        else if (a[n] >= pivot)
        {
            n--;
        }
    }
    return si + cnt;
}

void QuickSort(int a[], int si, int ei)
{
    if (ei <= si)
    {
        return;
    }

    int pivotIndex = Partition(a, si, ei);

    // cout<<ct++<<endl;

    QuickSort(a, si, pivotIndex - 1);
    QuickSort(a, pivotIndex + 1, ei);
}

int main(void)
{
    int n;
    cin>>n;
    int a[100000];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    QuickSort(a, 0, n-1);

    cout << "After Quick sorting : ";
    printArray(a, n);
}