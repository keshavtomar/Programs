#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    bool start_inc=0;
    int a[1000];
    bool possible=1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
       if(a[i]>a[i-1]){
           start_inc=1;
       }
       if(a[i]<a[i-1]&&start_inc==1){
           possible=0;
           break;
       }
       else if(a[i]==a[i-1]){
           possible=0;
           break;
       }
    }
    if(possible==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}