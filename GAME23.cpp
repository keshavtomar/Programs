#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int a, b;
    cin>>a>>b; 
    int n=0;
    bool undivisible = 0;
    while(b%(a*2)==0){
        a *=2;
        n++;
    }
    while(b!=a){
        a*=3;
        n++;
        if(a>b){
            cout<<"-1"<<endl;
            undivisible = 1;
            break;
        }
    }
    if(undivisible==0){
    cout<<n<<endl;
    }
}