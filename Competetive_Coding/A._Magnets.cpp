#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    vector<string>mng(n);
    for(int i = 0; i<n; i++){
        cin>>mng[i];
    }
   
    for(int i = 0; i<n; i++){
        if(mng[i] != mng[i+1]){
            cout<<"i"<<i<<" :"<<mng[i]<<" i"<<i+1<<" "<<mng[i]<<endl;
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}