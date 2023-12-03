#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
// b<=10^18

int binaryite(int a,int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a)%M;
        }
        a = (a*1LL*a)%M; // modulo operation to reduce the data type overhead
        b>>=1;
    }
    return ans;
}
int main()
{
    cout << binaryite(5,2)<< endl;
    return 0;
}