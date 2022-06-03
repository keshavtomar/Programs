#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int o=0, e=0;
    for(int i=1; n!=0; i++){
        if(i%2==1){
            o+=n%10;
        }
        else{
            e+=n%10;
        }
        n/=10;
    }
    cout<<o<<endl<<e<<endl;
}