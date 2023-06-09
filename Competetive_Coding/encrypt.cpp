#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0;i<s.size();i++){
        int j = i+1;
       while(j<s.size()){
        if(s[i]==s[j]){
           s.erase(i+1,j-i);
                break;
        }
            j++;
       }

    }
    for(auto i : s){
        cout<<i<<" ";
    }
    }

    return 0;
}