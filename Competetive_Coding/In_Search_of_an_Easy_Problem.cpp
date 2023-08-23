#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num;
    bool check = 0;
    for(int i = 0; i<n; i++){
        cin>>num;
        if(num == 1){
            check = 1;
        }
    }
    if(check){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
    
    return 0;
}