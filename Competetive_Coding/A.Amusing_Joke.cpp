#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,ans;
    cin>>a>>b>>c;
    ans = a+b;
    sort(ans.begin(),ans.end());
    sort(c.begin(),c.end());
    if(ans == c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}