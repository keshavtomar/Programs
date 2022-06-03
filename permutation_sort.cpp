#include <iostream>
#include <algorithm>

using namespace std;

int arraySortedOrNot(int arr[], int n)
{
    // Array has one or no element or the
    // rest are already checked and approved.
    if (n == 1 || n == 0)
        return 1;
 
    // Unsorted pair found (Equal values allowed)
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    // Last pair was sorted
    // Keep on checking
    return arraySortedOrNot(arr, n - 1);
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       int a[50];
       for(int i=0; i<n; i++){
         cin>>a[i];
       }
       if(arraySortedOrNot(a,n)){
           cout<<"0"<<endl;
       }
       else if(a[0]==1||a[n-1]==n){
           cout<<"1"<<endl;
       }
       else if(a[0]==n&&a[n-1]==1){
           cout<<"3"<<endl;
       }
       else{
           cout<<"2"<<endl;
       }
    }
}