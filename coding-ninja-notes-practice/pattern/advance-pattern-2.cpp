#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int i=1;
    int spaces=n/2;
    int column=1;
    while(i<=n){
        int j=1;
        while(j<=abs(spaces)){
            cout<<"   ";
            j++;
        }
        j=1;
        while(j<=column){
            cout<<setw(3)<<j;
            j++;
        }
        if(i>n/2){
          column-=2;
        }
        else{
          column+=2;
        }

        i++;
        spaces--;
        cout<<endl;
    }
}