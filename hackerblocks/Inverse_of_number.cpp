#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int x=0;
    int count=1;
    while(n){
      int digit=(n%10)-1;  
      x += count*pow(10,digit);
      n/=10;
      count++;
    }
    cout<<x;
}