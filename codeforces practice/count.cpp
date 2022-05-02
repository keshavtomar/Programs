#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int a;
    int count = 0;
    do{
        count++;
        cin>>a;
    }
    while(a!='\0');
    cout<<count;
}