#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int power(int x, int n) {

    if(n==0){
        return 1;
    }
    int smallOutput = x*power(x,n-1);
    return smallOutput;
}


int main(void){
    int x, n;
    cout<<"Type the base x : ";
    cin>>x;
    cout<<"Type the power it is raised to : ";
    cin>>n;
    cout<<endl<<x<<" raised to power "<<n<<" is : "<<power(x,n);
}