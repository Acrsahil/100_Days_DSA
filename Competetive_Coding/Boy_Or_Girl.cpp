#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string name;
    cin>>name;

    map<char,int> mp;

    vector<char> ans;

    for(int i = 0; i<name.size(); i++){
        mp[name[i]]++; // count of the character in the string
    }
    
    for( auto i : mp){
        ans.push_back(i.first); // inserting the destinct character
    }

    if(ans.size()&1){
        cout<<"IGNORE HIM!"<<endl;
    }else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}