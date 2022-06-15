#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<"0"<<endl;
    }
    else{
        int x=n/2;
        cout<<(int)pow(2,x)<<endl;
    }
}