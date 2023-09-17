#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t;
    cin>>n>>t;

    vector<int> v(n);
    for(int i = 1; i<=n-1; i++){
        cin>>v[i];
    }
    int pos = 1;
    int next;
    while(pos<t){
        next = pos + v[pos];
        pos = next;
    }
    if(pos == t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}