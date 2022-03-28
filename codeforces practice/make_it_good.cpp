#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        int a[200001];
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        int position=1;
        for(int j=n-1 ;j>1; j--){
               if(a[j]<a[j+1]&&a[j]<a[j-1]){
                   position=j;
                       break;
               }
               else if(a[j]<a[j-1]&&a[j]==a[j+1]){
                   int found=0;
                       for(int k=j+1; k<n; k++){
                           if(a[k]<a[k+1]){
                               found=1;
                               break;
                           }
                           else if(a[k]>a[k+1]){
                               found=0;
                               break;
                           }
                       }
                       if(found==1){
                           position=j;
                           break;
                       }
               }
        }
        cout<<position-1<<endl;
    }
}