#include <iostream>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    cin>>t;

    string ans;
    bool checked = 1;

    for(int i = 0; i<s.size(); i++){
        if(s[i] != t[t.size()-i-1]){
            checked = 0;
        }
    }
    if(checked){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
