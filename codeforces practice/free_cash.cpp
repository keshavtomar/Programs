#include <iostream>
#include <algorithm>

using namespace std;

typedef struct customer{
    int hour;
    int minutes;
}customer;

int main(void){
    int n;
    cin>>n;
    customer arrival_time[100000];
    for(int i=0; i<n; i++){
        cin>>arrival_time[i].hour>>arrival_time[i].minutes;
    }
    int maximum_streak=1;
    int single_streak=1;
    for (size_t i = 1; i < n; i++)
    {
        if(arrival_time[i].hour==arrival_time[i-1].hour&&arrival_time[i].minutes==arrival_time[i-1].minutes){
            single_streak++;
            if(single_streak>maximum_streak){
                maximum_streak=single_streak;
            }
        }
        else{
            single_streak=1;
        }
    }
    cout<<maximum_streak<<endl;
    
}