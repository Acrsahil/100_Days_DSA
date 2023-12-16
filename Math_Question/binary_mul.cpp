#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int binMul(long long a,long long b){

    int ans = 0;
    while(b>0){
        if(b&1){
            ans = (ans +  a)%M;
        }
        a = (a+a)%M;
        b >>= 1;
    }
    return ans;
}
int binary_exp(int a,int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = binMul(ans,a);
        }
        a = binMul(a,a);
        b >>= 1;
    }
    return ans;
}
int main()
{
    cout << binary_exp(20,3)<< endl;
    return 0;
}