#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>ans;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        bool istrue = true;
        for(int j = n-1; j>0; j--){
            if(v[j]-v[j-1]>1){
                istrue = false;
                break;
            }
        }
        if(istrue){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        

    }
    return 0;
}