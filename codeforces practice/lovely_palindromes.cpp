#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(void){
    string a;
    cin>>a;

    int n=0;
    while (a[n]!='\0')
    {
        n++;
    }
    
    cout<<a;
    while (n--)
    {
        cout<<a[n];
    }
    

}