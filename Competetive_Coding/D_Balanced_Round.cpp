#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int ans = 0;
        int count = 1,n,k;
        cin>> n>> k;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>> arr[i];
        }
        if(n==1){
            cout<< 0 << endl;
            continue;
        }
        sort(arr,arr+n);

        for(int i = 0; i<n-1; i++){ 
            if(arr[i+1]-arr[i]<=k){ // count of valid element
                count++;
            }else{
                count = 1; // reset count because element is greater than k
            }
            ans = max(ans,count);
        }
        cout<< n-ans << endl;
    }
    return 0;
}