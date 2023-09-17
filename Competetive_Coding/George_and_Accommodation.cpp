#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>room;
    int count = 0;
    int t;
    cin>>t;
    while(t--){
    int key;
    int value;
        cin>>key>>value;
        room.push_back({key,value});
    }
    for(auto i : room){
        if(i.second-i.first >=2){
            // cout<<"first " <<i.first<<" second "<<i.second <<" count "<<count<<endl;
            count++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}