#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int a[200000];
    int x=0;
    for(int i=0; i>=0; i++){
       cin>>a[i];
       x+=a[i];
       if(x<0){
           break;
       }
       else{
           cout<<a[i]<<endl;
       }
    }
}