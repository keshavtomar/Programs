#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;

    int a[200000];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);

    int count=1; 

    for(int i=1; i<n; i++){
        if((a[i]^a[i-1])!=0){
           count++;
        }
    }

    cout<<count<<endl;
}