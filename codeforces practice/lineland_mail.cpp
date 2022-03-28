#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;                             //for the 1st term

    for(int i=1; i<n-1; i++){
        cout<<min((a[i]-a[i-1]),(a[i+1]-a[i]))<<" ";
        cout<<max((a[i]-a[0]),(a[n-1]-a[i]))<<endl;
    }

    cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
    
}