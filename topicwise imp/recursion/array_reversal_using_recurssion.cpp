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

void arrayReverse(int i, int arr[], int n){
     if(i>=n/2){
        return;
     }
     swap(arr[i], arr[n-i-1]);
     arrayReverse(i+1,arr,n);
}


int main(void)
{
    int a[] = {5,3,4,11,67,2};
    cout<<"Before Reversing : ";
    printArray(a, 6);

    arrayReverse(0,a,6);

    cout<<"After Reversing : ";
    printArray(a,6);
}