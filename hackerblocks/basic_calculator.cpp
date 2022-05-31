#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    char ch;
    int a,b;
    while(true){
        cin>>ch;
        if(ch=='x'||ch=='X'){
            break;
        }
        else if(ch=='/'){
            cin>>a>>b;
            cout<<a/b<<endl;
        }
        else if(ch=='+'){
            cin>>a>>b;
            cout<<a+b<<endl;
        }
        else if(ch=='-'){
            cin>>a>>b;
            cout<<a-b<<endl;
        }
        else if(ch=='*'){
            cin>>a>>b;
            cout<<a*b<<endl;
        }
        else if(ch=='%'){
            cin>>a>>b;
            cout<<a%b<<endl;
        }
        else{
            cout<<"Invalid operation. Try again."<<endl;
        }
    }
}