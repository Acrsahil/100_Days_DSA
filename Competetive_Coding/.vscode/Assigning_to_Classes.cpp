#include <bits/stdc++.h>
using namespace std;
void debug(int n){
    cout<<n<<endl;
}

int main()
{
    int t;
    cin>>t;
    vector<int>res;
    while(t--){

    int n;
    cin>>n;

    vector<int>arr(n*2);
    for(int i = 0; i<n*2; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int res = abs(arr[n]-arr[n-1]); // abs -> for absulute value
    cout<<res<<endl;

    }

    
    return 0;
}