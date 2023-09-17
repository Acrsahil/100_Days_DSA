#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int sum = arr[n-1];
    for(int i = n-2; i>=0; i--){
        int last = arr[i+1]-1;
        int less = arr[i];
       int mins = min(last,less);
        if(mins<0){
            mins = 0;
        }
        arr[i] = mins;
        sum +=mins;

    }
    cout<<sum<<endl;

    return 0;
}