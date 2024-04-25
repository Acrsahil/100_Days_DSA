#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int binaryexponation(int x,int y){
    if(y==0) return 1;
    int res = binaryexponation(x,y/2);
    if(y&1){
       return (x * ((res *1LL* res)%M))%M;
    }else{
        return (res * 1LL *res) %M;
    print()
    }
}
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
    int a;
    int b;
    cin >> a >> b;
    cout << binaryite(a,b) << endl;
    cout << binaryexponation(a,b) << endl;

    return 0;
}
