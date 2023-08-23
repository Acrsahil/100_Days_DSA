#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mini = INT_MIN, min = 0;
    int maxi = INT_MAX, max = 0;
    int num;
    for(int i = 0; i<n; i++){
        cin>>num;
        if(num > mini){
            mini = num;
            min = i;
        }
        if(num<=maxi){
            maxi = num;
            max = i;
        }
    }
        int res = min+n-1-max;
        if(min<max) {
        cout<<res<<endl;       
        }  
        else cout<<(res-1)<<endl;

    return 0;
}