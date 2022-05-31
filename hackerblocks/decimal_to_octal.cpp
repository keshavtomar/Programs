#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int x=0;
    int i=0;
    while(n){
        x+=(n%8)*pow(10,i);
        i++;
        n/=8;
    }
    cout<<x;
}