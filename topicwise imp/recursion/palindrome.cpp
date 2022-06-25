#include <iostream>
#include <climits>
#include <algorithm>
#include <cstring>

using namespace std;

bool isPalindrome(int i,char c[]){
    int len = strlen(c);
    if(i>=len/2){
        return 1;
    }
    else if(c[i]!=c[len-i-1]){
        return 0;
    }
    else{
        return isPalindrome(i+1,c);
    }
}

int main(void){
    //check if a string is palindrome, using recurssion
    char c[40];
    cin>>c;
    if(isPalindrome(0,c)){
        cout<<"Yes given string is a palindrome";
    }
    else{
        cout<<"No given string is not a palindrome";
    }
}