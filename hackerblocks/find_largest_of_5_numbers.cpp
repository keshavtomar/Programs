#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;
    int max =a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    if(e>max){
        max=e;
    }
    cout<<max;
}