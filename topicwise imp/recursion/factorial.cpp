#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    int ans = n * factorial(n-1);
    return ans; 
};

int main(void){
    cout<<"Factorial of 5 is "<<factorial(5);
}