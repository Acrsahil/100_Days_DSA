#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;

    int count = 0;
    if(s.size() > 10){
    for(int i = 1; i<s.size()-1; i++){
        count++;
    }
    string str = to_string(count);
    string ans = s[0] + str +s[s.size()-1]; 
    cout<<ans<<endl;
    }else{
        cout<<s<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}