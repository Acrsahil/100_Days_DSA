#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
int binary_exp(int a,int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = (ans *1LL * a)%M;
        }
        a = (a*1LL*a)%M;
        b >>= 1;
    }
    return ans;
}
int main()
{
    cout << binary_exp(20,3)<< endl;
    return 0;
}