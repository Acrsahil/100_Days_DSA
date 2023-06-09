#include<iostream>
using namespace std;


int catalan(int n){
        int ans = 0;
    if(n<=1){
        return 1;
    }
        for(int i = 0;i<=n-1;i++){
            ans += catalan(i) * catalan(n-i-1);
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
        
    for(int i = 0;i<n; i++){
    cout<<catalan(i)<<" ";
    }
    
    return 0;
}