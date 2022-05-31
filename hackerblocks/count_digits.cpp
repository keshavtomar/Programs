#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n;
  int x;
  cin>>n>>x;
  int count =0;
  while(n){
      if(n%10==x){
          count++;
      }
      n/=10;
  }
  cout<<count<<endl;
}