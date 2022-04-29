#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[200000];
        int l=-1, r=-1;
        for(int i=0; i<n; i++){
           cin>>a[i];
           if(a[i]==a[i-1]){
               r=i-1;
           }
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]==a[i+1]){
                l=i;
                break;
            }
        }
        if(l==r||r==-1){
            cout<<"0"<<endl;
        }
        else{
            cout<<max(1,r-l-1)<<endl;
        }
        
    }
}