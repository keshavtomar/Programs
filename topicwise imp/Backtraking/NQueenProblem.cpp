#include<bits/stdc++.h>
using namespace std;

bool isUnderAttack(int x, int y, vector<pair<int,int>> PreviousQueens){
    int size=x;              //if i am in the xth row, the size of previous queens array has to be x

    // cout<<"size becomes "<<size<<endl;

    for(int i=0; i<size; i++){
            //check if the cell is in the same column
            if(y==PreviousQueens[i].second){
                return true;
            }
            // prev = {2,5} then new {4,7}  and new {4,3} are both under attack
            if(x-PreviousQueens[i].first==abs(y-PreviousQueens[i].second)){
                return true;
            }
    }

    return false;
}

void print(vector<pair<int,int>> PreviousQueens){
    int n=PreviousQueens.size();
    int p=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==PreviousQueens[p].first&&j==PreviousQueens[p].second){
                cout<<"1 ";
                p++;
            }
            else{
                cout<<"0 ";
            }
        }
    }
    cout<<endl;
    return;

};

void solve(int n, int x, vector<pair<int,int>> PreviousQueens){
     if(x==n){
        print(PreviousQueens);
        return;
     }

     for(int j=0; j<n; j++){
        if(!isUnderAttack(x,j,PreviousQueens)){
            PreviousQueens.push_back({x,j});
            solve(n,x+1,PreviousQueens);
            PreviousQueens.pop_back();
        }
     }

     return;
}


int main(){
    int n;
    cin>>n;

    vector<pair<int,int>> PreviousQueens;

    solve(n,0,PreviousQueens);

    return 0;
}